#include <iostream>

int main() {
    std::string questions[] =  {"1. What year was C++ created?: ",
                                "2. Who inveted C++?: ",
                                "3. What is the predecessor of C++?: ",
                                "4. Is the Earth flat?: "};

    std::string opt[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                            {"A. Guido van Rossum", "B . Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                            {"A. C", "B. Python", "C. C+", "D. C--"},
                            {"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}};
    
    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size_questions = sizeof(questions)/sizeof(questions[0]);
    int size_opt = sizeof(opt)/sizeof(opt[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size_questions; i++) {
        std::cout << questions[i] << "\n";
        std::cout << "**********************************" << "\n";

        for (int j = 0; j < size_opt; j++) {
            std::cout << opt[i][j] << "\n";
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            std::cout << "RIGHT!!" << "\n";
            score++;
        } else {
            std::cout << "WRONG!!" << "\n";
            std::cout << "Correct answer: " << answerKey[i] << "\n";
        }
        std::cout << "\n";
    }

    std::cout << "RESULTS" << "\n";
    std::cout << "CORRECT GUESSES: " << score << " out of QUESTIONS: " << size_questions << "\n";
    std::cout << "SCORE: " << (score/ (double) size_questions)*100 << "%\n";
    std::cout << "THANKS FOR PLAYING THIS QUIZ GAME!";
    return 0;
}