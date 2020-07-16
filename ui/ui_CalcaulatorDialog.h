/********************************************************************************
** Form generated from reading UI file 'CalcaulatorDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCAULATORDIALOG_H
#define UI_CALCAULATORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CalcaulatorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QPushButton *buttonC;
    QPushButton *buttonRightKuoHao;
    QPushButton *buttonLeftKuoHao;
    QPushButton *button3;
    QPushButton *button9;
    QPushButton *buttonReduce;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *buttonMul;
    QPushButton *button2;
    QPushButton *button1;
    QPushButton *buttonDiv;
    QPushButton *button0;
    QPushButton *buttonSpot;
    QPushButton *buttonEqual;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *buttonAdd;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *CalcaulatorDialog)
    {
        if (CalcaulatorDialog->objectName().isEmpty())
            CalcaulatorDialog->setObjectName(QStringLiteral("CalcaulatorDialog"));
        CalcaulatorDialog->resize(700, 409);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalcaulatorDialog->sizePolicy().hasHeightForWidth());
        CalcaulatorDialog->setSizePolicy(sizePolicy);
        CalcaulatorDialog->setStyleSheet(QStringLiteral("background-image: url(:/1.jpg);"));
        verticalLayout = new QVBoxLayout(CalcaulatorDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 83, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonC = new QPushButton(CalcaulatorDialog);
        buttonC->setObjectName(QStringLiteral("buttonC"));

        gridLayout->addWidget(buttonC, 1, 0, 1, 1);

        buttonRightKuoHao = new QPushButton(CalcaulatorDialog);
        buttonRightKuoHao->setObjectName(QStringLiteral("buttonRightKuoHao"));

        gridLayout->addWidget(buttonRightKuoHao, 1, 2, 1, 1);

        buttonLeftKuoHao = new QPushButton(CalcaulatorDialog);
        buttonLeftKuoHao->setObjectName(QStringLiteral("buttonLeftKuoHao"));

        gridLayout->addWidget(buttonLeftKuoHao, 1, 1, 1, 1);

        button3 = new QPushButton(CalcaulatorDialog);
        button3->setObjectName(QStringLiteral("button3"));

        gridLayout->addWidget(button3, 4, 2, 1, 1);

        button9 = new QPushButton(CalcaulatorDialog);
        button9->setObjectName(QStringLiteral("button9"));

        gridLayout->addWidget(button9, 2, 2, 1, 1);

        buttonReduce = new QPushButton(CalcaulatorDialog);
        buttonReduce->setObjectName(QStringLiteral("buttonReduce"));

        gridLayout->addWidget(buttonReduce, 2, 3, 1, 1);

        button4 = new QPushButton(CalcaulatorDialog);
        button4->setObjectName(QStringLiteral("button4"));

        gridLayout->addWidget(button4, 3, 0, 1, 1);

        button5 = new QPushButton(CalcaulatorDialog);
        button5->setObjectName(QStringLiteral("button5"));

        gridLayout->addWidget(button5, 3, 1, 1, 1);

        button6 = new QPushButton(CalcaulatorDialog);
        button6->setObjectName(QStringLiteral("button6"));

        gridLayout->addWidget(button6, 3, 2, 1, 1);

        buttonMul = new QPushButton(CalcaulatorDialog);
        buttonMul->setObjectName(QStringLiteral("buttonMul"));

        gridLayout->addWidget(buttonMul, 3, 3, 1, 1);

        button2 = new QPushButton(CalcaulatorDialog);
        button2->setObjectName(QStringLiteral("button2"));

        gridLayout->addWidget(button2, 4, 1, 1, 1);

        button1 = new QPushButton(CalcaulatorDialog);
        button1->setObjectName(QStringLiteral("button1"));

        gridLayout->addWidget(button1, 4, 0, 1, 1);

        buttonDiv = new QPushButton(CalcaulatorDialog);
        buttonDiv->setObjectName(QStringLiteral("buttonDiv"));

        gridLayout->addWidget(buttonDiv, 4, 3, 1, 1);

        button0 = new QPushButton(CalcaulatorDialog);
        button0->setObjectName(QStringLiteral("button0"));

        gridLayout->addWidget(button0, 5, 0, 1, 1);

        buttonSpot = new QPushButton(CalcaulatorDialog);
        buttonSpot->setObjectName(QStringLiteral("buttonSpot"));

        gridLayout->addWidget(buttonSpot, 5, 1, 1, 1);

        buttonEqual = new QPushButton(CalcaulatorDialog);
        buttonEqual->setObjectName(QStringLiteral("buttonEqual"));

        gridLayout->addWidget(buttonEqual, 5, 3, 1, 1);

        button7 = new QPushButton(CalcaulatorDialog);
        button7->setObjectName(QStringLiteral("button7"));

        gridLayout->addWidget(button7, 2, 0, 1, 1);

        button8 = new QPushButton(CalcaulatorDialog);
        button8->setObjectName(QStringLiteral("button8"));

        gridLayout->addWidget(button8, 2, 1, 1, 1);

        buttonAdd = new QPushButton(CalcaulatorDialog);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));

        gridLayout->addWidget(buttonAdd, 1, 3, 1, 1);

        lineEdit = new QLineEdit(CalcaulatorDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 18pt \"Sans Serif\";\n"
"border-color: rgb(255, 0, 0);"));
        lineEdit->setReadOnly(false);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 4);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(CalcaulatorDialog);

        QMetaObject::connectSlotsByName(CalcaulatorDialog);
    } // setupUi

    void retranslateUi(QDialog *CalcaulatorDialog)
    {
        CalcaulatorDialog->setWindowTitle(QApplication::translate("CalcaulatorDialog", "\345\260\217\345\255\246\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
        buttonC->setText(QApplication::translate("CalcaulatorDialog", "C", Q_NULLPTR));
        buttonRightKuoHao->setText(QApplication::translate("CalcaulatorDialog", ")", Q_NULLPTR));
        buttonLeftKuoHao->setText(QApplication::translate("CalcaulatorDialog", "(", Q_NULLPTR));
        button3->setText(QApplication::translate("CalcaulatorDialog", "3", Q_NULLPTR));
        button9->setText(QApplication::translate("CalcaulatorDialog", "9", Q_NULLPTR));
        buttonReduce->setText(QApplication::translate("CalcaulatorDialog", "-", Q_NULLPTR));
        button4->setText(QApplication::translate("CalcaulatorDialog", "4", Q_NULLPTR));
        button5->setText(QApplication::translate("CalcaulatorDialog", "5", Q_NULLPTR));
        button6->setText(QApplication::translate("CalcaulatorDialog", "6", Q_NULLPTR));
        buttonMul->setText(QApplication::translate("CalcaulatorDialog", "x", Q_NULLPTR));
        button2->setText(QApplication::translate("CalcaulatorDialog", "2", Q_NULLPTR));
        button1->setText(QApplication::translate("CalcaulatorDialog", "1", Q_NULLPTR));
        buttonDiv->setText(QApplication::translate("CalcaulatorDialog", "\303\267", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        button0->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        button0->setText(QApplication::translate("CalcaulatorDialog", "0", Q_NULLPTR));
        buttonSpot->setText(QApplication::translate("CalcaulatorDialog", ".", Q_NULLPTR));
        buttonEqual->setText(QApplication::translate("CalcaulatorDialog", "=", Q_NULLPTR));
        button7->setText(QApplication::translate("CalcaulatorDialog", "7", Q_NULLPTR));
        button8->setText(QApplication::translate("CalcaulatorDialog", "8", Q_NULLPTR));
        buttonAdd->setText(QApplication::translate("CalcaulatorDialog", "+", Q_NULLPTR));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CalcaulatorDialog: public Ui_CalcaulatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCAULATORDIALOG_H
