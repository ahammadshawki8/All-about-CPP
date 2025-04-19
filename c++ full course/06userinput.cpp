#include <iostream>
#include <cmath>

int main() {
    std::string firstname;
    std::string fullname;
    int age;

    std::cout << "What is your first name?\n";
    std::cin >> firstname;

    std::cout << "What is your full name?\n";
    std::getline(std::cin >> std::ws, fullname);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello " << firstname << "\n";
    std::cout << "You are " << age << " years old\n";
    std::cout << "Your full name is " << fullname << "\n";
    
    
    // Calculating the hypotenuse of a right triangle
    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));
    std::cout << "The length of the hypotenuse: " << c;
    
    
    return 0;
}