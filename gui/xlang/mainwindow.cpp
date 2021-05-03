#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->runButton, SIGNAL(clicked()), this, SLOT(onRunButtonClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onRunButtonClicked()
{

}
