//
// Created by deepin on 2020/7/13.
//

#include "Calcaulator.h"
#include "calculate.h"
Calcaulator::Calcaulator() {
    calcaulatorDialog=new Ui::CalcaulatorDialog();
    calcaulatorDialog->setupUi(this);
    connect();
}


void Calcaulator::calcClicked(void) {
    //1.÷转化为/
    QString str = calcaulatorDialog->lineEdit->text();
    str.replace("÷","/");
    calculate::calculateExpr(str);
    this->calcaulatorDialog->lineEdit->setText(str);
}


void Calcaulator::connect(void) {
    //在这里面写可以不用写QObject，这里方法名重复了

    QObject::connect(this->calcaulatorDialog->button0, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->buttonSpot, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->button1, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->button2, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->button3, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->button4, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->button5, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->button6, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->button7, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->button8, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->button9, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->buttonC, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->buttonAdd, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));

    QObject::connect(this->calcaulatorDialog->buttonReduce, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->buttonMul, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->buttonDiv, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->buttonRightKuoHao, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->buttonLeftKuoHao, SIGNAL(clicked(void)),
                     this, SLOT(showEditor(void)));
    QObject::connect(this->calcaulatorDialog->buttonEqual, SIGNAL(clicked(void)),
                     this, SLOT(calcClicked(void)));

}

void Calcaulator::showEditor(void) {
    QPushButton* btn= qobject_cast<QPushButton*>(sender());
    QString buttonName = btn->objectName();
    QString text =  this->calcaulatorDialog->lineEdit->text();
    QString newText = text+btn->text();
    if("buttonC"==buttonName){
        this->calcaulatorDialog->lineEdit->setText("");
    }else{
        this->calcaulatorDialog->lineEdit->setText(newText);
    }

}

