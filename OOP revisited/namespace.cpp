#include <bits/stdc++.h>
#define ll long long
using namespace std;

// unnamed namespace
namespace {
    int a = 10; // This variable is only accessible within this translation unit (file)
    void func() { // This function is only accessible within this translation unit (file)
        cout << "This is an unnamed namespace function" << endl;
    }
}

// named namespace
namespace myNamespace {
    int b = 20; // This variable is accessible within this namespace
    void func2() { // This function is accessible within this namespace
        cout << "This is a named namespace function" << endl;
    }
}

using myNamespace::func2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "Value of a: " << a << endl; // Accessing the variable in the unnamed namespace
    func(); // Calling the function in the unnamed namespace

    cout << "Value of b: " << myNamespace::b << endl; // Accessing the variable in the named namespace
    func2(); // Calling the function in the named namespace

    
    return 0;
}