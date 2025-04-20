#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Shape { 
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {   
public:
    void draw() override { // Override the pure virtual function
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Shape* shape; // Pointer to base class
    Circle circle; // Create an object of derived class
    shape = &circle; // Point to the derived class object
    shape->draw(); // Call the draw function (runtime polymorphism)


    Circle * circle2;
    circle2 = &circle;
    circle2->draw();


    // Abstract class cannot be instantiated
    // But as a superclass it can be used to create a pointer or reference to the derived class object

    
    return 0;
}