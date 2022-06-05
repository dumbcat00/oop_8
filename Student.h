#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Student {
private:
	string name;
	int age;
	int course;

public:
	void setName(string Name) {
		name = Name;
	}
	string getName() const {
		return name;
	}
	void setAge(int Age) {
		age = Age;
	}
	int getAge() const {
		return age;
	}
	void setCourse(int Course) {
		course = Course;
	}
	int getCourse()const {
		return course;
	}

	Student& operator = (Student oth) {
		this->name = oth.name;
		this->age = oth.age;
		this->course = oth.course;
		return *this;
	}


};

ostream& operator << (ostream& out, const Student& s) {
	return out << "Name: " << s.getName() << "\nAge: " << s.getAge() << "\nCourse: " << s.getCourse() << endl;
}

istream& operator >> (istream& in, Student& s) {
	string x1;
	int x2, x3;
	in >> x1 >> x2 >> x3;
	s.setName(x1);
	s.setAge(x2);
	s.setCourse(x3);
	return in;
}