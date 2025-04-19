#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {
    
    deque <int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(80);

    cout << dq[1] << "\n";
    cout << dq.at(1) << "\n";

    cout << dq.size() << "\n"; 

    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << "\n"; 

    cout << dq.front() << "\n";
    cout << dq.back() << "\n";

    dq.pop_front();
    dq.pop_back();
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << "\n";

    dq.clear();
    if (dq.empty()) {
        cout << "EMPTY!" <<"\n";
    } else {
        cout << "NOT EMPTY!" <<"\n";
    }


    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);
    dq.push_back(70);

    deque <int> :: iterator it;
    it = dq.begin() + 2;
    dq.erase(it);
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << "\n";

    deque <int> :: iterator it1, it2;
    it1 = dq.begin()+1;
    it2 = dq.begin()+4;
    dq.erase(it1, it2);
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << "\n";

    deque <int> :: iterator it3;
    it3 = dq.begin();
    dq.insert(it3, 3, 5);
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << "\n";

    return 0;
}