#include <iostream>

void walk(int steps);
int factorial(int ans[], int num);

int main() {
    walk(100);

    int num = 5;
    int ans[num+1];
    ans[0] = 1;
    ans[1] = 1;
    std::fill(ans+2, ans + (num+1), 0);

    std::cout << "Factorial of 5: " << factorial(ans, num);
    return 0;
}

void walk(int steps) {
    // iterative approach
    // for (int i = 0; i < steps; i++) {
    //     std::cout << "You take a step!\n";
    // }

    // recursive approach (use more memory and processing time)
    if (steps > 0) {
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}

int factorial(int ans[], int num) {
    // iterative approach
    // int result = 1;
    // for (int i = 1; i <= num; i++) {
    //     result *= i;
    // }
    // return result;

    // recursive approach with memoization
    if (ans[num] != 0) {
        return ans[num];
    } else {
        ans[num] = num*factorial(ans, num-1);
        return ans[num];
    }
}