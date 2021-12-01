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
            SID = 0;
            Sname = " ";
            scores = nullptr;
        }
        Student(int i, string name, double *sc)
        {
            SID = i;
            Sname = name;
            scores = sc;
        }
        int getID () {return SID;}
        string getName() {return Sname;}
        double *getScores() {return scores;}
};
