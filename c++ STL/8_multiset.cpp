#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    
    // multiset <int> ms;
    multiset <int, greater <int>> ms;
    ms.insert(10);
    ms.insert(90);
    ms.insert(50);
    ms.insert(30);
    ms.insert(30);
    ms.insert(40);
    ms.insert(30);

    cout << ms.size() << "\n";
    cout << ms.max_size() << "\n";

    set <int> :: iterator it;
    for (it = ms.begin(); it != ms.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    for (auto it: ms) {
        cout << it << " ";
    }
    cout << "\n";


    ms.erase(30);
    for (auto it: ms) {
        cout << it << " ";
    }
    cout << "\n";

    set <int> :: iterator erase_it;
    erase_it=ms.begin();
    advance(erase_it, 2);
    ms.erase(erase_it);
    for (auto it: ms) {
        cout << it << " ";
    }
    cout << "\n";


    ms.clear();
    if (ms.empty()) {
        cout << "EMPTY!" <<"\n";
    } else {
        cout << "NOT EMPTY!" <<"\n";
    }


    ms.insert(10);
    ms.insert(90);
    ms.insert(50);
    ms.insert(30);
    ms.insert(30);
    ms.insert(30);
    ms.insert(40);


    auto find_it = ms.find(10);
    if (find_it != ms.end()) {
        cout << "Found\n";
    } else {
        cout << "Not Found!\n";
    }

    cout << ms.count(30) << "\n";


    multiset <int> ms1 = {1, 2, 3, 4, 5, 6, 7, 8};
    auto lower_it = ms1.lower_bound(0);
    // auto lower_it = ms1.lower_bound(2);
    // auto lower_it = ms1.lower_bound(8);

    if (lower_it == ms1.end()) {
        cout << "The element is larger compared to the highest value of the set\n";
    } else {
        cout << "The lower bound is: " << *lower_it << "\n";
    }

    
    auto upper_it = ms1.upper_bound(2);
    // auto upper_it = ms1.upper_bound(0);
    // auto upper_it = ms1.upper_bound(8);

    if (upper_it == ms1.end()) {
        cout << "The element is smaller compared to the highest value of the set\n";
    } else {
        cout << "The upper bound is: " << *upper_it << "\n";
    }


    multiset <int> multiset1 = {10, 20, 30, 40, 50};
    multiset <int> multiset2 = {1, 2, 3, 4, 5};

    cout << "BEFORE SWAPPING" << endl;
    cout << "multiset 1: " << endl;
    for (auto print_it: multiset1) {
        cout << print_it << " ";
    }
    cout << "\nmultiset 2: " << endl;
    for (auto print_it: multiset2) {
        cout << print_it << " ";
    }
    multiset1.swap(multiset2);
    cout << "\n\nAFTER SWAPPING" << endl;
    cout << "set 1: " << endl;
    for (auto print_it: multiset1) {
        cout << print_it << " ";
    }
    cout << "\nmultiset 2: " << endl;
    for (auto print_it: multiset2) {
        cout << print_it << " ";
    }
    cout << "\n";


    multiset <int> new_set; 
    new_set = multiset1;
    for (auto new_it: new_set) {
        cout << new_it << " ";
    }
    cout << "\n";


    return 0;
}