#include <iostream>

double getTotal(double prices[], int size);
int searchArray(int array[], int size, int element);
void sort (int array[], int size);


int main() {
    // Initialize, Add, Update
    std::string cars[] = {"Audi", "Toyota", "Camry"};

    std::cout << cars[0] <<"\n";
    std::cout << cars[2] <<"\n";

    cars[2] = "Lexus";
    std::cout << cars[2] <<"\n";

    int numbers[4];
    numbers[0] = 100;
    numbers[1] = 80;
    numbers[2] = 50;
    // numbers[3] = 10;

    std::cout << numbers[3] <<"\n";



    // sizeof()
    double gpa = 2.5;
    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(double) << " bytes\n";
    std::cout << sizeof(std::string) << " bytes\n"; // string is a reference datatype. size doesn't matter on length of the string
    std::cout << sizeof(char) << " bytes\n";
    std::cout << sizeof(bool) << " bytes\n";
    std::cout << sizeof(int) << " bytes\n";
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << "Number of Elements: " << sizeof(grades)/sizeof(grades[0]) << "\n"; //length



    // Iteration
    std::string students[] = {"Shawki", "Arko", "Aoyos", "Essam"};
    int length = sizeof(students)/sizeof(students[0]);
    for (int i = 0; i < length; i++) {
        std::cout << students[i] << "\n";
    }

    for (std::string student : students) {
        std::cout << student << "\n";
    }



    // pass array to a function
    double prices[] = {28.89, 45.58, 45.00, 3.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size); // [] not needed
    std::cout << "$" << total << "\n";



    // search (linear search)
    int nums[] = {4, 5, 2, 34, 23, 500, 234, 78};
    int array_size = sizeof(nums)/sizeof(nums[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: \n";
    std::cin >> myNum;

    index = searchArray(nums, array_size, myNum);
    if (index != -1) {
        std::cout << myNum << " is at index " << index << "\n"; 
    } else {
        std::cout << myNum << " is not in the array.\n"; 
    }
    


    // sort (bubble sort)
    int array[] = {10, 1,  9, 2, 8, 3, 7, 4, 6, 5};
    int len = sizeof(array)/sizeof(array[0]);

    sort(array, len);

    for (int element : array) {
        std::cout << element << " ";
    }



    // fill() function
    const int SIZE = 99;
    std::string foods[SIZE];
    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "burger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "chips");

    for (std::string food : foods) {
        std::cout << food << "\n";
    }


    std::string games[5];
    int games_size = sizeof(games)/sizeof(games[0]);
    std::string temp;

    for (int i = 0; i < games_size; i++) {
        std::cout << "Enter a game you like or 'q' to exit #" << (i + 1) <<": ";
        std::getline(std::cin >> std::ws, temp);
        if (temp == "q") {
            break;
        } else {
            games[i] = temp;
        }
    }

    std::cout << "You like the following games: \n";
    for (int i = 0; !games[i].empty(); i++) {
        std::cout << games[i] << "\n";
    }



    // multidimentional array
    std::string courses[][3] = {{"Math", "Physics", "Chemistry"},
                                {"Literature", "History", "Biology"},
                                {"Comsci", "Electronics", "Mechanics"}};

    int rows = sizeof(courses)/sizeof(courses[0]);
    int columns = sizeof(courses[0])/sizeof(courses[0][0]);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns ; j++) {
            std::cout << courses[i][j] << " ";
        }
        std::cout << "\n";
    }


    return 0;
}




double getTotal(double prices[], int size) { // [] needed
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}

int searchArray(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}

void sort (int array[], int size) {
    int temp;
    for (int i=0; i < size-1; i++) {
        for (int j=0; j < size-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}