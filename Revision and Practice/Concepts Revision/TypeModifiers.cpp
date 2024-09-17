#include <iostream>
using namespace std;
int main()
{

    int a = 12;
    float b = 12.4F;
    double c = 34.56;
    char d = 'D';
    string e = "Hello";

    long int f = 45;
    long long g = 56;

    // Only positive numbers
    // The range increases 
    unsigned int h = 67; 
    unsigned long int i  = 67; 
    unsigned long long j  = 67; 

    cout << "Int: " << sizeof(a) << endl;
    cout << "Char: " << sizeof(d) << endl;
    cout << "Float: " << sizeof(b) << endl;
    cout << "Double: " << sizeof(c) << endl;
    cout << "String: " << sizeof(e) << endl; 

    cout << "long int: " << sizeof(f) << endl;
    cout << "long long: " << sizeof(g) << endl;
    cout << "unsigned int: " << sizeof(h) << endl;
    cout << "unsigned long int: " << sizeof(i) << endl;
    cout << "unsigned long long: " << sizeof(j) << endl;









    return 0;
}