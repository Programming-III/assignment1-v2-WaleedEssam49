#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int id;
public:
    Person(string n, int i);
    void display();
    string getName();
    int getId();
};

#endif
