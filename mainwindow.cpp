#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QImageReader>
#include <QColorDialog>
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnLoadImage_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open Image", "", "Image Files (*.png *.jpg *.bmp)");
    if (!fileName.isEmpty()) {
        loadedImage.load(fileName);
        ui->lblImage->setPixmap(QPixmap::fromImage(loadedImage));
    }

}

int colorDistance(const QColor &c1, const QColor &c2) {
    int rDiff = c1.red() - c2.red();
    int gDiff = c1.green() - c2.green();
    int bDiff = c1.blue() - c2.blue();
    return std::sqrt(rDiff * rDiff + gDiff * gDiff + bDiff * bDiff);
}

void MainWindow::on_btnSelectColor_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this, "Select Color to Remove");
    if (color.isValid()) {
        selectedColors.append(color);  // Add the selected color to the list
    }}


void MainWindow::on_btnRemoveColor_clicked()
{
    if (!loadedImage.isNull() && !selectedColors.isEmpty()) {
        int tolerance = ui->sliderTolerance->value();  // Get tolerance value from the slider

        for (int y = 0; y < loadedImage.height(); ++y) {
            for (int x = 0; x < loadedImage.width(); ++x) {
                QColor currentColor = loadedImage.pixelColor(x, y);

                // Check if the current color is close to any of the selected colors
                for (const QColor &color : selectedColors) {
                    if (colorDistance(currentColor, color) <= tolerance) {
                        loadedImage.setPixelColor(x, y, QColor(0, 0, 0, 0));  // Replace with transparency
                        break;
                    }
                }
            }
        }
        ui->lblImage->setPixmap(QPixmap::fromImage(loadedImage));
    }
}


void MainWindow::on_btnSaveImage_clicked()
{
    if (!loadedImage.isNull()) {
        QString fileName = QFileDialog::getSaveFileName(this, "Save Image", "", "PNG (*.png);;JPEG (*.jpg);;BMP (*.bmp)");
        if (!fileName.isEmpty()) {
            loadedImage.save(fileName);
        }
    }

}



