#include "Student.h"

int main() {
    std::cout << "enter name, age and course of student: ";
    Student s1;
    cin >> s1;

    Student s2;
    s2 = s1;
    cout << s2 << endl;
}