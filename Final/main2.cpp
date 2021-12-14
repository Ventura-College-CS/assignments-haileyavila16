#include <iostream>
#include <fstream>
#include "final1.hpp"

using namespace std;

void quick_sort(Course *, int, int);

int main() {

    ifstream data_file("input_data.txt");

    if (data_file.fail()) {
        cout << "Failed to open input_data.txt file" << endl;
        cout << "Make sure input_data.txt file is in the current working directory." << endl;
        return 1;
    }

    Course courses[10];
    int n = 0;

    while (!data_file.eof()) {
        int id, credit;
        string name;

        data_file >> id;
        data_file >> name;
        data_file >> credit;

        Course c(id, name, credit);

        courses[n++] = c;
    }

    data_file.close();

    cout << "Array before sorting:" << endl;
    for (int i = 0; i < n; i++) {
        courses[i].print();
    }

    quick_sort(courses, 0, n - 1);

    cout << "\nArray after performing quick sort:" << endl;
    for (int i = 0; i < n; i++) {
        courses[i].print();
    }

    return 0;
}
void quick_sort(Course *courses, int l, int h) {
    if (l >= h) return;

    int i = l - 1;
    int j = h + 1;
    Course course = courses[(l + h) / 2];

    while (i < j) {
        while (courses[++i].getId() < course.getId());
        while (courses[--j].getId() > course.getId());
        if (i < j) {
            Course temp = courses[i];
            courses[i] = courses[j];
            courses[j] = temp;
        }
    }
    quick_sort(courses, l, i);
    quick_sort(courses, i + 1, h);
}