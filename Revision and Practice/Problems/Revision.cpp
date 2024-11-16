#include <iostream>
#include <vector>
#include <array>
using namespace std;

// function to display and array and vector
void displayArr(int *array, int size){
    cout << "Displaying Array: " << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void displayVec(vector <int> &vec){
    cout << "Displaying Vector: " << endl;
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

// function to deploy an array or vector
int array_maker(){
    int size;
    cout << "Enter size: ";
    cin >> size;

    // Memory Allcoation
    int *arr = new(nothrow) int[size];
    if(!p){
        cout << "Memory Allocation Failed!" << endl;
        return nullptr;
    }
    // Operation
    int num;
    cout << "Enter a num: " << end;
    cin >> num;
    for(int i = 0; i < num; i++){
        arr[i] = i + (i + 1);
    }
    return arr;
}

// function to find an element in an array or vector
void element_finder(vector <int> &vec, int key){
    bool found = false;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == key){
            cout << "Element " << key << " found at index: "  << i << endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Element not found!" << endl;
    }
}

// function to find the largest in an array or vector
void LargestFinder(int *array, int size){
    int largest = array[0];
    for(int i = 0; i < size; i++){
        if(array[i] > largest){
            largest = array[i];
        }
    }
    cout << "Largest elemnt in the array: " << largest << endl;
} 

// function to find the smallest in an array or vector
void SmallestFinder(int *array, int size){
    int smallest = array[i];
    for(int i = 0; i < size; i++){
        if(array[i] < smallest){
            smallest = array[i];
        }
    }
    cout << "Smallest element in the array: " << smallest << endl;
}

// function to print the sum of the all elemnts in an array or vector
void summation(vector <int> &vec){
    int sum = 0;
    for(int i = vec.begin(); i < vec.end(); i++){
        sum  = sum + vec[i];
    }
    cout << "Sum of all the elements: " << sum << endl;
}

// function to find the product of all the elements in the array
void product(vector <int> &vec){
    long long product = 1;
    for(int i = vec.begin(), i < vec.end(); i++){
        product = product * i;
    }
    cout << "Product of all the elements:" << product << endl;
}  

// function to swap the max and min elements in an array or vector
void SwapMaxMin(int *array, int size){
    if(size == 0){
        cout << "Array is empty!" << endl;
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

// function to find the unique number in an array
void UniqueNumber(int *array, int size){
    bool isUnique;
    cout << "Unique Numbers: " << endl;
    for(int i = 0; i < size; i++){
        isUnique = false;
        for(int j = 0; j < size; j++){
            if(i != j && array[i] == array[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout << array[i] << ", ";
        }
    }
    cout << endl;
    
}

// function to get the intersection
void Intersection(int *array1, int size1, int *array2, int size2){
    cout << "Intersection of array: " << endl;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(array1[i] == array2[j]){
                cout << array1[i] << ", ";
                break;
            }
        }
    }
    cout << endl;
}

// function to reverse an array
void ReverseArray(int *array, int size){
    int left = 0;
    int right = size - 1;

    while(left < right){
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;

        left++;
        right--;
    }
}

// to display all the subarrays of an array
void SubArrays(int arr[], int size)[
    cout << "Subarrays: " << endl;
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            for(int k = i; k <= j; k++){
                couit << arr[k];
            }
            cout << endl;
        }
    }
]

int main()
{

    return 0;
}