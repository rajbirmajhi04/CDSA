#include <iostream>
using namespace std;

/*
! Function Template: 
* A function template in C++ allows you to write generic functions that can work with any data type. This is particularly useful when you want the same function to operate on different types of data without rewriting the entire function for each type.
*/

template <typename T>
T add(T num1, T num2, T num3) {
    return (num1 + num2 + num3);
}

template <typename T1, typename T2, typename T3>
auto add(T1 a, T2 b, T3 c) -> decltype(a + b + c) {
    return (a + b + c);
}

int main()
{
    int result1;
    double result2;
    float result3;

    result1 = add <int> (2, 3, 4);
    cout << result1 << endl;

    result2 = add <double> (2.2, 3.4, 5.667);
    cout << result2 << endl;

    result3 = add <float> (76.5f, 3.43f, 5.667f);
    cout << result3 << endl;

    int x = 5;
    double y = 5.6;
    float z = 3.4f;

    cout << "int + double + float: " << add(x, y, z) << endl;

    return 0;
}