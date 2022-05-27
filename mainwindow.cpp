#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>


QT_CHARTS_USE_NAMESPACE

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPieSeries *series = new QPieSeries();
    series->append("Jane", 1);
    series->append("Joe", 2);
    series->append("Andy", 3);
    series->append("Barbara", 4);
    series->append("Axel", 5);

    QPieSeries *series2 = new QPieSeries();
    series2->append("Edda", 2);
    series2->append("Jonni", 5);

    QPieSlice *slice = series->slices().at(1);
    slice->setExploded();
    slice->setLabelVisible();
    slice->setPen(QPen(Qt::darkGreen, 2));
    slice->setBrush(Qt::green);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Simple piechart example");
    chart->legend()->hide();

    QChart *chart2 = new QChart();
    chart2->addSeries(series2);
    chart2->setTitle("SecondChart");
    chart2->legend()->hide();

    pillChart = new QChart();
    pillChart->setTitle("PillPlate");
    glassChart = new QChart();
    glassChart->setTitle("GlassPlate");
    leftPlateChart = new QChart();
    leftPlateChart->setTitle("LeftPlate");
    rightPlateChart = new QChart();
    rightPlateChart->setTitle("RightPlate");


    pillChartView = new QChartView();
    pillChartView->setRenderHint(QPainter::Antialiasing);
    glassChartView = new QChartView();
    glassChartView->setRenderHint(QPainter::Antialiasing);
    plateLeftChartView = new QChartView();
    plateLeftChartView->setRenderHint(QPainter::Antialiasing);
    plateRightChartView = new QChartView();
    plateRightChartView->setRenderHint(QPainter::Antialiasing);

    topLayout = ui->topHorizontalLayout;
    bottomLayout = ui->BottomHorizontalLayout;

    topLayout->addWidget(pillChartView);
    topLayout->addWidget(glassChartView);
    bottomLayout->addWidget(plateLeftChartView);
    bottomLayout->addWidget(plateRightChartView);


}

MainWindow::~MainWindow()
{
    delete ui;
}

