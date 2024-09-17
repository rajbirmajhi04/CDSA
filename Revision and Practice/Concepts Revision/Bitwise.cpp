#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 8;

    cout << (a & b) << endl; 
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (~a) << endl;
    cout << (~b) << endl;

    int x = 50;
    int leftShift = x << 2;
    int rightShift = x >> 2;
    
    cout << leftShift << endl;
    cout << rightShift << endl;

    return 0;
}