#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Instructor : public Person {
private:
    string department;
    int experienceYears;
public:
    Instructor(string n, int i, string d, int e);
    void display();
    string getDepartment();
    int getExperience();
};

#endif
