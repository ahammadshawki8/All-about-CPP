#include <iostream>

// int main () {
//     int month;
//     std::cout << "Enter the month number: ";
//     std::cin >> month;

//     switch(month) {
//         case 1:
//             std::cout << "It is January";
//             break;
//         case 2:
//             std::cout << "It is February";
//             break;
//         case 3:
//             std::cout << "It is March";
//             break;
//         case 4:
//             std::cout << "It is April";
//             break;
//         case 5:
//             std::cout << "It is May";
//             break;
//         case 6:
//             std::cout << "It is June";
//             break;
//         case 7:
//             std::cout << "It is July";
//             break;
//         case 8:
//             std::cout << "It is August";
//             break;
//         case 9:
//             std::cout << "It is September";
//             break;
//         case 10:
//             std::cout << "It is October";
//             break;
//         case 11:
//             std::cout << "It is November";
//             break;
//         case 12:
//             std::cout << "It is December";
//             break;
//         default:
//             std::cout << "Please enter in only numbers (1-12)"; 
//     }
// }

int main () {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*************** Calculator ***************\n";
    
    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter another number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << result << "\n";
            break;
        default:
            std::cout << "Invalid Input\n";
    }
    
    std::cout << "*************** Calculator *************** \n";
    return 0;
}