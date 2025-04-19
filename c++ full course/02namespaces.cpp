#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

// int main() {
//     int x = 0;

//     std::cout << x << "\n";
//     std::cout << first::x << "\n"; // :: is scope resulation operator
//     std::cout << second::x << "\n";
//     return 0;
// }



// int main() {
//     using namespace second;

//     std::cout << x;

//     return 0;
// }



// int main() {
//     using namespace std; 
//     // now we dont need to include std anymore for declaring string and output
//     // not recommended

//     string name = "Ahammad Shawki";
//     cout << "Hello " << name << "!\n";
//     return 0;
// }


int main() {
    using std::string;
    using std::cout;
    // safer alternative because we aren't importing all entities
    // so now naming conflicts 
    
    string name = "Ahammad Shawki";
    cout << "Hello " << name << "!\n";
    return 0;
}