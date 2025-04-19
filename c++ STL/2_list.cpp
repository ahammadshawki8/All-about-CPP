#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main() {
    
    list <int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_back(30);

    list <int> :: iterator it;
    for (it = li.begin(); it != li.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    for (auto new_it: li) {
        cout << new_it << " ";
    }
    cout << "\n";

    li.push_front(80);
    for (auto new_it: li) {
        cout << new_it << " ";
    }
    cout << "\n";

    cout << li.front() << "\n";
    cout << li.back() << "\n";

    li.pop_front();
    li.pop_back();
    for (auto new_it: li) {
        cout << new_it << " ";
    }
    cout << "\n";

    cout << li.size() << "\n";
    li.clear();
    cout << li.size() << "\n";
    if (li.empty()) {
        cout << "EMPTY!" <<"\n";
    } else {
        cout << "NOT EMPTY!" <<"\n";
    }

    li.push_back(10);
    li.push_back(20);
    li.push_back(30);
    li.insert(li.begin(), 2, 5);

    // li.insert(li.begin()+2, 80);
    list <int> :: iterator insert_it;
    insert_it = li.begin();
    advance(insert_it, 2);
    li.insert(insert_it, 80);

    for (auto new_it: li) {
        cout << new_it << " ";
    }
    cout << "\n";

    list <int> :: iterator erase_it;
    erase_it = li.begin();
    advance(erase_it, 3);
    li.erase(erase_it);

    for (auto new_it: li) {
        cout << new_it << " ";
    }
    cout << "\n";

    
    list <int> my_list = {0, 1, 2, 3, 4, 5, 6, 7};
    list <int> :: iterator it1, it2;
    it1 = my_list.begin();
    it2 = my_list.begin();
    advance(it1, 1);
    advance(it2, 4);
    my_list.erase(it1, it2);
    for (auto print_it: my_list) {
        cout << print_it << " ";
    }
    cout << "\n";


    list <int> my_list_2 = {0, 1, 2, 2, 2, 2, 3, 4};
    my_list_2.remove(2);
    for (auto print_it: my_list_2) {
        cout << print_it << " ";
    }
    cout << "\n";


    my_list.reverse();
    for (auto print_it: my_list) {
        cout << print_it << " ";
    }
    cout << "\n";

    my_list.sort();
    for (auto print_it: my_list) {
        cout << print_it << " ";
    }
    cout << "\n";


    list <int> my_list_3 = {0, 1, 2, 2, 2, 2, 3, 4, 2, 2, 2};
    my_list_3.unique();

    for (auto print_it: my_list_3) {
        cout << print_it << " ";
    }
    cout << "\n";


    list <int> list1 = {10, 20, 30, 40, 50};
    list <int> list2 = {1, 2, 3, 4, 5};

    cout << "BEFORE SWAPPING" << endl;
    cout << "LIST 1: " << endl;
    for (auto print_it: list1) {
        cout << print_it << " ";
    }
    cout << "\nLIST 2: " << endl;
    for (auto print_it: list2) {
        cout << print_it << " ";
    }
    list1.swap(list2);
    cout << "\n\nAFTER SWAPPING" << endl;
    cout << "LIST 1: " << endl;
    for (auto print_it: list1) {
        cout << print_it << " ";
    }
    cout << "\nLIST 2: " << endl;
    for (auto print_it: list2) {
        cout << print_it << " ";
    }
    cout << "\n";

    list1.merge(list2);
    for (auto print_it: list1) {
        cout << print_it << " ";
    }
    cout << "\n" << list2.size() << "\n";

    return 0;
}
