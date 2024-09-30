#include <iostream>
#include <vector>
using namespace std;

/*
   ! Methods:
   ? Construction & Initialization:
   * fill()
   * copy()
   * move()
   * assign()
   
   ? Element Access:
   * []
   * at()
   * front()
   * back()
   * data()
   
   ? Capacity:
   * size()
   * max_size()
   * capacity(): Returns the number of elements that can be held without reallocating
   * empty()
   * reserve(): Requests that the vector capacity be at least enough to contain n elements
   * shrink_to_fit(): Reduces capacity to fit the size
   
   ? Modifiers:
   * clear()
   * insert()
   * emplace()
   * push_back()
   * emplace_back()
   * pop_back()
   * erase()
   * resize()
   * swap()
*/

void display(vector <int> &vec){
    for(auto v: vec){
        cout << v << ", ";
    }
    cout << endl;
}

int main()
{
    // default constructor
    vector <int> vector1;

    // initialize with size (constructor style)
    vector <int> vector2(10);

    // initialize with values (list style)
    vector <int> vector3 = {1, 2, 3, 4, 5};

    // initialize with size and defualt values
    vector <int> vector4(3, 0);

    // list initialization and constructor style 
    vector <int> vector5(64);
    vector5 = {352, 12, 65, 112, 7876, 32};

    // list style and default values
    vector <double> vector6(10, 0.0);
    vector6 = {5.6, 7.8, 34.45, 67.99};

    // Vector Functions
    //* Element Access Functions
    cout << "Third element: " << vector5.at(2) << endl; // with bound checking
    cout << "Second element: " << vector5[1] << endl; // without bound checking
    cout << "First element: " << vector5.front() << endl; 
    cout << "Last element: " << vector5.back() << endl; 

    // //* Capacity Function
    // //? Size: returns the no of elements the vector currently holding
    cout << "Size: " << vector5.size() << endl;

    // //? Capacity: returns the number of elements that the vector can held before requiring a reallocation
    cout << "Capacity: " << vector5.capacity() << endl;

    // //? empty: returns 0 or 1
    cout << "is empty (0 or 1): " << vector6.empty() << endl;

    display(vector5);

    //* Modifiers
    vector5.push_back(89); 
    vector5.push_back(893);
    vector5.pop_back(); // removes the last element

    // Insert element at specified position
    vector5.insert(vector5.begin(), 67);
    vector5.insert(vector5.begin() + 1, 68);
    vector5.insert(vector5.begin() + 2, 69);

    // Insert 5 elements at specified position all initialized to 10
    vector5.insert(vector5.begin() + 3, 5, 10); 

    // Erase
    vector5.erase(vector5.begin());
    vector5.erase(vector5.begin(), vector5.begin() + 5);
    // vector5.clear(); // Removes all element

    display(vector5);










    return 0;
}