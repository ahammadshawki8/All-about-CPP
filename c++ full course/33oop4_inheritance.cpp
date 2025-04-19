#include <iostream>

class Employee {
    public:
        std::string first;
        std::string last;
        int age;
        double salary;
        std::string email;
    
        Employee(std::string first, std::string last, int age, double salary) {
            this -> first = first;
            this -> last = last;
            this -> age = age;
            this -> salary = salary;
            this -> email = first + "." + last + "@company.com";
        }

        void info() {
            std::cout << "NAME: " << first << " " << last << "\n";
            std::cout << "AGE: " << age << "\n";
            std::cout << "SALARY: " << salary << "\n";
            std::cout << "EMAIL: " << email << "\n";
        }
};


class Developer : public Employee {
    public:
        std::string lang;
        int exp;

        Developer(std::string first, std::string last, int age, double salary, std::string lang, int exp) : Employee(first, last, age, salary) {
            this -> lang = lang;
            this -> exp = exp;
        }

        void extra_info() {
            std::cout << "PROGRAMMING: " << lang << "\n";
            std::cout << "EXPERIENCE (YEARS): " << exp << "\n";
        }
};



int main() {
    Employee emp1("Ahammad", "Shawki", 20, 5504.323);
    emp1.info();

    Developer dev1("Arko", "Chowdhury", 20, 6674.3, "Python", 3);
    std::cout << dev1.first << "\n";
    dev1.info();

    return 0;
}