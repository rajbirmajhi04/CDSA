#include <iostream>
#include <array>
#include <tuple>
using namespace std;

/*
    ! Pass by value: 
    * Simple but copies the array. Inefficient for large arrays
    * Changes made to the array inside the function won't affect the original array

    ! Pass by reference:
    * Efficient and allows modifications of the original arrays
    * No copying is involved

    ! Pass by const reference:
    * Efficient and ensures the original array won't be modified
    * No copying is involved

    ! Pass by pointers:
    * Efficient and allows modification but requires careful handling (Manual handling)
    * No copying is involved
*/ 
/*
    ! Methods:
    ? Element Access:
    * []: Access the element at the specified position without bounds
    * at(): Access the element at the specified position with bounds checking
    * get(): Access the element at the specified position (Member of tuple)
    * front(): Returns reference to the first element
    * back(): Returns reference to the last element
    * data(): Returns pointer underlying array
     
    ? Capacity:
    * size(): Returns the number of elements in the array
    * max_size(): Returns the maximum number of elements the array can hold
    * empty(): Checks whether the array is empty
    
    ? Modifiers:
    * fill(): Assign the given value to all the elements
    * swap(): Swaps the content of two array
    * copy(): Copies content of one array into another array
    * move(): Move one array's content into another
*/

int main()
{
    /*
    ! Introduction:
    * Array classes are generally more efficient, light-weight and reliable than C-style arrays.
    * With C-style array there is more risk of array being decayed into a pointer. Array classes don’t   decay into pointers.
    * The size is fixed at compile time and cannot be changed. 
     
    ! Difference between C-Style and STL Arrays:
    * In C-Style arrays the uninitialized elements default to garbage values
    * In STL arrays default to zeroes
    
    * In C-Style arrays size must be manually tracked
    * In STL arrays size can be retrived using memebr function
    
    * In C-Style no bound checking is performed
    * In STL arrays bound checking is performed using member functions
    
    * Cannot be copied or assigned directly
    * Can be copied and assigned directly using member function
    
    * Not compatible with most standard library algorithms and containers
    * Fully compatible
    
    * Simple and minimal overhead but offers no automatic memory management features
    * Typically has a slight overhead due to its additional functionalities but still efficient and offers better safety and usability features
    */

    // List initialization
    array <int, 5> num1 = {1, 2, 3, 4, 5};

    // Default initialization (all elements zero)
    array <int, 5> num2 = {};

    // Using fill(): All elements will be 10
    array <int, 5> num3;
    num3.fill(10); 

    // Copy initialization
    array <int, 5> num4 = num1;

    // Move initialization
    // num4 is now valid but unspecified state
    array <int, 5> num5 = move(num4);

    // Aggregate initialization
    array <int, 5> num6 = {1, 2};

    // Iterating using Basic For Loop
    cout << "Displaying num1: " << endl;
    for(int i = 0; i < num1.size(); i++){
        cout << num1[i] << " ";
    }
    cout << endl;

    // Iterating using Iterators
    cout << "Displaying num2" << endl;
    for(auto it = num2.begin(); it != num2.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // Iterating using at()
    cout << "Displaying num3" << endl;
    for(int i = 0; i < num3.size(); i++){
        cout << num3.at(i) << " ";
    }
    cout << endl;

    /*
    * Traditional For Loop: Most versatile 
    * Range Based For Loop: Simple and Clean
    * Iterators: Provides flexibility, especially when you need to perform more complex operations 
    */

    // Taking inputs and storing them into STL array
    int inputs;
    cout << "Enter no. of inputs: ";
    cin >> inputs;

    for(int i = 0; i < inputs; i++){
        cout << "Enter element: ";
        cin >> num2[i];
    }
    cout << endl;

    cout << "Displaying array 2: " << endl;
    for(int i = 0; i < num2.size(); i++){
        cout << num2.at(i) << " ";
    }
    cout << endl;
    
    return 0;
}