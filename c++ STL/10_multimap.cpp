#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    
    multimap <int, int> mp;
    mp.insert({1, 20});
    mp.insert({3, 100});
    mp.insert({3, 200});
    mp.insert({4, 80});
    mp.insert({7, 10});

    for (auto it: mp) {
        cout << "Key: " << it.first << ", Value: " << it.second << "\n"; 
    }

    multimap <int, int> :: iterator it;
    for (it = mp.begin(); it != mp.end(); it++) {
        cout << "Key: " << (*it).first << ", Value: " << (*it).second << "\n";
    }

    cout << mp.size() << "\n";
    cout << mp.max_size() << "\n";
    cout << mp.count(3) << "\n";

    mp.clear();
    if (mp.empty()) {
        cout << "EMPTY!" <<"\n";
    } else {
        cout << "NOT EMPTY!" <<"\n";
    }



    mp.insert({1, 20});
    mp.insert({3, 100});
    mp.insert({3, 200});
    mp.insert({4, 80});
    mp.insert({7, 10});
    mp.insert({6, 50});
    mp.insert({9, 200});

    mp.erase(3);
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << "\n";
    }

    multimap <int, int> :: iterator erase_it;
    erase_it = mp.begin();
    advance(erase_it, 2);
    mp.erase(erase_it);
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << "\n";
    }

    mp.insert({3, 200});
    mp.insert({3, 100});

    auto found_it = mp.find(3);
    if (found_it != mp.end()) {
        cout << (*found_it).second << "\n";
        cout << "Found!" << "\n";
    } else {
        cout << "Not Found!" << "\n";
    }

    auto lower_it = mp.lower_bound(1);
    // auto lower_it = mp.lower_bound(0);
    // auto lower_it = mp.lower_bound(7);
    cout << "Lower Bound: " << (*lower_it).first << " -> " << (*lower_it).second << "\n";

    auto upper_it = mp.upper_bound(7);
    // auto upper_it = mp.upper_bound(5);
    // auto upper_it = mp.upper_bound(0);
    cout << "Upper Bound: " << (*upper_it).first << " -> " << (*upper_it).second << "\n";


    multimap <int, int> new_mp;
    new_mp = mp;
    for (auto it: new_mp) {
        cout << it.first << " = " << it.second << "\n";
    }
    

    multimap <int, int> mp1, mp2;
    mp1.insert({1, 10});
    mp1.insert({2, 20});
    mp1.insert({3, 30});
    mp1.insert({4, 40});

    mp2.insert({5, 100});
    mp2.insert({6, 200});
    mp2.insert({7, 200});

    cout << "BEFORE SWAPPING" << "\n";
    cout << "MP1: ";
    for (auto it : mp1) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
    cout << "\nMP2: ";
    for (auto it : mp2) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
    mp1.swap(mp2);
    cout << "\nAFTER SWAPPING" << "\n";
    cout << "MP1: ";
    for (auto it : mp1) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
    cout << "\nMP2: ";
    for (auto it : mp2) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
    cout << "\n";

    return 0;
}