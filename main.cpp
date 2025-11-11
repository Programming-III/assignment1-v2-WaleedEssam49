#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
// ==================== Person Class =========================
class Person {
private:
    string name;
    int id;
public:
    Person(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }

    string getName() {
        return name;
    }

    int getId() {
        return id;
    }
};

// ==================== Student Class =========================
class Student : public Person {
private:
    string major;
    int yearLevel;
public:
    Student(string n, int i, string m, int y) : Person(n, i) {
        major = m;
        yearLevel = y;
    }

    void display() {
        Person::display();
        cout << "Major: " << major << ", Year Level: " << yearLevel << endl;
    }

    string getMajor() {
        return major;
    }

    int getYearLevel() {
        return yearLevel;
    }
};

// ==================== Instructor Class =========================
class Instructor : public Person {
private:
    string department;
    int experienceYears;
public:
    Instructor(string n, int i, string d, int e) : Person(n, i) {
        department = d;
        experienceYears = e;
    }

    void display() {
        Person::display();
        cout << "Department: " << department
             << ", Years of Experience: " << experienceYears << endl;
    }

    string getDepartment() {
        return department;
    }

    int getExperience() {
        return experienceYears;
    }
};

// ==================== Course Class =========================
class Course {
private:
    string courseName;
    string courseCode;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    Course(string name, string code, int max) {
        courseName = name;
        courseCode = code;
        maxStudents = max;
        currentStudents = 0;
        students = new Student[maxStudents];
    }

    ~Course() {
        delete[] students;
    }

    bool addStudent(Student s) {
        if (currentStudents >= maxStudents) {
            return false; // course is full
        }
        students[currentStudents] = s;
        currentStudents++;
        return true;
    }

    void displayCourseInfo() {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Max Students: " << maxStudents << endl;
        cout << "Current Students: " << currentStudents << endl;
        cout << "Enrolled Students:" << endl;
        for (int i = 0; i < currentStudents; i++) {
            students[i].display();
            cout << "------------------------" << endl;
        }
    }
};

// ==================== Main Function =========================
int main() {
    Student s1("Omar Nabil", 1, "Computer Science", 2);
    Student s2("Jane Smith", 2, "Mathematics", 3);

    Instructor instr("Dr. Lina Khaled", 100, "Computer Science", 10);

    Course course("Data Structures", "CS201", 3);

    course.addStudent(s1);
    course.addStudent(s2);

    course.displayCourseInfo();

    instr.display();

    return 0;
}
