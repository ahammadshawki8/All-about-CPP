#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    
    unordered_map <int, int> mp;
    mp[1] = 10;
    mp[4] = 60;
    mp[2] = 90;
    mp[7] = 50;
    mp[14] = 50;
    mp[3] = 40;
    mp[5] = 80;

    cout << mp.size() << "\n";
    cout << mp.max_size() << "\n";
    cout << mp.count(7) << "\n";

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first << " " << (*it).second << "\n";
    }

    cout << mp.bucket_count() << "\n";
    cout << mp.bucket(14) << "\n";
    cout << mp.bucket_size(1) << "\n";


    return 0;
}

// unordered multimap same as unordered map. 
// only difference is that - it can contain multiple same values.