#include <iostream>
#include <vector>

// typedef increase readability and reduce typos
// typedef  std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;

// 'using' keyword can also be used instead of typedef
using pairlist_t = std::vector<std::pair<std::string, int>>;
using text_t = std::string;
// 'using' is more popular because it is suitable with templates

int main() {
    // std::vector<std::pair<std::string, int>> pairlist;
    pairlist_t pairlist;

    //std::string name = "Ahammad";
    text_t name = "Ahammad";

    return 0;
}

