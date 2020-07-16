//
// Created by deepin on 2020/7/17.
//

#ifndef QT_UI_CALCULATE_H
#define QT_UI_CALCULATE_H

#include <iostream>
#include <cstring>
#include <QString>

using namespace std;

class calculate {
public:
    static void calculateExpr(string& s);
    static void calculateExpr(QString& s);
    static void calculateExpr(char* s);
};


#endif //QT_UI_CALCULATE_H
