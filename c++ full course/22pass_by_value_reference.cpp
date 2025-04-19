#include <iostream>

void swap_passByValue(std::string x, std::string y);
void swap_passByReference(std::string &x, std::string &y);

int main() {
    std::string x = "Coca-cola";
    std::string y = "Water";
    std::cout << "X: " << x << " Address: " << &x << "\n";
    std::cout << "Y: " << y << " Address: " << &y << "\n\n";

    swap_passByValue(x, y); // nothing swapped
    swap_passByReference(x, y); // swapped
    return 0;
}

void swap_passByValue(std::string x, std::string y) {
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "X: " << x << " Address: " << &x << "\n";
    std::cout << "Y: " << y << " Address: " << &y << "\n\n";
}

void swap_passByReference(std::string &x, std::string &y) {
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "X: " << x << " Address: " << &x << "\n";
    std::cout << "Y: " << y << " Address: " << &y << "\n\n";
}