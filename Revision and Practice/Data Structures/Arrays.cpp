#include <iostream>
using namespace std;

int main()
{
    /*
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
    */

    // Reverse an Array
    
    return 0;
}