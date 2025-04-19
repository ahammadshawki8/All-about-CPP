#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main() {

    // priority_queue <int> pq;
    priority_queue <int, vector <int>, greater <int>> pq;

    pq.push(10);
    pq.push(50);
    pq.push(90);
    pq.push(40);
    pq.emplace(70);
    pq.emplace(20);

    cout << pq.size() << "\n";

    cout << pq.top() << "\n";

    if (pq.empty()) {
        cout << "EMPTY!" <<"\n";
    } else {
        cout << "NOT EMPTY!" <<"\n";
    }

    pq.pop();
    cout << pq.top() << "\n";

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";


    priority_queue <int> pq1;
    priority_queue <int> pq2;

    pq1.push(1);
    pq1.push(2);
    pq1.push(3);
    pq1.push(4);

    pq2.push(10);
    pq2.push(20);
    pq2.push(30);
    pq2.push(40);

    pq1.swap(pq2);

    cout << "Priority Queue 1: ";
    while (pq1.size() > 0) {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << "\n";

    cout << "Priority Queue 2: ";
    while (pq2.size() > 0) {
        cout << pq2.top() << " ";
        pq2.pop();
    }
    cout << "\n";

    return 0;
}