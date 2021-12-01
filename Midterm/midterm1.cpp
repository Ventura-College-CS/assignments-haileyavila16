#include <iostream>
#include <vector>
using namespace std;

class Student
{
   private: 
       int SID;
       string Sname;
       double *scores;
    public:
        Student()
        {
            SID=0;
            Sname=" ";
            scores=nullptr;
        }
}