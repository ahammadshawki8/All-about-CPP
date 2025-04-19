#include <iostream>

struct Student {
    std::string name;
    double gpa;
    bool enrolled = true; // default value
};

struct Car {
    std::string model;
    int year;
    std::string color;
};

// void printCar(Car car_obj);
void printCar(Car &car_obj);
void paintCar (Car &car_obj, std::string new_color);



struct point {
    int x, y;
    bool operator<(const point &p) {
        if (x = p.x) return y > p.y;
        else return x > p.x;
    }
};

int main() {
    
    Student student1;
    student1.name = "Ahammad Shawki";
    student1.gpa = 3.4;

    Student student2;
    student2.name = "Spongebob";
    student2.gpa = 3.1;
    student2.enrolled = false;

    std::cout << student1.name << "\n";
    std::cout << student1.gpa << "\n";
    std::cout << student1.enrolled << "\n";

    std::cout << student2.name << "\n";
    std::cout << student2.gpa << "\n";
    std::cout << student2.enrolled << "\n";


    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    std::cout << &car1 << "\n";
    printCar(car1);

    printCar(car2);
    paintCar(car2, "green");
    printCar(car2);



    point point1;
    point point2;
    point point3;

    point1.x = 10;
    point1.y = 5;

    point2.x = 10;
    point2.y = 20;

    point3.x = 5;
    point3.y = 20;

    std::cout << (0 < 1) << "\n";
    std::cout << (point3 < point1) << "\n";
    std::cout << (point2 < point1) << "\n";
    return 0;
}

// void printCar(Car car_obj) {
//     std::cout << car_obj.model << "\n";
//     std::cout << car_obj.year << "\n";
//     std::cout << car_obj.color << "\n";
//     std::cout << &car_obj << "\n";
// }

void printCar(Car &car_obj) {
    std::cout << car_obj.model << "\n";
    std::cout << car_obj.year << "\n";
    std::cout << car_obj.color << "\n";
    std::cout << &car_obj << "\n\n";
}

void paintCar (Car &car_obj, std::string new_color) {
    car_obj.color = new_color;
}