#include <iostream>
#include <cassert>
using namespace std;

/*
* It is commonly used to perform runtime checks during the debugging phase of development. When an assertion fails (i.e., the condition evaluated is false), the program prints an error message to the standard error stream and typically terminates by calling abort().

* Debugging: Asserts are useful for catching logical errors during development.

* Enforcing Preconditions: You can use assert to enforce assumptions made in your code about the state of the program.

* Testing: In test environments, assertions can help verify that code behaves as expected.
*/
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    assert(num % 2 == 0);
    assert(num == 10 | num == 20);
    return 0;
}