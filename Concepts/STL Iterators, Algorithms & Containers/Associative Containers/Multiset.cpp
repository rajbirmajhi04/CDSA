#include <iostream>
#include <iterator>
#include <set>
using namespace std;
int main()
{
    /*
    * Multisets are a type of associative containers similar to the set, with the exception that multiple elements can have the same values.
    * The value of elements can't be modified after they have been stored in the multiset.
    */

    // empty multiset container
    multiset<int, greater<int> > gquiz1;
 
    // insert elements in random order
    gquiz1.insert(40);
    gquiz1.insert(30);
    gquiz1.insert(60);
    gquiz1.insert(20);
    gquiz1.insert(50);
 
    // 50 will be added again to
    // the multiset unlike set
    gquiz1.insert(50);
    gquiz1.insert(10);

    multiset<int, greater<int> >::iterator itr;
    cout << "\nThe multiset gquiz1 is : \n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}