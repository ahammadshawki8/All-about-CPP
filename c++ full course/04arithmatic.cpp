#include <iostream>
#include <cmath>

int main () {
    int a = 20;
    a = a + 1;
    a += 1;
    a++;

    a = a - 1;
    a -= 1;
    a--;

    a = a * 2;
    a *= 2;

    a = a / 2;
    a /= 2;

    int b = a % 3;
    // follows BODMAS. brackets can be used.



    // useful math related function
    double x = 3;
    double y = 4;
    double z, p, q, k, j, r, c, f;

    z = std::max(x, y);
    p = std::min(x, y);
    q = pow(x, y);
    k = sqrt(9);
    j = abs(-78);
    r = round(3.14159);
    c = ceil(3.14159);
    f = floor(3.14159);
    // https://www.cplusplus.com/reference/cmath/
    // find all math related functions

    std::cout << z << "\n";
    std::cout << p << "\n";
    std::cout << q << "\n";
    std::cout << k << "\n";
    std::cout << j << "\n";
    std::cout << r << "\n";
    std::cout << c << "\n";
    std::cout << f << "\n";

    return 0;
}