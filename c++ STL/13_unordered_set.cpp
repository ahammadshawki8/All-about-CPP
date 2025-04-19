#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    
    unordered_set <int> us;
    us.insert(10);
    us.insert(90);
    us.insert(50);
    us.insert(30);
    us.insert(30);
    us.insert(40);

    cout << us.size() << "\n";
    cout << us.max_size() << "\n";

    unordered_set <int> :: iterator it;
    for (it = us.begin(); it != us.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    for (auto it: us) {
        cout << it << " ";
    }
    cout << "\n";


    us.erase(90);
    for (auto it: us) {
        cout << it << " ";
    }
    cout << "\n";

    unordered_set <int> :: iterator erase_it;
    erase_it=us.begin();
    advance(erase_it, 2);
    us.erase(erase_it);
    for (auto it: us) {
        cout << it << " ";
    }
    cout << "\n";


    us.clear();
    if (us.empty()) {
        cout << "EMPTY!" <<"\n";
    } else {
        cout << "NOT EMPTY!" <<"\n";
    }


    us.insert(10);
    us.insert(90);
    us.insert(50);
    us.insert(30);
    us.insert(30);
    us.insert(40);


    auto find_it = us.find(2);
    if (find_it != us.end()) {
        cout << "Found\n";
    } else {
        cout << "Not Found!\n";
    }

    cout << us.count(30) << "\n";


    unordered_set <int> unordered_set1 = {10, 20, 30, 40, 50};
    unordered_set <int> unordered_set2 = {1, 2, 3, 4, 5};

    cout << "BEFORE SWAPPING" << endl;
    cout << "unordered_set 1: " << endl;
    for (auto print_it: unordered_set1) {
        cout << print_it << " ";
    }
    cout << "\nunordered_set 2: " << endl;
    for (auto print_it: unordered_set2) {
        cout << print_it << " ";
    }
    unordered_set1.swap(unordered_set2);
    cout << "\n\nAFTER SWAPPING" << endl;
    cout << "unordered_set 1: " << endl;
    for (auto print_it: unordered_set1) {
        cout << print_it << " ";
    }
    cout << "\nunordered_set 2: " << endl;
    for (auto print_it: unordered_set2) {
        cout << print_it << " ";
    }
    cout << "\n";


    unordered_set <int> unordered_new_set;
    unordered_new_set = unordered_set1;
    for (auto new_it: unordered_new_set) {
        cout << new_it << " ";
    }
    cout << "\n";


    cout << unordered_new_set.bucket_count() << "\n";
    cout << unordered_new_set.bucket(5) << "\n";
    cout << unordered_new_set.bucket_size(6) << "\n";

    return 0;

    // unordered multiset same as unordered set. 
    // only difference is that - it can contain multiple same values.
}