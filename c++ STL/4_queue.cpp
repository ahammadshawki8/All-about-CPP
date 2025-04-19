#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << q.size() << "\n";

    cout << q.front() << "\n";
    cout << q.back() << "\n";

    if (q.empty()) {
        cout << "EMPTY!" <<"\n";
    } else {
        cout << "NOT EMPTY!" <<"\n";
    }

    q.pop();
    cout << q.front() << "\n";

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";


    q.emplace(10);
    q.emplace(20);
    q.emplace(30);
    q.emplace(40);
    while (q.size() > 0) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";



    queue <int> q1;
    queue <int> q2;

    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    q2.push(10);
    q2.push(20);
    q2.push(30);
    q2.push(40);

    q1.swap(q2);

    cout << "Queue 1: ";
    while (q1.size() > 0) {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << "\n";

    cout << "Queue 2: ";
    while (q2.size() > 0) {
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << "\n";
    


    return 0;
}