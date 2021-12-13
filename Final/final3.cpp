#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float scanNum(char cha)
{
    int value;
    value = cha;
    return float(value -'0');
}
int isOperator(char cha)
{
    if(cha == '+' || cha == '-' || cha == '*' || cha == '/' || cha == '^')
        return 1;
        return -1;
}
int isOperand(char cha)
{
    
}