#include <iostream>

class Shape {
    public:
        double area;
        double volume;
};


class Cube : public Shape {
    public:
        double side;

        Cube(double side) {
            this -> side = side;
            this -> area = side * side;
            this -> volume = side * side * side;
        }

};

class Sphere : public Shape {
    public:
        double ratio;

        Sphere (double ratio) {
            this -> ratio = ratio;
            this -> area = 4 * 3.14159 * (ratio * ratio);
            this -> volume = (4/3.0) * 3.14159 * (ratio * ratio *ratio);
        }
};

int main() {
    Cube cube1(3.5);
    std::cout << cube1.area << "\n";
    std::cout << cube1.volume << "\n\n";

    Sphere sphere1(3.5);
    std::cout << sphere1.area << "\n";
    std::cout << sphere1.volume << "\n\n";
    return 0;
}