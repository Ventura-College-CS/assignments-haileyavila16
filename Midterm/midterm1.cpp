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
template<class T>
class Stack 
{
    private:
        vector<T> pool;
    public:
        void push(const T &el)
        {
            pool.push_back(el);
        }
        T pop()
        {
            T res = pool[pool.size()-1];
            pool.pop_back();
            return res;
        }
        T topEl()
        {
            return pool[pool.size()-1];
        }
        bool isEmpty()
        {
            return pool.size()==0;
        }
        int size() {return pool.size();}
};
int main() 
{
    Student s1(1, "Jess", new double[3]{1, 2, 3});
    Student s2(1, "Jay", new double[3]{4, 5, 6});
    Student s3(1, "Alex", new double[3]{7, 8, 9});
    Student s4(1, "Lexi", new double[3]{10, 11, 12});
    Student s5(1, "Ray", new double[3]{13, 14, 15});

    Stack<Student> st;
    st.push(s1);
    st.push(s2);
    st.push(s3);
    st.push(s4);
    st.push(s5);

    cout << "Size: " << st.size() << endl;
    while(!st.isEmpty())
    {
        Student res = st.pop();
        cout << "SID: " << res.getID() << " ,Sname: ";
        cout << res.getScores()[0] << " , " << endl;    
    }
    return 0;
}    
