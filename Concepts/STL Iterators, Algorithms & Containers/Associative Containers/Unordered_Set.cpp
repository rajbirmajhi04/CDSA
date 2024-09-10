#include <iostream>
#include <unordered_set>
using namespace std;

void duplicateFinder(int arr[], int n){
    unordered_set <int> intSet;
    unordered_set <int> duplicateSet;

    for(int i = 0; i < n; i++){
        if(intSet.find(arr[i]) == intSet.end()){
            intSet.insert(arr[i]);
        }
        else {
            duplicateSet.insert(arr[i]);
        }
    }

    cout << "Duplciate items are: ";
    unordered_set <int>::iterator it;
    for(it = duplicateSet.begin(); it != duplicateSet.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    /*
    * Implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized.
    * Generally provides a constant time complexity
    * Key can be stored in any order
    * 
    */

    unordered_set <int> num1;
    unordered_set <int> num2;

    num1.insert(30);
    num1.insert(10);
    num1.insert(20);
    num1.insert(40);
    num1.insert(50);
    num1.insert(60);

    num2.insert(45);
    num2.insert(22);
    num2.insert(56);
    num2.insert(100);
    num2.insert(11);
    num2.insert(100);

    cout << "Unoredred Set 1: " << endl;
    for(auto &n: num1){
        cout << n << " ";
    }
    cout << endl;

    cout << "Unoredred Set 2: " << endl;
    for(auto &n: num2){
        cout << n << " ";
    }
    cout << endl;

    int arr[] = { 1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5 };
    int n = sizeof(arr) / sizeof(int);

    duplicateFinder(arr, n);









    return 0;
}