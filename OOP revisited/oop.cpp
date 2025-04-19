#include <bits/stdc++.h>
#define ll long long
using namespace std;


class Teacher {
    private:
        double salary;

    public:
        string name;
        string dept;
        string subject;

        // normal contructor
        Teacher() {
            cout << "Hi there! I am a teacher." << endl;
            dept = "Computer Science";
        }

        // parameterized constructor
        Teacher(string name, string dept, string subject, double salary) {
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        }

        // usage of this pointer
        // this is only used when the parameter name and the class member name are same, to remove ambiguity
        // in other functions, if there is no ambiguity, we don't need to use this pointer (difference with self in python)

        // copy constructor
        Teacher(const Teacher &t) { // pass by reference // const
            name = t.name;
            dept = t.dept;
            subject = t.subject;
            salary = t.salary;
        }

        // Difference between func(type *val) and func(type &val)
        // func(type *val) -> pass by value (copy of the value is passed)
        // func(type &val) -> pass by reference (reference of the value is passed)
        // use gpt

        void changeDept(string newDept) {
            dept = newDept;
        }

        void setSalary(double newSalary) {
            salary = newSalary;
        }

        double getSalary() {
            return salary;
        }   
};

class Student {
    public:
        string name;
        string rollNo;
        string dept;
        double cgpa;

        void changeDept(string newDept) {
            dept = newDept;
        }
}; 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Teacher t1;
    t1.name = "John Doe";    
    t1.subject = "Data Structures";
    t1.setSalary(50000.0);

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.getSalary() << endl;

    // multiple constrctor -> constructor overloading -> polymorphism
    Teacher t2("Jane Doe", "Mathematics", "Calculus", 60000.0); 
    cout << t2.name << endl;
    cout << t2.dept << endl;
    cout << t2.getSalary() << endl;

    t2.changeDept("Physics");
    cout << t2.dept << endl;

    Teacher t3(t2); // copy constructor
    cout << t3.name << endl;
    cout << t3.dept << endl;



    return 0;
}