#include <iostream>
#include <cmath>
using namespace std;

void display(int *array, int size);
int CalculateSD(int data[], int size);
void ReverseArray(int *array, int size);
void SecondLargest(int *array, int size);
void rotateLeft(int *array, int size, int k);
void rotateRight(int *array, int size, int k);

int main()
{   
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(data)/sizeof(data[0]);
    cout << "Data Size: " << size << endl;
    
    cout << "Standard Deviation: ";
    CalculateSD(data, size);

    cout << "Original Array: " << endl;
    display(data, size);

    ReverseArray(data, size);
    
    cout << "Reversed Array: " << endl;
    display(data, size);

    SecondLargest(data, size);

    return 0;
}

void display(int *array, int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int CalculateSD(int data[], int size){
    int sum = 0.0, mean = 0.0, sd = 0.0;

    // Summation 
    for(int i = 0; i < size; i++){
        sum = sum + data[i];
    }

    // Mean
    mean = sum / size;

    // Substract mean from the array element
    for(int i = 0; i < size; i++){
        sd = sd + pow(data[i] - mean, 2);
    }
    
    // Square the SD and take average
    cout << endl;
    return sqrt(sd / size);
}

void ReverseArray(int *array, int size){
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;

        left++;
        right--;
    }
}

void SecondLargest(int *array, int size){
    if (size < 2){
        cout << "Array should have at least 2 elements!" << endl;
        exit(0);
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < size; i++){
        if(array[i] > first){
            second = first;
            first = array[i];
        }
        else if(array[i] > second && array[i] != first){
            second = array[i];
        }
    }

    if(second == INT_MIN){
        cout << "There is no second largest element!" << endl;
        exit(0);
    }

    cout << "Second Largest Element: " << second << endl;
}

void rotateLeft(int *array, int size, int k){
    int temp[n];

    // copy the elements of original array into temp array
    for(int i = 0; i < n; i++){
        temp[i] = array[i];
    }

    // calculate the starting index of the rotation
    int startIndex = k % n;

    // copy the elements from the temp array to the original array
    for(int i = 0; i < n; i++){
        array[i] = temp[(startIndex + i) % n];
    }
}

void rotateRight(int *array, int size, int k){
    int temp[n];

    // copy the elements of original array into temp array
    for(int i = 0; i < n; i++){
        temp[i] = array[i];
    }

    // calculate the starting index of the rotation
    int startIndex = n - (k % n);

    // copy the elements from the temp array to the original array
    for(int i = 0; i < n; i++){
        array[i] = temp[(startIndex + i) % n];
    }
}





























































