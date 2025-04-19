#include <iostream>

int main () {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

    if (name.length() > 12) {
        std::cout << "Your name can't be over 12 characters";
    } else {
        std::cout << "Welcome " << name << "\n";
    }

    if (name.empty()) {
        std::cout << "You didn't enter your name";
    } else {
        std::cout << "Welcome " << name << "\n";
    }

    name.append("@gmail.com");
    std::cout << "Your email address is: " << name << "\n";
    
    std::cout << name.at(0) << "\n";
    name.insert(0, "$");
    std::cout << name << "\n";

    std::cout << name.find(' ') << "\n";

    name.erase(0, 3);
    std::cout << name << "\n";
    name.clear();

    // for more methods, visit
    //https://www.cplusplus.com/reference/string/string
    return 0;
}