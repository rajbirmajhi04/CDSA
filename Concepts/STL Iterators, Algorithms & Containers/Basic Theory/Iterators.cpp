#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    /*
    * An iterator is an object that points to an element inside the container.
    * We can use iterators to move through the contents of the container
    * They can be visualized as something similar to a pointer pointing to some location and we can access the content at that particular location using them
    
    ! Based on the functionality of the iterators they can be classified into five major categories:
    * Input Iterators: are the weakest of all iterators and have very limited functionality. Can only be used in single pass algorithms

    * Output Operators: Just like input iterators, they are also very limited in their functionality and can only be used in single-pass algorithm, but not for accessing elements, but for being assigned elements.

    * Forward Iterator: They are higher in the hierarchy than input and output iterators, and contain all the features present in these two iterators. But, as the name suggests, they also can only move in a forward direction and that too one step at a time.

    * Bidirectional Iterators: They have all the features of forward iterators along with the fact that they overcome the drawback of forward iterators, as they can move in both the directions, that is why their name is bidirectional.

    * Random-Access Iterators: They are the most powerful iterators. They are not limited to moving sequentially, as their name suggests, they can randomly access any element inside the container. They are the ones whose functionality are same as pointers.
    */

    /*
    ! Containers supporting Iterators:
    * Vector -> Random Access
    * Deque -> Random Access
    * List -> Bidirectional
    * Map -> Bidirectional
    * Multimap -> Bidirectional
    * Set -> Bidirectional
    * Multiset ->  Bidirectional
    
    * Stack, Queue and Priority Queue -> No Iterators Supported
    */


    /*
    ! Input Iterator: 
    ? Salient Features: 
    * Usability: Input iterators can be used only with single-pass algorithms, i.e., algorithms in which we can go to all the locations in the range at most once, like when we have to search or find any element in the range, we go through the locations at most once.

    * Equality / Inequality Comparison: An input iterator can be compared for equality with another iterator. Since, iterators point to some location, so the two iterators will be equal only when they point to the same position, otherwise not.

    * Dereferencing: An input iterator can be dereferenced, using the operator * and -> as an rvalue to obtain the value stored at the position being pointed to by the iterator.

    * Incrementable: An input iterator can be incremented, so that it refers to the next element in the sequence, using operator ++(). But --() decrement can't be done as Input iterators are unidirectional.
    
    ? Limitations:
    * We cannot assign values to a container using Input Iterator as it is only used to access
    * Cannot be decremented
    * Cannot be used in multi pass algorithms
    * Supports limited Relational Operations
    * Don't support Arithmetic Operations
    */

    vector <int> numbers = {1, 2, 3, 4, 5};
    vector <int> :: iterator input_iter = numbers.begin();
    cout << "Vector 1 elements: ";
    while(input_iter != numbers.end()){
        cout << *input_iter << " ";
        input_iter ++;
    }
    cout << endl;

    /*
    ! Output Iterator:
    ? Salient Features: 
    * Usability: Just like input iterators, Output iterators can be used only with single-pass algorithms, i.e., algorithms in which we can go to all the locations in the range at most once, such that these locations can be dereferenced or assigned value only once.

    * Equality / Inequality Comparison: Unlike input iterators, output iterators cannot be compared for equality with another iterator.

    * Dereferencing: An input iterator can be dereferenced as an rvalue, using operator * and ->, whereas an output iterator can be dereferenced as an lvalue to provide the location to store the value.

    * Incrementable: An output iterator can be incremented, so that it refers to the next element in sequence, using operator ++()

    * Swappable: The value pointed to by these iterators can be exchanged or swapped.

    ? Limitations: 
    * Only assigning, no accessing
    * Cannot be decremented
    * Cannot be used in multi pass algorithm
    * No relational operations
    * No arithmetic operations
    */

    vector <int> vec1(5);
    vector <int> :: iterator output_iter = vec1.begin();
    int value = 1;
    while (output_iter != vec1.end())
    {
        *output_iter = value;
        output_iter ++;
        value ++;
    }
    cout << "Vector 2 elements: ";
    for(int i: vec1){
        cout << i << " ";
    }
    cout << endl;

    /*
    ! Forward Iterator:
    ? Salient Features: 
    * Read and Write Access: Forward iterators support both reading from and writing to the elements in a container.

    * Multi-Pass: You can traverse the container multiple times using forward iterators. This means that you can revisit the same element using the same iterator.

    * Dereferencing: Because an input iterator can be dereferenced, using the operator * and -> as an rvalue and an output iterator can be dereferenced as an lvalue, so forward iterators can be used for both the purposes.

    * Incrementable: A forward iterator can be incremented, so that it refers to the next element in sequence, using operator ++().

    * Swappable: The value pointed to by these iterators can be exchanged or swapped.

    * Default-Constructible: You can create a forward iterator without initializing it immediately.

    ? Limitations: 
    * Cannot be decreamented
    * Limited relational operations
    * Limited arithmetic operations
    * Do not support offset dereference operator
    */
    
    vector <int> vec2 = {11, 56, 213, 87, 22};
    vector <int> :: iterator forward_iter = vec2.begin();
    cout << "Vector 3 elements (before): ";
    for(forward_iter = vec2.begin(); forward_iter != vec2.end(); forward_iter ++){
        cout << *forward_iter << " ";
    }
    cout << endl;
     cout << "Vector 3 elements (after): ";
    for(forward_iter = vec2.begin(); forward_iter != vec2.end(); forward_iter ++){
        *forward_iter *= 5;
    }
    for(forward_iter = vec2.begin(); forward_iter != vec2.end(); forward_iter ++){
        cout << *forward_iter << " ";
    }
    cout << endl;
   
    /*
    ! Bidirectional Iterators: 
    ? Salient Features: 
    * Read and Write Access: Like forward iterators, bidirectional iterators allow both reading from and writing to the elements in a container.

    * Multi-Pass: You can traverse the container multiple times in both directions.
    
    * Incrementable: The iterator can be incremented to move to the next element in the container using the ++ operator.

    * Decrementable: The iterator can be decremented to move to the previous element in the container using the -- operator.

    * Swappable: The value pointed to by these iterators can be exchanged or swapped.

    * Equality/Inequality Comparison: You can compare two bidirectional iterators for equality or inequality using == and != operators.

    * Default-Constructible: You can create a bidirectional iterator without initializing it immediately.

    * Dereferencing: You can access the value pointed to by the iterator using the * operator.   

    ? Limitations: 
    * Limited relational operations
    * Limited Arithmetic operations 
    */

    list <int> list1 = {10, 20, 30, 40, 50};
    list <int> :: iterator bidIter = list1.begin();

    cout << "Forward Iteration: ";
    while (bidIter != list1.end()){
        cout << *bidIter << " ";
        bidIter ++;
    }
    cout << endl;

    cout << "Backward Iteration: ";
    while (bidIter != list1.begin()){
        bidIter --;
        cout << *bidIter << " ";
    }
    cout << endl;

    /*
    ! Random Access Iterator:
    ? Salient Features:
    * Read and Write Access: Like other iterators, random access iterators allow both reading and writing of elements.

    * Multi-Pass: You can traverse the container multiple times, moving both forward and backward.

    * Incrementable and Decrementable: You can move the iterator forward using ++ and backward using --.

    * Arithmetic Operations: You can perform arithmetic operations like addition and subtraction on the iterator, e.g., it + n to move n steps forward, or it - n to move n steps backward.

    * Comparison Operations: You can compare the relative positions of two iterators using relational operators like <, >, <=, and >=.

    * Indexing: You can access elements using the subscript operator [], similar to array indexing, e.g., it[n].

    * Dereferencing: Access the value pointed to by the iterator using *.

    * Swappable: The value pointed to by these iterators can be exchanged or swapped.
    */

    vector <int> vec3 = {89, 34, 23, 12, 55};
    vector <int> :: iterator randIter = vec3.begin();

    cout << "First element: " << *randIter << endl;
    randIter += 2;
    cout << "Third element: " << *randIter << endl;
    randIter -= 1;
    cout << "Second element: " << *randIter << endl;
    cout << "Fifth element: " << randIter[3] << endl;
    
    return 0;
}