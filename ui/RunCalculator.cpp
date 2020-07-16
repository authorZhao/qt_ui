//
// Created by deepin on 2020/7/7.
//
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QMainWindow>
#include <QDialog>
#include <QFont>
#include <QSlider>
#include <QSpinBox>
#include "Calcaulator.h"

int main(int argc,char** argv)
{
    QApplication app(argc,argv);
    //创建父窗口
    //QWidget parent;
    //QMainWindow parent;
    Calcaulator parent;
    //parent.resize(300,400);//调整大小
    //parent.move(300,300);//调整位置
    parent.show();
    return app.exec();
}
