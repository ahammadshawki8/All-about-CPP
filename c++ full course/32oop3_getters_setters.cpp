#include <iostream>

class Student {
    private:
        int group = 5;

    public:
        Student (int group) {
            setGroup(group);
        }

        int getGroup() {
            return group;
        }

        void setGroup(int group) {
            if (group < 1) {
                this -> group = 1;
            } else if (group > 16) {
                this -> group = 16;
            } else {
                this -> group = group;
            }
        }

};

int main() {
    Student person1(-1);
    // person1.group = 10;
    std::cout << "The group is " << person1.getGroup() << "\n";
    person1.setGroup(18);
    std::cout << "The group is " << person1.getGroup() << "\n";
    return 0;
}