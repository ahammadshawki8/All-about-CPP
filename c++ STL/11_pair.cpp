#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    pair <int, char> p1;
    p1.first = 10;
    p1.second = 'a';

    pair <int, char> p2(20, 'b');
    

    pair <int, char> p3;
    p3 = p1;

    pair <int, char> p4(p2);

    pair <int, char> p5;
    p5 = make_pair(30,'c');


    cout << p1.first << " " << p1.second << "\n";
    cout << p2.first << " " << p2.second << "\n";
    cout << p3.first << " " << p3.second << "\n";
    cout << p4.first << " " << p4.second << "\n";
    cout << p5.first << " " << p5.second << "\n";

    p5.swap(p1);
    cout << p1.first << " " << p1.second << "\n";
    cout << p5.first << " " << p5.second << "\n";

    if (p4 == p2) cout << "YES\n";
    else cout << "NO\n";

    if (p4 != p2) cout << "YES\n";
    else cout << "NO\n";


    pair <int, int> pa1(30, 30);
    pair <int, int> pa2(30, 40);
    pair <int, int> pa3(40, 30);
    pair <int, int> pa4(40, 50);

    if (pa4 >= pa3) cout << "YES\n";
    else cout << "NO\n";

    if (pa3 >= pa2) cout << "YES\n";
    else cout << "NO\n";

    if (pa1 <= pa2) cout << "YES\n";
    else cout << "NO\n";

    if (pa1 <= pa3) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}