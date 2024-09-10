#include <iostream>
#include <vector>
using namespace std;
int main()
{
    /*
    * Vectors are used to store similar data types but unlike arrays the size of vector can grow dynamically.
    * Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.
    * In vectors, data is inserted at the end.
    * 
    */

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

    // Default Constructor
    vector <int> vec1;

    // Fill Constructor
    vector <int> vec2(5); // Vector with 5 elements, each initialized to 0
    vector <int> vec3(5, 10); // vector with 5 elements, each initalized to 10

    // List Initializer
    vector <int> vec4 = {1, 2, 3, 4, 5};

    // Copy Constructor
    vector<int> original = {1, 2, 3};
    vector<int> copy = original; 

    // Range Constructor
    vector <int> source = {6, 7};
    vector <int> vec4(source.begin(), source.end());

    // Move Constructor
    vector <int> s = {7, 8, 9, 10};
    vector <int> q = move(s);

    // Braces Initialization
    vector <int> r{44, 34, 12, 89};

    // Using assign()
    vec1.assign(4, 6);
    vec1.assign(source.begin(), source.end());

    // Using emplace()
    vec1.emplace(101);

    return 0;
}