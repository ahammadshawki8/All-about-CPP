#include <iostream>
#include <ctime>

int main () {
    srand(time(NULL)); //seed
    int num = (rand() % 20) + 1;

    std::cout << num << "\n";


    // random event generator
    srand(time(NULL)); //seed
    int randNum = (rand() % 5) + 1;
    
    switch (randNum) {
        case 1:
            std::cout << "You won a bumper sticker\n";
            break;
        case 2:
            std::cout << "You won a t-shirt\n";
            break;
        case 3:
            std::cout << "You won a free lunch\n";
            break;
        case 4:
            std::cout << "You won a gift card\n";
            break;
        case 5:
            std::cout << "You won a concert tickets\n";
            break;
    } 
    return 0;
}