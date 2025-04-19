#include <iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;
    
        Student(std::string name, int age, double gpa) {
            this -> name = name;
            this -> age = age;
            this -> gpa = gpa;
        }

};


// Overloaded Contructors
class Pizza {
    public:
        std::string topping1;
        std::string topping2;
    
        Pizza(std::string topping1) {
            this -> topping1 = topping1;
        }

        Pizza(std::string topping1, std::string topping2) {
            this -> topping1 = topping1;
            this -> topping2 = topping2;
        }

        Pizza() {}
};




int main() {
    
    Student stud1("Ahmmad Shawki", 20, 3.4);
    Student stud2("Arko Chowdhury", 21, 3.3);

    std::cout << stud1.name << "\n";
    std::cout << stud1.age << "\n";
    std::cout << stud1.gpa << "\n";

    std::cout << stud2.name << "\n";
    std::cout << stud2.age << "\n";
    std::cout << stud2.gpa << "\n";


    Pizza pizza1("pepperoni");
    std::cout << pizza1.topping1 << "\n";

    Pizza pizza2("mushrooms", "cheese");
    std::cout << pizza2.topping1 << "\n";
    std::cout << pizza2.topping2 << "\n";

    Pizza pizza3;


    return 0;
}