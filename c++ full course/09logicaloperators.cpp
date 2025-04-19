#include <iostream>

int main() {
    int temp;
    bool sunny = true;

    std::cout << "Enter Temprature: ";
    std::cin >> temp;

    // if (temp > 0 && temp < 30) {
    //     std::cout << "The temprature is good!";
    // } else {
    //     std::cout << "The temprature is bad!";
    // }

    if (temp <= 0 || temp >= 30) {
        std::cout << "The temprature is bad!\n";
    } else {
        std::cout << "The temprature is good!\n";
    }

    if (!sunny) {
        std::cout << "It is cloudy outside";
    } else {
        std::cout << "It is sunny outside";
    }

    return 0;
}