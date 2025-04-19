#include <iostream>

double square(double length);
double cube(double length);
std::string fullname(std::string firstname, std::string lastname);

int main() {
    double length = 5.0;
    double area = square(length);
    std::cout << "Area: " << area << " cm^2\n";
    double volume = cube(length);
    std::cout << "Volume: " << volume << " cm^3\n";
    std::cout << "Fullname: " << fullname("Ahammad", "Shawki") << "\n";
    return 0;
}

double square(double length) {
    double result = length * length;
    return result;
}

double cube(double length) {
    double result = length * length * length;
    return result;
}

std::string fullname(std::string firstname, std::string lastname) {
    return firstname + " " + lastname;
}