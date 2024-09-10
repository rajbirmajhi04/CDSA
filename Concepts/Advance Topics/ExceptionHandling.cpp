#include <iostream>
using namespace std;

/*
! Types of Exception: 
* Synchronous: exceptions that happens when something goes wrong beacause of a mistake in the input data or when the program is not equiped to handle the current type of data its working with.

* Asynchronous: exceptions that are beyond the program's control such as disc faliure etc.

? try: represents a block of code that may thorw an exception placed insde the try block
? catch: represent a block of code that is executed when a particular exception is thrown from the try block
*/

int main()
{
    try {
        int numerator;
        int denominator;
        int result;

        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;

        if(denominator == 0){
            throw runtime_error("Division by zero is not allowed!");
        }
        else {
            result = (numerator / denominator);
            cout << "Answer: " << result << endl;
        }
    }
    catch (const exception & e) {
        cout << "Exception " << e.what() << endl;
    }

    try {
        throw 20;
    }
    catch (const char *ce) {
        cout << "Caught " << ce << endl;
    }
    catch (const int *ie) {
        cout << "Caught " << ie << endl;
    }
    catch (...) {
        cout << "Default Exception" << endl;
    }

    return 0;
}
