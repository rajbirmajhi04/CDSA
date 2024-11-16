#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    // a matrix with 3 rows and 4 columns which can hold a total 3 * 4 = 12 elements 
    int matrix_A[3][4] = 
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 8, 1, 2}
    };

    // dynamic multidimensional array
    vector <vector <char>> matrix_C = 
    {
            {'a', 'b', 'c', 'd'},
            {'e', 'f', 'g', 'h'},
            {'i', 'j', 'k', 'l'},
            {'m', 'n', 'o', 'p'}
    };

    // using ranged based loop
    cout << "Displaying Char Array: " << endl;
    for(const auto &row: matrix_C){
        for(const auto &element: row){
            cout << element << " ";
        }
        cout << endl;
    }

    cout << "Displaying Integer Array: " << endl;
    for(const auto &row: matrix_A){
        for(const auto &element: row){
            cout << element << " ";
        }
        cout << endl;
    }
    
    // 
    return 0;
}