#include <iostream>
#include <queue>

using namespace std;

const int NUM_STUDENTS = 10;
const int NUM_SCORES = 3;
class Students
{
private:
	int sid;
	string sname;
	vector<double> score;

public:
	Students() : sid(0), sname() {}
	Students(int id, string name, double s0, double s1, double s2)
	{
		sid = id;
		sname = name;
		score.push_back(s0);
		score.push_back(s1);
		score.push_back(s2);
	}
	int getSid() const { return sid; }
	string getSname() const { return sname; }
	vector<double> const &getScore() const { return score; }
	void setSid(int id) { sid = id; }
	void setSname(string name) { sname = name; }
	void setScore(double s0, double s1, double s2)
	{
		score.clear();
		score.push_back(s0);
		score.push_back(s1);
		score.push_back(s2);
	}
	void printStudent() const
	{
		cout << "Student ID: " << sid << "\t";
		cout << "Name: " << sname << "\t";
		for (int i = 0; i < NUM_SCORES; i++)
			cout << score[i] << "\t";
		cout << endl;
	}
};

