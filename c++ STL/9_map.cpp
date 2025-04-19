#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    
    map <int, int> mp;
    mp.insert({1, 20});
    mp.insert({3, 100});
    mp.insert({4, 80});
    mp.insert({7, 10});

    mp[2] = 30;
    mp[5] = 70;

    cout << mp[4] << "\n";
    cout << mp.at(1) << "\n";

    mp[4] = 500;
    mp[1] += 200;

    cout << mp[4] << "\n";
    cout << mp.at(1) << "\n";

    for (auto it: mp) {
        cout << "Key: " << it.first << ", Value: " << it.second << "\n"; 
    }

    cout << mp.size() << "\n";
    cout << mp.max_size() << "\n";
    cout << mp.count(4) << "\n";

    mp.clear();
    if (mp.empty()) {
        cout << "EMPTY!" <<"\n";
    } else {
        cout << "NOT EMPTY!" <<"\n";
    }


    map <int, string> my_map;
    my_map[1] = "Shawki";
    my_map[5] = "Rafi";
    my_map[2] = "Arko";
    my_map[3] = "Labib";

    for (auto it : my_map) {
        cout << it.first << " -> " << it.second << "\n";
    }

    map <string, double> gpa;
    gpa["Shawki"] = 3.7;
    gpa["Arko"] = 3.2;
    gpa["Rafi"] = 2.1;

    for (auto it : gpa) {
        cout << it.first << " -> " << it.second << "\n";
    }



    mp[1] = 10;
    mp[2] = 20;
    mp[3] = 30;
    mp[4] = 40;
    mp[5] = 50;
    mp[6] = 60;

    mp.erase(4);
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << "\n";
    }

    auto it = mp.find(7);
    if (it != mp.end()) {
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


    map <int, int> new_mp;
    new_mp = mp;
    for (auto it: new_mp) {
        cout << it.first << " = " << it.second << "\n";
    }
    

    map <int, int> mp1, mp2;
    mp1[1] = 10;
    mp1[2] = 20;
    mp1[3] = 30;
    mp1[4] = 40;

    mp2[5] = 50;
    mp2[6] = 60;
    mp2[7] = 70;

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