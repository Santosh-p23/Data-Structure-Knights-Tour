#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define DIMENSION 8
#include <QMainWindow>
#include<QGraphicsScene>
#include<iostream>
#include <QPixmap>
#include "wholeboard.h"
#include "solvePath.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_resetAll_clicked();


    void on_autoSolve_clicked();

    void on_recap_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    wholeBoard Board;
    solvePath path;

};
#endif // MAINWINDOW_H
