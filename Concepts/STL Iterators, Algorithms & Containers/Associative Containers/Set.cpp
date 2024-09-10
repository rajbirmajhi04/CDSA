#include <iostream>
#include <set>
using namespace std;
int main()
{

    /*
    * Store unique elements of teh same type in a sorted manner
    * Unique elements 
    * Immutable: adding and removing elemnts is possible but cant change the values of existing elements
    * Sorted Order: Ascending(default) and Descending
    * Associative: elements are referenced using their key not by their position in the container
    * Uses binary search tress for implementation
    * More than one element can be erased by giving the starting and ending iterator
    */

    set <int> set1;
    set1 = {1, 2, 3, 4, 5}; // ascending 
    set <int, greater <int>> set2; // descending
    set2 = {10, 20, 30, 40, 50};

    set1.insert(6);
    set1.insert(7);
    set1.insert(8);
    set1.insert(9);
    set1.insert(10);

    cout << "Set 1: " << endl;
    for(auto &n: set1){
        cout << n << " ";
    }
    cout << endl;

    cout << "Set 2: " << endl;
    for(auto &n: set2){
        cout << n << " ";
    }
    cout << endl;

    int num = 40;
    if(set2.count(num) == 1){
        cout << "Exists" << endl;
    }
    else {
        cout << "Doesn't exists" << endl;
    }

    set <int> set3(set1.begin(), set1.end());
    cout << "Set 3: " << endl;
    for(auto &n: set3){
        cout << n << " ";
    }
    cout << endl;

    set3.erase(set3.begin(), set3.find(4));
    cout << "Set 3 after removing a range of elements: " << endl;
    for(auto &n: set3){
        cout << n << " ";
    }
    cout << endl;

    
    return 0;
}