#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Student {
    public:
        string name;
        double cgpa;

        Student(string name, double cgpa) {
            this -> name = name;
            this -> cgpa = cgpa;
        }

        Student(const Student &s) { // copy constructor
            this -> name = s.name;
            this -> cgpa = s.cgpa;
        }

        void getInfo() {
            cout << "Name: " << name << endl;
            cout << "CGPA: " << cgpa << endl;
        }
};


// Shallow copy creates issues while dynamic memory allocation

class StudentV2 {
    public:
        string name;
        double *cgpaPTR;

        StudentV2(string name, double cgpa) {
            this -> name = name;
            cgpaPTR = new double;
            *cgpaPTR = cgpa;
        }

        StudentV2(const StudentV2 &s) { // copy constructor
            this -> name = s.name;
            cgpaPTR = s.cgpaPTR;
        }

        void getInfo() {
            cout << "Name: " << name << endl;
            cout << "CGPA: " << *cgpaPTR << endl;
        }
};


class StudentV3 {
    public:
        string name;
        double *cgpaPTR;

        StudentV3(string name, double cgpa) {
            this -> name = name;
            cgpaPTR = new double;
            *cgpaPTR = cgpa;
        }

        StudentV3(const StudentV3 &s) {
            this -> name = s.name;
            cgpaPTR = new double;
            *cgpaPTR = *(s.cgpaPTR); 
        }

        void getInfo() {
            cout << "Name: " << name << endl;
            cout << "CGPA: " << *cgpaPTR << endl;
        }

        ~StudentV3() { // destructor
            cout << "Destructor called for " << name << endl;
            delete cgpaPTR; // free the memory allocated for cgpaPTR
        }
};



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Normal
    Student s1("John Doe", 3.5);
    Student s2(s1); 

    s1.getInfo();
    s2.cgpa = 3.8; 
    s1.getInfo(); 


    // Shallow copy
    StudentV2 s3("John Doe", 3.5);
    StudentV2 s4(s3); 

    s3.getInfo();
    *s4.cgpaPTR = 3.8; 
    s3.getInfo(); 

    // Deep Copy
    // we need to create our own constructor for deep copy
    StudentV3 s5("John Doe", 3.5);
    StudentV3 s6(s5); 

    s5.getInfo();
    *s6.cgpaPTR = 3.8; 
    s5.getInfo(); 


    // Destructor
    // Destructor is called when the object goes out of scope  
    // we need to create our own destructor for deep copy 


    // Difference between  
    // Class *obj = new Class() 
    // Class obj;
    // Class *obj = new Class() -> dynamic memory allocation, need to delete the object using delete obj;
    // Class obj; -> static memory allocation, destructor is called automatically when the object goes out of scope

    // ask gpt for detailed explanation
    // heap is suitable for polymorphism
    

    return 0;
}