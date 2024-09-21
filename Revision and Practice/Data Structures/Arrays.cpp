#include <iostream>
using namespace std;

// Passing array using pointer
void fun(int *array, int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

// Passing array using reference
void fun1(int (&array)[5]){
    for(int i = 0; i < 5; i++){
        cout << array[i] << " ";
    }
    cout << endl;    
}

int main()
{
    
    int mrk[10]; // Default garbage values
    int roll[5]; // Roll array with default initialization
    int codes[5] = {1, 2, 3, 4, 5}; // Initialization at the time of declaration
    int marks[100] = {}; // Marks array of size 100. No garbage values
    double price[] = {98.99, 105.67, 30.34}; // Initialization at declartion but size not specified

    // Size of array
    int each_size = sizeof(codes[0]);
    int total_size = sizeof(codes);
    int nElements = sizeof(codes) / sizeof(codes[0]);
    
    cout << "Size of each box: " << each_size << endl;
    cout << "Number of elements: " << nElements << endl;
    cout << "Total size: " << total_size << endl;

    // Accessing elements using indexing
    cout << "Element [0]: " << codes[0] << endl;
    cout << "Element [1]: " << codes[1] << endl;

    // Accessing using loops
    cout << "Array Elements: ";
    for(int i = 0; i < nElements; i++){
        cout << codes[i] << " ";
    }
    cout << endl;

    cout << "Array Elements: ";
    for(int elem: codes){
        cout << elem << " ";
    }
    cout << endl;

    cout << "Array Elements: ";
    int i = 0;
    while (i < nElements)
    {
        cout << codes[i] << " ";
        i++;
    }
    cout << endl;

    // Taking inputs into an array
    int inputs;
    cout << "Enter number of marks: ";
    cin >> inputs;

    for(int i = 0; i < inputs; i++){
        cout << "Enter mark [" << i << "]: ";
        cin >> marks[i];
    }

    cout << "Marks: " << endl;
    int mark_size = sizeof(marks) / sizeof(marks[0]);
    for(int i = 0; i <= mark_size; i++){
        cout << marks[i] << " ";
    }
    cout << endl;
    
    // Find an element in an array
    int elem_input;
    cout << "Enter number of elements: ";
    cin >> elem_input;

    int storage[10] = {};
    int storage_size = sizeof(storage) / sizeof(storage[0]);

    for(int i = 0; i < elem_input; i++){
        cout << "Enter element [" << i << "]: ";
        cin >> storage[i];
    }

    cout << "Storage Elements: ";
    for(int i = 0; i < storage_size; i++){
        cout << storage[i]  << " ";
    }
    cout << endl;

    int target;
    cout << "Enter element to find: ";
    cin >> target;

    for(int i = 0; i <= storage_size; i++){
        if(storage[i] == target){
            cout << "Match Found!" << endl;
            break;
        }
        else {
            cout << "Match not found!" << endl;
            break;
        }
    }

    // Find the largest and smallest value
    int smallest = INT_MIN;
    int largest = INT_MAX;

    for(int j = 0; j < storage_size; j++){
        if(storage[j] < smallest){
            smallest = storage[j];
        }
        if(storage[j] > largest){
            largest = storage[j];
        }
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    int num_array[] = {1, -4, 54, -2, 22};
    int size = sizeof(num_array) / sizeof(num_array[0]);

    int smallest = INT_MIN;
    int largest = INT_MAX;

    for(int i = 0; i < size; i++){
        smallest = min(num_array[i], smallest);
        largest = max(num_array[i], largest);
    }
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    // Arrays and Pointers
    int array[5] = {1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    int *arr_ptr_one = &array[0]; // Method 1
    int *arr_ptr_two = array; // Method 2

    // Passing arrays to function using pointers
    // The array decays into pointer to its first element. However since the size is not passed along with the pointer.
    // We need to pass the array size separately.
    fun(array, size);
    
    // Passing arrays to function using reference
    // The function receives the entire array as a reference
    fun1(array);

    // Dynamic Memory Management
    int *point_var_one = new int; // Allocate memory for a single int 
    *point_var_one = 10;
    int *point_var_three = new int(10); // Allocates memory for a single int
    int *point_var_two = new int[10]; // Allocate memory for an array of 10 integers
    
    // Memory Deallocation
    delete point_var_one; // Deallocates memory for a single integer
    point_var_one = nullptr; // To avoid dangling pointer issue
    delete[] point_var_two; // Deallocates memory for the array of integers
    point_var_two = nullptr; // To avoid dangling pointer issue
    delete point_var_three; // Deallocates memory for a single integer
    point_var_three = nullptr; // To avoid dangling pointer issue

    // Array size
    // We need to store the size manually
    int arr_size = 10;
    int *nArray = new int[arr_size];
    for(int i = 0; i <= arr_size; i++){
        nArray[i] = i * 9;
    }
    fun(nArray, arr_size);
    delete[] nArray;
    nArray = nullptr;

    // Declaration and Initialization
    // nothrow: throws an error if memory allocation failed
    int *q = new(nothrow) int(10); 
    int *r = new(nothrow) int[10];

    int *s = new(nothrow) int;
    *s = 10;
    
    int *t = NULL;
    t = new(nothrow) int;

    if(!t){
        cout << "Memory Allocation Failed!" << endl;
        exit(0);
    }
    else {
        *t = 10;
        cout << "Memory Allocated Successfully!" << endl;
        delete t;
        t = nullptr;
    }

    // Request a block of memory of n size
    int memset;
    cout << "Enter memory size: ";
    cin >> memset;

    int *p = new(nothrow) int[memset];
    int *pp = new(nothrow) int(memset);

    return 0;
}