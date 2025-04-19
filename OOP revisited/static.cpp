#include <bits/stdc++.h>
#define ll long long
using namespace std;

class ABC {
    public:
    ABC() {
        cout << "Constructor of ABC" << endl;
    }
    ~ABC() {
        cout << "Destructor of ABC" << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if(true) {
        ABC a; // Constructor of ABC is called
        static ABC b; // Constructor of ABC is called
    } // Destructor of ABC is called when the object goes out of scope

    cout << "End of main function\n" << endl;

    
    return 0;
}