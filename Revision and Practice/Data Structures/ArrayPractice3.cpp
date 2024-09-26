#include <iostream>
#include <climits>
using namespace std;

void display(int *array, int size);
void ReverseArray(int *array, int size);
void SecondLargest(int *array, int size);
void RotateArray(int *array, int size);

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Original Array: " << endl;
    display(array, size);

    ReverseArray(array, size);

    cout << "Reversed Array: " << endl;
    display(array, size);

    SecondLargest(array, size);

    return 0;
}

void display(int *array, int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << ", ";
    }
    cout << endl;
}

void ReverseArray(int *array, int size){
    int left = 0;
    int right = size  - 1;

    while(left < right){
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;

        left ++;
        right --;
    }
    cout << endl;
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























































































