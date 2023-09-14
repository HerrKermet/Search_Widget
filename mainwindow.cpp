#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFrame"
#include "QLabel"
#include "QPushButton"
#include "QCheckBox"
#include "QGridLayout"
#include "QComboBox"
#include "QLabel"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGridLayout* layout = new QGridLayout(this);



    QComboBox* inputBox = new QComboBox();
    inputBox->setEditable(true);

    QCheckBox* incrementalSearchBox = new QCheckBox("Incremental search");
    QCheckBox* exactMatchBox = new QCheckBox("Exact match");
    QCheckBox* caseSensitiveBox = new QCheckBox("Case sensitive");
    QCheckBox* regExBox = new QCheckBox("Regular expression");

    QLabel* columnLabel = new QLabel();
    columnLabel->setText("Search in column");

    QComboBox* columnBox = new QComboBox();
    columnBox->setEditable(true);

    QPushButton* searchBtn = new QPushButton("Search");
    QPushButton* closeBtn = new QPushButton("Close");


    layout->addWidget(inputBox, 0, 0, 0, 3);
    layout->addWidget(incrementalSearchBox, 1, 0);
    layout->addWidget(exactMatchBox, 2, 0);
    layout->addWidget(caseSensitiveBox, 3, 0);
    layout->addWidget(regExBox, 4, 0);
    layout->addWidget(columnLabel, 5, 0);
    layout->addWidget(columnBox, 5, 1, Qt::AlignLeft);
    layout->addWidget(searchBtn, 6, 2);
    layout->addWidget(closeBtn, 6, 3);

    ui->centralwidget->setLayout(layout);

}

MainWindow::~MainWindow()
{
    delete ui;
}


