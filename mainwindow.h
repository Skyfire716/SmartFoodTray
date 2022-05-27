#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

QT_CHARTS_USE_NAMESPACE

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QHBoxLayout* topLayout;
    QHBoxLayout* bottomLayout;
    QChart *pillChart;
    QChart *glassChart;
    QChart *leftPlateChart;
    QChart *rightPlateChart;
    QChartView *pillChartView;
    QChartView *glassChartView;
    QChartView *plateLeftChartView;
    QChartView *plateRightChartView;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
