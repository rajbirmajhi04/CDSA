#include <iostream>
#include <vector>
using namespace std;

int main()
{   

    int rows, columns;
    cout << "Enter rows: ";
    cin >> rows; 
    cout << "Enter columns: ";
    cin >> columns;

    int matrix_D[rows][columns] = {};

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
           cout << "Enter value for element (" << i << ", " << j << "): ";
           cin >> matrix_D[i][j];
        }
    }

    cout << "Matrix D" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << matrix_D[i][j] << " ";
        }
        cout << endl;
    }

    // Dynamic Array and VLA using vector of vector
    vector <vector <int>> vec1(rows, vector<int>(columns, 0));
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << "Enter value for element (" << i << ", " << j << "): ";
            cin >> vec1[i][j];
        }
    }

    cout << "Displaying Dynamic Array: " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << vec1[i][j] << " ";
        }
        cout << endl;
    }

    




    

    return 0;
}