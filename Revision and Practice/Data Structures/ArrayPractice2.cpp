#include <iostream>
#include <cmath>
using namespace std;

void display(int *array, int size);
int CalculateSD(int data[], int size);
void ReverseArray(int *array, int size);
void RotateArray(int *array, int size, int k);

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





























































