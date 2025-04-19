#include <iostream>

enum Day {sun = 0, mon = 1, tues = 2, wed = 3, thurs = 4, fri = 5, sat = 6 };

enum flavour {vanilla, chocolate, strawberry, mint}; 
// if value not assigned implicitely it well be assigned to 0-1-2-3-.. like index

int main() {
    Day today = sun;

    switch(today) {
        case sun: 
            std::cout << "It is Sunday!\n";
            break;
        case mon: 
            std::cout << "It is Sunday!\n";
            break;
        case tues: 
            std::cout << "It is Tuesday!\n";
            break;
        case wed: 
            std::cout << "It is Wednesday!\n";
            break;
        case thurs: 
            std::cout << "It is Thursday!\n";
            break;
        case fri: 
            std::cout << "It is Friday!\n";
            break;
        case sat: 
            std::cout << "It is Saturday!\n";
            break;
    }
    return 0;
}