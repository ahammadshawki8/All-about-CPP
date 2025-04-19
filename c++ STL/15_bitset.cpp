#include <bits/stdc++.h>
#include <bitset>

using namespace std;


int main() {
    // 10 elements bitset
    bitset <10> a;
    a[0] = 1;
    a[2] = 1;
    a[5] = 1;
    a[7] = 1;

    cout << a << "\n";
    cout << a[5] << "\n";
    cout << a[9] << "\n";

    cout << a.count() << "\n";

    bitset <10> b;
    b[1] = 1;
    b[2] = 1;
    b[4] = 1;
    b[7] = 1;

    bitset <10> c = a & b; // intersect
    bitset <10> d = a | b; // union
    bitset <10> e = a ^ b; // xor
    bitset <10> f = ~a; // complement
    bitset <10> g = a & (~b); // difference

    cout << c << "\n";
    cout << d << "\n";
    cout << e << "\n";
    cout << f << "\n";
    cout << g << "\n";

    for (int i = 0; i < 10; i++) {
        cout << f[i] << " - ";
    }
    cout << "\n";

    

    // base change
    string binary = bitset <8> (128).to_string(); //to binary
    cout << binary << "\n";

    unsigned long decimal = bitset <8> (binary).to_ulong();
    cout << decimal << "\n";
    return 0;
}