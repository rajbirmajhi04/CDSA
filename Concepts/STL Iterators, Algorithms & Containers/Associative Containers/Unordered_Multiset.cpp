#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    /*
    * works similarly to an unordered_set. The only difference is that we can store multiple copies of the same key in this container.
    *It is also implemented using a hash table so the time complexity of the operations is O(1) on average which can go up to linear time O(n) in the worst case.
    */

    unordered_multiset <int> ums;
    ums.insert(10);
    ums.insert(30);
    ums.insert(50);
    ums.insert(40);
    ums.insert(20);
    ums.insert(60);

    cout << "Unoredred Multi Set: " << endl;
    for(auto &n: num2){
        cout << n << " ";
    }
    cout << endl;    






    return 0;
}