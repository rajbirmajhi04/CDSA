#include <iostream>
using namespace std;

void decimal_binary(int decimal);
void binary_decimal(int binary);

void decimal_octal(int decimal);
void octal_decimal(int octal);

int main()
{
    decimal_binary(50);
    binary_decimal(110010);
    decimal_octal(50);
    octal_decimal(62);

    return 0;
}

void decimal_binary(int decimal){
    int remainder;
    int base = 1;

    if(decimal == 0){
        cout << "Binary: 0" << endl;
        return;
    }

    int binary = 0;
    while (decimal > 0)
    {
        remainder = (decimal % 2);
        decimal = (decimal / 2);
        binary = binary + (remainder * base);
        base = base * 10;
    }
    cout << "Binary: " << binary << endl;        
}

void binary_decimal(int binary){
    int remaidner;
    int base = 1;
    int decimal = 0;

    if(binary == 0){
        cout << "Decimal: 0" << endl;
        return;
    }

    while (binary > 0)
    {
        remaidner = (binary % 10);
        binary = binary / 10;
        decimal = decimal + (remaidner * base);
        base = base * 2;
    }
    cout << "Decimal: " << decimal << endl;
}

void decimal_octal(int decimal){
    int remainder;
    int base = 1;
    int octal = 0;

    if(decimal == 0){
        cout << "Octal: 0" << endl;
        return;
    }

    while (decimal > 0)
    {
        remainder = (decimal % 8);
        decimal = decimal / 8;
        octal = octal + (remainder * base);
        base = base * 10;    
    }
    cout << "Octal: " << octal << endl;
}

void octal_decimal(int octal){
    int remainder;
    int base = 1;
    int decimal = 0;

    if(octal == 0){
        cout << "Decimal: 0" << endl;
        return;
    }

    while (octal > 0)
    {
        remainder = (octal % 10);
        octal = octal / 10;
        decimal = decimal + (remainder * base);
        base = base * 8;
    }
    cout << "Decimal: " << decimal << endl;
}






























































































































































































































































































































































































































































