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
    if(cha >= '0' && cha <= '9')
        return 1;
    return -1;
}
float operation(int a, int b, char op)
{
    if(op == '+')
        return b+a;
    else if(op == '-')
        return b-a;
    else if(op == '*')
        return b*a;
    else if(op == '/')
        return b/a;
    else if(op == '^')
        return b^a;
    else
return INT_MIN;
}
