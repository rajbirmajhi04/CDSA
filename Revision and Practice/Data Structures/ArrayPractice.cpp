#include <iostream>
using namespace std;

void display_fun(int *array, int size){
    for(int i = 1; i <= size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int *array_maker(int &size){
    cout << "Size: ";
    cin >> size;

    int *p = new(nothrow) int[size];
    if(!p){
        cout << "Memory allocation failed!" << endl;
        return nullptr;
    }
    for(int i = 1; i <= size; i++){
        p[i] = i * 9;
    }
    cout << "Array: " << endl;
    return p;
}

void element_finder(int *array, int size, int element){
    bool found = false;
    for(int i = 0; i < size - 1; i++){
        if(array[i] == element){
            cout << "Element " << element << " found at index: [ " << i  << " ]" << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Element not found!" << endl;
    }
}

void LargestFinder(int *array, int size){
    int largest = array[0];
    for(int i = 0; i < size - 1; i++){
        if(array[i] > largest){
            largest = array[i];
        }
    }
    cout << "Largest Element: " << largest << endl; 
}

void SmallestFinder(int *array, int size){
    int smallest = array[0];
    for(int i = 0; i < size - 1; i++){
        if(array[i] < smallest){
            smallest = array[i];
        }
    }
    cout << "Smallest Element: " << smallest << endl; 
}

void summation(int *array, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + array[i];
    }
    cout << "Sum: " << sum << endl; 
}
void product(int *array, int size){
    long long product = 1;
    for(int i = 0; i < size; i++){
        product = product * array[i];
    }
    cout << "Product: " << product << endl;
}

void SwapMaxMin(int *array, int size){
    if(size == 0){
        cout << "Empty!" << endl;
        return;
    }

    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 1; i <= size; i++){
        if(array[i] < array[minIndex]){
            minIndex = i;
        }

        if(array[i] > array[maxIndex]){
            maxIndex = i;
        }
    }

    int temp = array[minIndex];
    array[minIndex] = array[maxIndex];
    array[maxIndex] = temp;
}

int main()
{
    // int size;
    // int *array = array_maker(size);

    // if(array != nullptr){
    //     display_fun(array, size);

    //     int element;
    //     cout << "Enter element to find: ";  
    //     cin >> element;
    //     element_finder(array, size, element);

    //     LargestFinder(array, size);
    //     SmallestFinder(array, size);

    //     summation(array, size);
    //     product(array, size);

    //     delete[] array;
    //     array = nullptr;
    // }

    int arr[] = {324, 23, 867, 21, 9, 213, 54, 22};
    int s = sizeof(arr) / sizeof(arr[0]);

    // cout << "Original Array: " << endl;
    // display_fun(arr, s);

    // SwapMaxMin(arr, s);

    // cout << "Modified Array: " << endl;
    // display_fun(arr, s); 

    

}