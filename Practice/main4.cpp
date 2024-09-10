#include <iostream>
#include <cmath>
using namespace std;

void BinaryToDecimal(long long binary){
    int lastDigit;
    int decimal = 0;
    int base = 0;

    cout << "Binary: " << binary << endl;
    while (binary != 0)
    {
        lastDigit = binary % 10;
        binary = binary / 10;
        decimal = decimal + lastDigit * pow(2, base);
        ++base;
    }
    cout << "Decimal: " << decimal << endl;
}

void DecimalToBinary(long long decimal){
    long long binary[64];
    int index = 0;

    cout << "Decimal: " << decimal;
    while (decimal > 0)
    {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }
    cout << endl;
    cout << "Binary: ";
    for(int i = index - 1; i >= 0; i--){
        cout << binary[i];
    }
    cout << endl;
    
}

void OcatlToDecimal(long long octal){

    int lastDigit;
    int decimal = 0;
    int base = 0;

    cout << "Octal: " << octal << endl;
    while (octal != 0)
    {
        lastDigit = octal % 10;
        octal = octal / 10;
        decimal = decimal + lastDigit * pow(8, base);
        ++base;
    }
    cout << "Decimal: " << decimal << endl;
}

void DecimalToOctal(long long decimal){
    long long octal[64];
    int index = 0;
    cout << "Decimal: " << decimal << endl;
    while (decimal != 0)
    {
        octal[index] = decimal % 8;
        decimal = decimal / 8;
        index++;
    }
    cout << "Octal: " << octal;
    for(int i = index - 1; i >= 0; i--){
        cout << octal[i];
    }
    cout << endl;
    
}

int main()
{
    BinaryToDecimal(110011);
    DecimalToBinary(110);
    OcatlToDecimal(2341);
    DecimalToOctal(56);
    return 0;
}