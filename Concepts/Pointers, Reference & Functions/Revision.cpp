#include <iostream>
using namespace std;

int main()
{   
    int high = 100;
    int low = 50;

    /*
    ! Pointers to Constant:
    * the data cannot be changed but the pointer can be changed
    */  
    const int *score = &high;
    *score = 34; // Error: value can't be changed
    score = &low; // Correct: address changed
    
    /*
    ! Constant Pointers: 
    * the data can be changed but the pointer itself cannot be changed.
    */
    int *const ptr = &high;
    *ptr = 56; // Correct
    ptr = &low // Error

    /*
    ! Constant Pointers to Constant:
    * neither the data or the pointer can be changed
    */
    const int *const pointer = &high;
    *pointer = 15; // Error
    pointer = &low; // Error
    
    // Pointer Arithmetic
    int arr[] = {1, 2, 3, 4, 5};
    int *array_pointer_two = arr;
    int *array_pointer_one = &arr[0];

    array_pointer_one++;
    cout << *array_pointer_one << endl;

    array_pointer_one--;
    cout << *array_pointer_one << endl;

    array_pointer_two = array_pointer_two + 1;
    array_pointer_two = array_pointer_two + 2;
    array_pointer_two = array_pointer_two + 3;

    return 0;
}