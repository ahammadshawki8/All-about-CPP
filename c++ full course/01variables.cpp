#include <iostream>

int main() {

    int x; // declaration
    x = 5; // assignment

    int y = 6;
    int sum = x + y;

    // integer
    int age = 20;
    int year = 2024;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.45;

    // single character
    char grade = 'A';
    char initial = 'B';

    // boolean
    bool student = true;
    bool active = false;

    // string (objects that represents a sequence of text)
    std::string name = "Ahammad Shawki";
    std::string day = "Friday";

    // const
    const double PI = 3.14159;
    double radius = 10;
    double circum = 2*PI*radius;

    const int MAX_LENGTH = 1000;


    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";

    std::cout << "Hello " << name << "!\n";
    std::cout << name << " is " << age << " years old.\n";

    std::cout << circum << "cm\n";

    return 0;
}