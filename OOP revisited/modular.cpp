#include <bits/stdc++.h>
#include "helper.hpp"

#define ll long long
using namespace std;

using namespace myNamespace;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "Value of b: " << b << endl; // Accessing the variable in the named namespace
    func2(); // Calling the function in the unnamed namespace
    
    cout << "Value of a: " << a << endl; // Accessing the variable in the unnamed namespace
    return 0;
}