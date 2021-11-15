#include <iostream>
#include <PostFix.h>
using namespace std;

main()
{
 PostfixExpression p1;
 cout << "Enter the PostFix Expression:  ";
 string PostfixExp;   cin >> PostfixExp;
 p1.setPostfixExpression(PostfixExp);
 cout << "\n PostFix Expression:  ";
 p1.printPostfixExpression();
 cout << "\n The output is:  " << p1.Evaluation() << endl;
 PostfixExpression; p2("21+3*");
 cout << "\n The entered expression:  ";
 p2.printPostfixExpression();
 cout << "\n The output is:  " << p2.Evaluation() << endl; 
}
