#include <iostream>

// dynamic memory = Memory that is allocated after the program is already compiled & running.
// Use the 'new' operator to allocate memory in the heap rather than the stack.
// Useful when we don't knwo how much memory we will need.
// Makes our programs more flexible especially when accepting user input.
// good practise is to 'delete' the allocated memory if we don't need it. 

int main() {
    int *pNum = nullptr;

    pNum = new int;

    *pNum = 22;
    std::cout << "address: " << pNum << "\n";
    std::cout << "value: " << *pNum << "\n";

    delete pNum;

    char *pGrades = nullptr;
    int size;
    std::cout << "How many gades to enter in?: ";
    std::cin >> size;
    pGrades = new char[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i+1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades; // for deleteing array we need []
    
    return 0;
}