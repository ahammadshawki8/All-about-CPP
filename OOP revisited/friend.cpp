#include <bits/stdc++.h>
#define ll long long
using namespace std;


class EquilateralTriangle {
    private:
        float a;
        float circumference;
        float area;

    public:
        void setA(float length) {
            a = length;
            circumference = a * 3;
            area = (sqrt(3) / 4) * a * a;
        }

        friend void friendFunction(EquilateralTriangle et); // Declare the friend function
        // friend function can access private members of the class

        friend class friendClass; // Declare the friend class
};

// friend function
// friend function is a function that is not a member of the class but has access to its private and protected members

void friendFunction(EquilateralTriangle et) {
    cout << "Circumference: " << et.circumference << endl;
    cout << "Area: " << et.area << endl;
}


class friendClass {
    public:
        void friendFunction2(EquilateralTriangle et){
            cout << "Circumference: " << et.circumference << endl;
            cout << "Area: " << et.area << endl;
        }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    EquilateralTriangle et;
    et.setA(5.0);

    // cout << "circumference = " << et.circumference << endl;
    // cout << "area = " << et.area << endl;
    // will show error because circumference and area are private members of the class

    friendFunction(et); // Call the friend function to access private members

    friendClass fc; // Create an object of the friend class
    fc.friendFunction2(et); // Call the friend function of the friend class to access private members
    // friendClass::friendFunction2(et); // Call the friend function of the friend class to access private members


    
    return 0;
}