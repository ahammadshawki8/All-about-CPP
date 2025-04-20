#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Point  {
    private:
        int x;
        int y;

    public:
        Point(int x, int y) : x(x), y(y) {}

        void display() const {
            cout << "Point(" << x << ", " << y << ")" << endl;
        }

};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Point p1(1, 2);
    p1.display(); // Output: Point(1, 2)

    
    return 0;
}