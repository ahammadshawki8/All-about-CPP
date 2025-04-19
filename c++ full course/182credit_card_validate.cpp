#include <iostream>

/**
Luhn Algorithm (credit card number validator)
1. Double every even numbered digits from right to left. If doubled number is 2 digits, split them.
2. Add all single digits from step 1.
3. Add all odd numbered digits from right to left.
4. Sum results from step 2 and 3.
5. If step 4 result is divisible by 10, the number is valid.
**/

int getDigit(const int number);
int sumOdd(const std::string cardNumber);
int sumEven(const std::string cardNumber);

int main() {
    std::string cardNumber;
    int result = 0;
    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEven(cardNumber) + sumOdd(cardNumber);

    if (result % 10 == 0) {
        std::cout << "VALID CREDIT CARD";
    } else {
        std::cout << "INVALID CREDIT CARD";
    }
    return 0;
}


int getDigit(const int number) {
    return (number % 10) + (number/10);
}

int sumEven(const std::string cardNumber) {
    int sum = 0;
    int size = cardNumber.size();
    for (int i = size-2; i >= 0; i = i-2) {
        sum += getDigit((cardNumber[i]-'0') * 2); //ASCII table
    }
    return sum; 
}

int sumOdd(const std::string cardNumber) {
    int sum = 0;
    int size = cardNumber.size();
    for (int i = size-1; i >= 0; i = i-2) {
        sum += getDigit(cardNumber[i]-'0');
    }
    return sum;
}