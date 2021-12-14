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
float Evaluate(string postfix)
{
    int a,b; 
    stack<int> post_stack;
    string::iterator it;
    for(it=postfix.begin(); it!=postfix.end(); it++)
    {
        if(isOperator(*it) !=-1)
        {
            a=post_stack.top();
            post_stack.pop();
            b=post_stack.top();
            post_stack.pop();
            post_stack.push(operation(a, b, *it));
        }
        else if(isOperand(*it)>0)
        {
            post_stack.push(scanNum(*it));
        }
    }
    return post_stack.top();
}
int main()
{
    string post = "78+";
    cout << "The postfix evaluation of " << post << " is " << Evaluate(post) << endl;
    post = "23*2/";
    cout << "The postfix evaluation of " << post << " is " << Evaluate(post) << endl;
    post = "34+6*7/";
    cout << "The postfix evaluation of " << post << " is " << Evaluate(post) << endl;
    post = "12+34+-";
    cout << "The postfix evaluation of " << post << " is " << Evaluate(post) << endl;

    return 0;
}
