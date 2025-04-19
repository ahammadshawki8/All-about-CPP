#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(string a, string b);


int main() {

    vector <int> vec;
    vec.push_back(34); // vec[0] = 34
    vec.push_back(10); // vec[1] = 10
    vec.push_back(11);
    vec.push_back(99);

    
    cout << vec[0] << "\n";
    cout << vec.at(2) << "\n";
    cout << vec[5] << "\n";
    // cout << vec.at(5) << "\n";

    cout << vec.size() << "\n";
    for (int i=0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";

    cout << vec.front() << "\n";
    cout << vec.back() << "\n";

    vec.clear();
    cout << vec.size() << "\n";
    if (vec.empty()) {
        cout << "EMPTY!" <<"\n";
    } else {
        cout << "NOT EMPTY!" <<"\n";
    }

    vec.push_back(34);
    vec.push_back(10);
    vec.push_back(11);
    vec.push_back(99);
    vec.push_back(67);
    vec.push_back(44);

    vec.pop_back();
    for (int i=0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";

    vec.erase(vec.begin()+1);
    for (int i=0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";

    vec.erase(vec.begin()+1, vec.end());
    for (int i=0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";

    vec.insert(vec.begin(), 1);
    for (int i=0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";

    vec.insert(vec.begin(), 5, 20);
    for (int i=0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";


    vector <int> vec1;
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);

    vector <int> vec2;
    vec2.push_back(1);
    vec2.push_back(2);
    vec2.push_back(3);

    cout << "BEFORE SWAPPING" << endl;
    cout << "VECTOR 1: " << endl;
    for (int i=0; i < vec1.size(); i++) {
        cout << vec1[i] << " ";
    }
    cout << "\nVECTOR 2: " << endl;
    for (int i=0; i < vec2.size(); i++) {
        cout << vec2[i] << " ";
    }
    vec1.swap(vec2);
    cout << "\n\nAFTER SWAPPING" << endl;
    cout << "VECTOR 1: " << endl;
    for (int i=0; i < vec1.size(); i++) {
        cout << vec1[i] << " ";
    }
    cout << "\nVECTOR 2: " << endl;
    for (int i=0; i < vec2.size(); i++) {
        cout << vec2[i] << " ";
    }
    cout << "\n";


    vector <int> vec3;
    vec3.push_back(100);
    vec3.push_back(24);
    vec3.push_back(32);
    vec3.push_back(997);
    vec3.push_back(57);

    sort(vec3.begin(), vec3.end());
    for (int i=0; i < vec3.size(); i++) {
        cout << vec3[i] << " ";
    }
    cout << "\n";
    reverse(vec3.begin(), vec3.end());
    for (int i=0; i < vec3.size(); i++) {
        cout << vec3[i] << " ";
    }
    cout << "\n";
    random_shuffle(vec3.begin(), vec3.end());
    for (int i=0; i < vec3.size(); i++) {
        cout << vec3[i] << " ";
    }
    cout << "\n";



    vector <int> :: iterator it;
    it = vec3.begin();
    cout << *it << "\n";
    cout << *(it + 3) << "\n";
    for (it = vec3.begin(); it != vec3.end(); it++) {
        cout << *it << "\n";
    }




    vector <string> str_vec = {"Hello", "Hi", "Bonjour", "Namaste", "Konichiwa", "Hola"};
    for (auto iterate: str_vec) {
        cout << iterate << " ";
    }
    cout << "\n";

    sort (str_vec.begin(), str_vec.end(), compare);
    for (auto iterate: str_vec) {
        cout << iterate << " ";
    }
    cout << "\n";


    vector <int> a = {1, 1, 1, 2, 2, 4, 3, 90, 3, 5, 5, 4};
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    for (auto iterate: a) {
        cout << iterate << " ";
    }
    cout << "\n";


    return 0;
}

bool compare(string a, string b) {
    if (a.size() == b.size()) return a < b;
    else return a.size() < b.size();
}