#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Types of polymorphism
// 1. Compile time polymorphism (Function overloading, constructor overloading and operator overloading)
// 2. Run time polymorphism (Function overriding)


// Overloading vs Overriding
// Overloading: Same function name with different parameters in the same class or different classes
// Overriding: Same function name with same parameters in the base class and derived class

// Function overloading
class Base {
public:
    void show() {
        cout << "Base class show function called" << endl;
    }
    void show(int x) {
        cout << "Base class show function called with int parameter: " << x << endl;
    }
};

// Function overriding
class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function called" << endl;
    }
};


// virtual functions
class Base1 {
public:
    virtual void show() { // Virtual function
        cout << "Base class show function called" << endl;
    }
};

class Derived1 : public Base1 {
public:
    void show() override { // Override the base class function
        cout << "Derived class show function called" << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Function overloading
    Base b;
    b.show(); // Calls the first show function
    b.show(10); // Calls the second show function with int parameter

    // Function overriding
    Derived d;
    d.show(); // Calls the show function of the derived class


    
    return 0;
}