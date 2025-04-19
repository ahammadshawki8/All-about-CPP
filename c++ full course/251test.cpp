#include <iostream>

int factorial(int ans[], int num);

int main() {
    int num = 5;
    int ans[num+1];
    ans[0] = 1;
    ans[1] = 1;
    std::fill(ans+2, ans + (num+1), 0);

    std::cout << "Factorial of 5: " << factorial(ans, num);
    return 0;
}

int factorial(int ans[], int num) {
    if (ans[num] != 0) {
        return ans[num];
    } else {
        ans[num] = num*factorial(ans, num-1);
        return ans[num];
    }
}