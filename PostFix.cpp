#include <iostream>
#include <stack>
using namespace std;

class PostfixExpression
{
    private: string expression; 
    int isOperator(char op)
    {
        if(op=='+'||op=='-'||op=='*'||op=='/'||op=='^')
        {
            return 1;
        }    
        else
        {
            return -1;
        }
    }
    int Calculate(int a, int b, char op)
    {
        if(isOperator(op)==-1)
        {
            return INT32_MIN;
        }
        if(op=='+')    {return a+b;}
        else if(op=='-')   {return a-b;}
        else if(op=='*')   {return a*b;}
        else if(op=='/')   {return a/b;}
        else if(op=='^')   {return pow(a,b);}
    }
    public: PostfixExpression(string exp)
    {
        expression = exp;
    }
    PostfixExpression()
    {
        expression = "";
    }
    void setPostfixExpression(string exp)
    {
        expression = exp;
    }
    void printPostfixExpression()
    {
        cout << expression << endl;
    }
    int Evaluation()
    {
        int a,b;   stack<int>stack;
        for(int i=0;i<expression.size();i++)
        {
            if(isOperator(expression[i])!=-1)
            {
                a=stack.top();   stack.pop();
                b=stack.top();   stack.pop();
                stack.push(Calculate(a,b,expression[i]));
            }
            else
            {
                stack.push(expression[i]-'0');
            }
        }
        return stack.top();
    }
};