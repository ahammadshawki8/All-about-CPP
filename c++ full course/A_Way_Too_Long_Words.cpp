#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::string arr[n];
    for (int i = 0; i <n; i++) {
        std::cin >> arr[i];
    } 
    for (int i = 0; i < n; i++) {
        std::string new_str;
        int len = arr[i].size();
        if (len > 10) {
            new_str = arr[i][0] + std::to_string(len - 2) + arr[i][len-1];
        } else {
            new_str = arr[i];
        }
        std::cout << new_str << "\n";
    } 

    return 0;
}