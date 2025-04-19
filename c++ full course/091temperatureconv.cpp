#include <iostream>

int main () {
    double temp;
    char unit;

    std::cout << "****** Temperature conversion ******\n";
    
    std::cout << "F = Farenheit\n";
    std::cout << "C = Celcius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || 'f') {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8*temp)+32;
        std::cout << "temperature in Farenheit: " << temp <<"F\n";
    } else if (unit == 'C' || 'c') {
        std::cout << "Enter the temperature in Farenheit: ";
        std::cin >> temp;

        temp = (temp-32)/1.8;
        std::cout << "temperature in Celcius: " << temp <<"C\n";
    } else {
        std::cout << "Plese enter F or C\n";
    }
    
    std::cout << "************************************\n";

    return 0;
}