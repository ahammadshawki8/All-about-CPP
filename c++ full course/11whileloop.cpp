#include <iostream>

int main () {
    std::string name;

    // while loop
    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }   
    std::cout << "Hello " << name << "\n"; 



    int num;
    std::cout << "Enter a positive number: ";
    std::cin >> num;
    
    while (num < 0) {
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    }
    std::cout << "The number is " << num << "\n"; 

    // do while loop
    int num2;

    do {
        std::cout << "Enter another positive number: ";
        std::cin >> num2;
    } while (num2 < 0);
    std::cout << "Another number is " << num2; 

    return 0;
}