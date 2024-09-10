#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to iterate a number from right to left and left to right
void Right_To_Left(int n);
void Left_To_Right(int n);

// Function to reverse a number and string
void reverseNumber(int n);
void reverseString(string str);

// Armstrong Number
void checkArmstrongNumber(int n);
void checkArmstrongNumberInterval(int n1, int n2);

// Function to display the factors of a number
void factors(int n);

// Main Function
int main()
{
    Right_To_Left(34253);
    Left_To_Right(34253);
    reverseNumber(87686);
    reverseString("Hello World");
    checkArmstrongNumber(3712342);
    checkArmstrongNumberInterval(1, 5);
    factors(7800);
    return 0;
}

// Function Definitions
void Right_To_Left(int n)
{   
    /*
    * Logic: Modulo to extract and divison to remove
    */

    int remainder;
    cout << "Actual Number: " << n << endl;
    cout << "Right to Left: ";
    while (n > 0)
    {
        remainder = n % 10; // Extarct the last digit
        cout << remainder << " ";
        n = n / 10; // Remove the last digit
    }
    cout << endl;
}

void Left_To_Right(int n) 
{
    /*
    *Logic: Type cast to string then use loop
    */

    cout << "Actual Number: " << n << endl;
    string num_string = to_string(n);
    cout << "Left to Right: ";
    for(char digitChar: num_string){
        int digits = digitChar - '0';
        cout << digits << " ";
    }
}

void reverseNumber(int n)
{
    /*
    * Logic: Modulo to extract the last digit and Division to remove the extartced digit and store them
    * Same as iterating Right to Left
    */

    cout << "Actual Number: " << n << endl;
    int reversed = 0;
    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    cout << "Reversed Number: " << reversed << endl;
    
}

void reverseString(string str)
{   
    cout << "Actual String: " << str << endl;
    string reversed = str;
    int left = 0;
    int right = reversed.length() - 1;

    while (left < right)
    {
        char temp = reversed[left];
        reversed[left] = reversed[right];
        reversed[right] = temp;

        ++ left;
        --right;
    }
    cout << "Reversed String: " << reversed << endl;
}

void checkArmstrongNumber(int n)
{   
    int originalNumber = n;
    int result = 0;
    int remainder;
    int digits = 0;

    int temp = n;
    while (temp != 0)
    {
        temp = temp / 10;
        digits++;
    }
    
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result = result + pow(remainder, digits);
        originalNumber = originalNumber / 10;
    }

    if (result == n)
    {
        cout << n << " is an Armstrong number!" << endl;
    }
    else {
        cout << n << " is not an Armstrong number!" << endl;
    }
    
}

void checkArmstrongNumberInterval(int n1, int n2)
{
    string combinedNumber;

    if(n1 > n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
        for(int i = n1; i <= n2; i++){
            combinedNumber = combinedNumber + to_string(i);
        }

        unsigned long long finalNumber = stoll(combinedNumber);
        cout << "Number: " << combinedNumber << endl;

        int digits = 0;
        unsigned long long result = 0;
        unsigned long long temp = finalNumber;

        while (temp != 0)
        {
            temp = temp / 10;
            digits++;
        }

        while (finalNumber != 0)
        {
            int remainder = finalNumber % 10;
            result = result + pow(remainder, digits);
            finalNumber = finalNumber / 10;
        }

        if(result == finalNumber){
            cout << result << " is an Armstrong number!" << endl;
        }
        else {
            cout << result << " is not an Armstrong number!" << endl;
        }
}

void factors(int n)
{
    int temp = n;
    cout << "Factors of " << temp << " are: " << endl;
    for(int i = 1; i <= temp; i++){
        if(temp % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}
















