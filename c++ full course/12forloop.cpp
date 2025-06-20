#include <iostream>

int main() {
    for (int i=1; i <=3; i++) {
        std::cout << i << "\n"; 
        std::cout << "HAPPY BIRTHDAY!\n"; 
    }


    // break and continue
    for (int i = 1; i <=20; i++) {
        if (i == 13) {
            // break;
            continue;
        }
        std::cout << i << "\n";
    }


    // nested loops
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 10; j++) {
            std::cout << j << "  ";
        }
        std::cout << "\n";
    }


    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?  ";
    std::cin >> rows;

    std::cout << "How many columns?  ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use:  ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            std::cout << symbol << "  ";
        }
        std::cout << "\n";
    }
    

    return 0;
}