#include <iostream>

int main() {
    // & address-of operator
    // * deference operator

    std::string name = "Shawki";
    std::string *pName = &name; // pointer;

    std::cout << pName << "\n"; // memory address
    std::cout << *pName << "\n"; // accessing memory address

    int age = 21;
    int *pAge = &age;

    std::cout << pAge << "\n";
    std::cout << *pAge << "\n";

    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    std::string *pFreePizzas = freePizzas; // array is already an address. so dont need to use &

    std::cout << pFreePizzas << "\n";
    std::cout << *pFreePizzas << "\n"; // first value
    std::cout << *(pFreePizzas + 1) << "\n"; // second value



    // Null pointers
    int *pointer = nullptr;
    int x = 12;
    pointer = &x;

    if (pointer == nullptr) {
        std::cout << "address was not assigned\n";
    } else {
        std::cout << "address was assigned\n";
        std::cout << *pointer << "\n";
    }

    return 0;
}