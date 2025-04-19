#include <iostream>

void happy_birthday(std::string name, int age);
void printInfo (const std::string name, const int age);

int main() {
    std::string name = "Bro";
    int age = 20;
    happy_birthday(name, age);
    happy_birthday(name, age);
    happy_birthday(name, age);

    // const parameters
    printInfo(name, age);
    
    return 0;
} 

void happy_birthday(std::string name, int age) {
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday dear " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "You are " << age << " years old!\n";
    std::cout << "\n";
}

void printInfo(const std::string name, const int age) {
    // name = "  ";
    // age = 0;
    std::cout << "Name: " << name <<"\n";
    std::cout << "Age: " << age <<"\n";
}