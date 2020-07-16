//
// Created by deepin on 2020/7/17.
//
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<stack>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
stack<char>s1;//在装换为后缀表达式时，s1用于储存运算符。在计算后缀表达式时，用于储存运算数
stack<char>s2;//在转换为后缀表达式时，s2用于储存临时的后缀表达式，在计算后缀表达式时。用于储存运算符；
#include "calculate.h"

extern int trans_middle_to_behind(string);
extern double cal(string);


void calculate::calculateExpr(string &s) {

}

void calculate::calculateExpr(QString &s) {
    //1.QString转换String string s = qstr.toStdString();
    //2.String转换QString QString qstr2 = QString::fromStdString(s);
    string mids = s.toStdString();
    int a = trans_middle_to_behind(mids);
    if(a){
        s = "表达式错误！";
        //return ;
    }
    double d = cal(mids);
    string result = to_string(d);
    s = QString::fromStdString(result);
}

void calculate::calculateExpr(char *s) {

}

/**
 * 将中缀表达式装换为后缀表达式
 * @param middle
 * @return
 */
int trans_middle_to_behind(string middle)
{
    int len=middle.size();
    // cout<<len<<endl;
    for(int i=0;i<len;i++)
    {
        if(middle[i]>='0'&&middle[i]<='9')
        {
            s2.push(middle[i]);
        }
        else if(middle[i]=='(')
            s1.push(middle[i]);
        else if(middle[i]=='+'||middle[i]=='-')
        {
            if(s1.empty()||s1.top()=='(')
            {
                s1.push(middle[i]);
            }
            else
            {
                while(!s1.empty()&&s1.top()!='(')
                {
                    s2.push(s1.top());
                    s1.pop();
                }
                s1.push(middle[i]);
            }
        }
        else if(middle[i]=='*'||middle[i]=='/')
        {
            if(s1.empty()||s1.top()=='('||s1.top()=='+'||s1.top()=='-')
                s1.push(middle[i]);
            else if(!s1.empty()&&s1.top()=='*'||s1.top()=='/')
            {
                while(!s1.empty()&&s1.top()=='*'||s1.top()=='/')
                {
                    s2.push(s1.top());
                    s1.pop();
                }
                s1.push(middle[i]);
            }
        }
        else if(middle[i]==')')
        {
            while(s1.top()!='(')
            {
                s2.push(s1.top());
                s1.pop();
            }
            s1.pop();
        }
        else
        {
            return 1;
        }
    }
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    //  cout<<"wokao"<<endl;
    return 0;
}
double cal(string behind)//计算后缀表达式的值
{
    int len=s2.size();
    // cout<<len<<endl;
    for(int i=len-1;i>=0;i--)
    {
        //   cout<<s2.top()<<endl;
        if(s2.top()>='0'&&s2.top()<='9')
            behind[i]=(s2.top()-'0');
        else
            behind[i]=s2.top();
        s2.pop();
    }
    // cout<<"wofan"<<endl;
    stack<double>ans;
    for(int i=0;i<len;i++)
    {
        if(behind[i]>=0&&behind[i]<=9)
            ans.push((double)behind[i]);
        else
        {
            double tmp;
            if(behind[i]=='+')
            {
                tmp=0.0;
                tmp+=(double)ans.top();
                ans.pop();
                tmp+=(double)ans.top();
                ans.pop();
                ans.push(tmp);
            }
            else if(behind[i]=='*')
            {
                tmp=1.0;
                tmp*=(double)ans.top();
                ans.pop();
                tmp*=(double)ans.top();
                ans.pop();
                ans.push(tmp);
            }
            else if(behind[i]=='/')
            {
                tmp=(double)ans.top();
                ans.pop();
                tmp=(double)ans.top()/tmp;
                ans.pop();
                ans.push(tmp);
            }
            else
            {
                tmp=(double)ans.top();
                ans.pop();
                tmp=(double)ans.top()-tmp;
                ans.pop();
                ans.push(tmp);
            }
        }
    }
    return ans.top();
}