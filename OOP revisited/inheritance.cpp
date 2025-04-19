#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Types of Inheritance
// 1. Single Inheritance
// 2. Multiple Inheritance
// 3. Multilevel Inheritance


// Modes of Inheritance
// 1. Public Inheritance
// 2. Protected Inheritance
// 3. Private Inheritance

// Child class -> Private | Protected | Public
// Parent class
// Private     ->  X      |  X        | X
// Protected   -> Private | Protected | Protected
// Public      -> Private | Protected | Public



class Person {
    public:
        string name;
        int age;
        
        Person() {
            cout << "Parent Constructor" << endl;
        }

        Person(string name, int age) {
            this -> name = name;
            this -> age = age;
            cout << "Parent Constructor" << endl;
        }

        void getInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : public Person { // public inheritance
    public:
        double cgpa;

        // Parameterized constructor
        Student() {
            cout << "Child Constructor" << endl;
        }

        Student(string name, int age, double cgpa) : Person(name, age) { // super calling
            this -> cgpa = cgpa;
            cout << "Child Constructor" << endl;
        }

        void getInfo() {
            Person::getInfo(); // call parent class function
            cout << "CGPA: " << cgpa << endl;
        }
};

// Parent Constructor is called first, then Child Constructor is called
// Destructor is called in reverse order, first Child Destructor is called, then Parent Destructor is called


class gradStudent : public Student { // multilevel inheritance
    public:
        string thesisTopic;

        gradStudent(string name, int age, double cgpa, string thesisTopic) : Student(name, age, cgpa) {
            this -> thesisTopic = thesisTopic;
        }

        void getInfo() {
            Student::getInfo(); // call parent class function
            cout << "Thesis Topic: " << thesisTopic << endl;
        }
};

class Teacher {
    public:
        string name;
        string dept;
        double salary;

        Teacher() {
            cout << "Hi there! I am a teacher." << endl;
            dept = "Computer Science";
        }

        Teacher(string name, string dept, double salary) {
            this -> name = name;
            this -> dept = dept;
            this -> salary = salary;
        }

        void getInfo() {
            cout << "Name: " << name << endl;
            cout << "Department: " << dept << endl;
            cout << "Salary: " << salary << endl;
        }
};



class TeacherAssistant : public Student, public Teacher { // multiple inheritance
    public:
        string subject;

        TeacherAssistant(string name, int age, double cgpa, string subject) : Student(name, age, cgpa) {
            this -> subject = subject;
        }

        void getInfo() {
            Student::getInfo(); // call parent class function
            cout << "Subject: " << subject << endl;
        }
}; 



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Student s1;
    s1.name = "Shawki";
    s1.age = 20;
    s1.cgpa = 3.5;
    s1.getInfo();

    Student s2("John Doe", 21, 3.8);
    s2.getInfo();

    
    return 0;
}