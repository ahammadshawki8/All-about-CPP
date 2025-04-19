#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main() {

    stack <int> st;
    st.push(10);
    st.push(50);
    st.push(90);
    st.push(40);

    cout << st.size() << "\n";

    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";

    if (st.empty()) {
        cout << "EMPTY!" <<"\n";
    } else {
        cout << "NOT EMPTY!" <<"\n";
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";


    return 0;
}