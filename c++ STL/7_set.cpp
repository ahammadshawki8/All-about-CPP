#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    
    // set <int> s;
    set <int, greater <int>> s;
    s.insert(10);
    s.insert(90);
    s.insert(50);
    s.insert(30);
    s.insert(30);
    s.insert(40);

    cout << s.size() << "\n";
    cout << s.max_size() << "\n";

    set <int> :: iterator it;
    for (it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    for (auto it: s) {
        cout << it << " ";
    }
    cout << "\n";


    s.erase(90);
    for (auto it: s) {
        cout << it << " ";
    }
    cout << "\n";

    set <int> :: iterator erase_it;
    erase_it=s.begin();
    advance(erase_it, 2);
    s.erase(erase_it);
    for (auto it: s) {
        cout << it << " ";
    }
    cout << "\n";


    s.clear();
    if (s.empty()) {
        cout << "EMPTY!" <<"\n";
    } else {
        cout << "NOT EMPTY!" <<"\n";
    }


    s.insert(10);
    s.insert(90);
    s.insert(50);
    s.insert(30);
    s.insert(30);
    s.insert(40);


    set <int> :: iterator find_it;
    find_it = s.find(2);
    if (find_it != s.end()) {
        cout << "Found\n";
    } else {
        cout << "Not Found!\n";
    }

    cout << s.count(30) << "\n";


    set <int> s1 = {1, 2, 3, 4, 5, 6, 7, 8};
    set <int> :: iterator lower_it;
    lower_it = s1.lower_bound(0);
    // lower_it = s1.lower_bound(2);
    // lower_it = s1.lower_bound(8);

    if (lower_it == s1.end()) {
        cout << "The element is larger compared to the highest value of the set\n";
    } else {
        cout << "The lower bound is: " << *lower_it << "\n";
    }

    set <int> :: iterator upper_it;
    upper_it = s1.upper_bound(2);
    // upper_it = s1.upper_bound(0);
    // upper_it = s1.upper_bound(8);

    if (upper_it == s1.end()) {
        cout << "The element is smaller compared to the highest value of the set\n";
    } else {
        cout << "The upper bound is: " << *upper_it << "\n";
    }


    set <int> set1 = {10, 20, 30, 40, 50};
    set <int> set2 = {1, 2, 3, 4, 5};

    cout << "BEFORE SWAPPING" << endl;
    cout << "set 1: " << endl;
    for (auto print_it: set1) {
        cout << print_it << " ";
    }
    cout << "\nset 2: " << endl;
    for (auto print_it: set2) {
        cout << print_it << " ";
    }
    set1.swap(set2);
    cout << "\n\nAFTER SWAPPING" << endl;
    cout << "set 1: " << endl;
    for (auto print_it: set1) {
        cout << print_it << " ";
    }
    cout << "\nset 2: " << endl;
    for (auto print_it: set2) {
        cout << print_it << " ";
    }
    cout << "\n";


    set <int> new_set;
    new_set = set1;
    for (auto new_it: new_set) {
        cout << new_it << " ";
    }
    cout << "\n";


    return 0;
}