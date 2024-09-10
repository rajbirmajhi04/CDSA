#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
    /*
    * Same as Map but allows multiple elementsto have equivalent keys in a sorted order always
    */

    multimap<int, int> gquiz1; // empty multimap container
 
    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(6, 50));
    gquiz1.insert(pair<int, int>(6, 10));
 
    // printing multimap gquiz1
    multimap<int, int>::iterator itr;
    cout << "\nThe multimap gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    cout << endl;

    gquiz1.insert(pair<int, int>(4, 50));
    gquiz1.insert(pair<int, int>(5, 10));

    cout << "\nThe multimap gquiz1 after adding extra elements is :\n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;        

    return 0;
}