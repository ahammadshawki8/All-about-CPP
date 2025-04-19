#include <iostream>
#include <algorithm>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

int main() {
    
   ordered_set s;
   s.insert(1);
   s.insert(2);
   s.insert(3);
   s.insert(4);
   s.insert(5);

   for (auto it: s) {
    cout << it << " ";
   }
   cout << "\n";

   cout << s.order_of_key(4) << "\n";

   auto it = s.find_by_order(0);
   cout << *it << "\n";

   return 0;
}