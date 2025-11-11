#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

class Course {
private:
    string courseName;
    string courseCode;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    Course(string name, string code, int max);
    ~Course();

    bool addStudent(Student s);
    void displayCourseInfo();
};

#endif
