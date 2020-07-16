//
// Created by deepin on 2020/7/13.
//

#ifndef QT_UI_CALCAULATOR_H
#define QT_UI_CALCAULATOR_H

#include "ui_CalcaulatorDialog.h"

class Calcaulator: public QDialog{
    Q_OBJECT
public slots:
    /**
     * 计算结果
     */
    void calcClicked(void);

    void showEditor(void);
public:
    Calcaulator();

private:
    Ui::CalcaulatorDialog* calcaulatorDialog;
    void connect(void);
};


#endif //QT_UI_CALCAULATOR_H
