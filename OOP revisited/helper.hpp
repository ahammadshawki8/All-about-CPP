#include <bits/stdc++.h>
#define ll long long
using namespace std;

namespace {
    int a = 10; // This variable is only accessible within this translation unit (file)
    void func() { // This function is only accessible within this translation unit (file)
        cout << "This is an unnamed namespace function" << endl;
    }
}

namespace myNamespace {
    int b = 20; // This variable is accessible within this namespace
    void func2() { // This function is accessible within this namespace
        cout << "This is a named namespace function" << endl;
    }
}