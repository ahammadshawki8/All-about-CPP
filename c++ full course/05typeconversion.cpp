#include <iostream>

int main () {
    // type conversion - 2 ways
    //   Implicit = automatic
    //   Explicit = Procede value with new data type

    int x = 3.14; // implicitely converted double to int
    std::cout << x << "\n";

    double c = (int) 5.45; // explicitely converted double to int
    std::cout << c << "\n";

    char ascii_code = 100; // implicit
    std::cout << ascii_code << "\n";

    std::cout << (char) 100 << "\n"; // explicit


    int correct = 8;
    int questions = 10;
    double score = (correct/questions) * 100;
    std::cout << score << "%\n"; // 0% because 8/10 = 0 integer division

    double correct_score = (correct/(double) questions) * 100;
    std::cout << correct_score << "%\n";


    return 0;
}