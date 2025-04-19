#include <iostream>
#include <ctime>

char getUserChoice();
char getComputeChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputeChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}



char getUserChoice() {
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";
    do {
        std::cout << "Choose one of the following\n";
        std::cout << "***************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    return player;
};
char getComputeChoice() {
    srand(time(NULL));
    int num = rand() % 3 + 1; 

    switch(num) {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
};
void showChoice(char choice) {
    switch (choice) {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
        default:
            break;
    }
};
void chooseWinner(char player, char computer) {
    switch (player) {
        case 'r':
            if (computer == 'p') {
                std::cout << "You lose!\n";
            } else if (computer == 's') {
                std::cout << "You win!\n";
            } else {
                std::cout << "It's a tie!\n";
            }
            break;
        
        case 'p':
            if (computer == 's') {
                std::cout << "You lose!\n";
            } else if (computer == 'r') {
                std::cout << "You win!\n";
            } else {
                std::cout << "It's a tie!\n";
            }
            break;

        case 's':
            if (computer == 'r') {
                std::cout << "You lose!\n";
            } else if (computer == 'p') {
                std::cout << "You win!\n";
            } else {
                std::cout << "It's a tie!\n";
            }
            break;
        
        default:
            break;
    }
};