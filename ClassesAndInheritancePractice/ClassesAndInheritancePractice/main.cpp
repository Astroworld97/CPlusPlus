//
//  ClassesAndInheritancePractice
//  From "Chapter 12: C and C++" of Cracking the Coding Interview
//  Created by Ian Gonzalez on 1/6/21.
//  Copyright © 2021 Ian Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;

#define NAME_SIZE 50 //defines a macro

class Person{
    int id; //all members are private by default
    char name[NAME_SIZE];
    
public:
    Person(int a){ //constructor
        id = a;
    }
    
    ~Person(){ //destructor
        delete this; //free any memory allocated within class
    }
    
    public:
        void aboutMe(){
            cout << "I am a person." << endl;
        }
};

class Student : public Person{
    public:
    void aboutMe(){
        cout << "I am a student." << endl;
    }
};


int main() {
    Student* s = new Student();
    s->aboutMe(); // prints "I am a student."
    delete s; // Important! Make sure to delete allocated memory
    Person* p = new Person(3);
    p->aboutMe();
    delete p;
    return 0;
};
