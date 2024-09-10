#include <iostream>
using namespace std;
int main()
{
    /*
    * Lambda expression allows us to define anonymous function objects (functors) which can either be used inline or passed as an argument

    * They are mroe convenient because we don't need to overload the () operator in a separate class or struct

    * Lambdas are useful for situations where you need a simple function for a short time, such as in algorithms or when passing a function as an argument

    * [] is called lambda introducer: which denotes the start of the lambda expression
    * () is called parameter list: which is similar to the () operator of a normal function
    */

    /*
    * [ capture_clause ] (parameters) -> return_type {};

    * []: Capture nothing
    * [&]: Capture all variables by reference
    * [=]: Capture all variables by value
    * [x]: Capture the variable x by value
    * [&x]: Capture the variable x by reference
    */

    // Simple Lambda
    auto greet = []() {
        cout << "Hello World" << endl;
    };

    greet();

    // Lambda with parameters
    auto add = [](int a, int b){
        return (a + b);
    };

    int result = add(5, 5);
    cout << "Result: " << result << endl;

    // Lambda capturing variables
    int x = 10;
    int y = 20;

    // x is captured by value and y is captured by reference
    auto multiply = [x, &y](int factor){
        y = y * factor;
        return (x * y);
    };

    int res = multiply(3);
    cout << "Result: " << res << endl;
    cout << "Y: " << y << endl;

    // Example
    int p;
    int q;
    int r;
    int s;

    cout << "Enter numer 1: ";
    cin >> p;
    cout << "Enter numer 2: ";
    cin >> q;
    cout << "Enter numer 3: ";
    cin >> r;
    cout << "Enter numer 4: ";
    cin >> s;

    auto multiplyNumbers = [p, q, &r, &s](int t){
        return (p * q * r * s * t);
    };

    int RESULT = multiplyNumbers(55);
    cout << "Result: " << RESULT << endl;
    
    return 0;
}