#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student : public Person {
private:
    string major;
    int yearLevel;
public:
    Student(string n, int i, string m, int y);
    void display();
    string getMajor();
    int getYearLevel();
};

#endif
