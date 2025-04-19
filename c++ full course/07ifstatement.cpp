#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "Welcome to the site!";
    } else if (age < 0) {
        std::cout << "Invalid age";
    } else {
        std::cout << "You are not old enough to en ter.";
    }


    // ternary operator
    int grade = 50;
    grade >= 60 ?  std::cout << "You pass!" : std::cout << "You fail!";
    // print("You pass!") if grade >= 60 else print("You fail");

    int num = 9;
    num % 2 == 0 ? std::cout << "ODD" : std::cout << "EVEN";
    
    bool hungry = true;
    // hungry ? std::cout << "You ar hungry" : std::cout << "You are full";
    // another syntax
    std::cout << (hungry ? "You ar hungry" : "You are full");
    
    return 0;
}