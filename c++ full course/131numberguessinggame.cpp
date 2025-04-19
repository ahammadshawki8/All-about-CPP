#include <iostream>
#include <ctime>


int main () {
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num =(rand() % 100) + 1;

    std::cout << "******* NUMBER GUESSING GAME *******\n";
    do {
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Guess Lower\n";
        } else {
            std::cout << "Guess Higher\n";
        }
    } while (guess != num);
    std::cout << "Congrats! you have guess correctly!!\n";
    std::cout << "Tries: " << tries << "\n";
    std::cout << "************************************\n";

    return 0;
}