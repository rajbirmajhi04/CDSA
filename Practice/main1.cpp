#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <array>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

unsigned long long factorial(int n){
    unsigned long long result = 1;
    for(unsigned long long i = 1;  i <= n; ++i){
        result *= i;
    }
    return result;
}

void multiplicationTable(int n, int range){
    cout << "Multiplication table for: " << n << endl;
    for(int i = 1; i <= range; i++){
        cout << n << " * " << i << " = " << (n * i) << endl;
    }
    cout << endl;
}

void evenOddFinder(int n){
    if(n%2 == 0){
        cout << "Even number" << endl;
    }
    else {
        cout << "Odd number" << endl;
    }
}

void largestNumberFinder(){
    double num1, num2, num3;
    cout << "Enter three numbers: " << endl;
    cin >> num1 >> num2 >> num3;

    if(num1>=num2 && num1>=num3){
        cout << "Largest Num 1" << endl;

    } else if(num2>=num1 && num2>=num3){
        cout << "Largest Num 2" << endl;

    }else{
        cout << "Largest Num 3" << endl;
    }
    
}

void QuadraticRootFinder(){
    float a, b, c, x1, x2, discriminant, realpart, imaginarypart;
    cout << "Enter coefficient of a, b and c: " << endl;
    cin >> a >> b >> c;
    discriminant = (b * b) - (4 * a * c);

    if(discriminant > 0){
        x1 = (-b + sqrt(discriminant) / (2*a));
        x2 = (-b - sqrt(discriminant) / (2*a));

        cout << "Root are real and different!" << endl;
        cout << "(" << x1 << ", " << x2 << ")" << endl;
    }
    else if (discriminant == 0){
        x1 = -b/(2*a);
        x2 = -b/(2*a);

        cout << "Roots are real and same!" << endl;
        cout << "(" << x1 << ", " << x2 << ")" << endl;
    }
    else {
        realpart = -b/(2*a);
        imaginarypart = sqrt(-discriminant)/(2*a);

        cout << "Roots are complex and different!" << endl;
        cout << realpart << " + " << imaginarypart << "i" << endl; 
        cout << realpart << " - " << imaginarypart << "i" << endl; 
    }
}

void vowelChecker(char c){
    vector <char> charArray = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    bool isVowel = false;

    for(int i = 0; i < charArray.size(); i++){
        if(charArray[i] == c){
            isVowel = true;
            break;
        }
    }
    if(isVowel){
        cout << "Vowel" << endl;
    }
    else {
        cout << "Consonant" << endl;
    }
}

void NaturalNumberSummation(){
    unsigned long long num; 
    unsigned long long sum = 0;
    cout << "Enter a positive number: " << endl;
    cin >> num;

    for(int i = 0; i <= num; i++){
        sum  += i;
    }
    cout << "Sum: " << sum << endl;

    unsigned long long summation = (num * (num + 1)) / 2;
    cout << "Sumamtion: " << summation << endl;
}

void LeapYearChecker(){
    int year;
    cout << "Enter year: " << endl;
    cin >> year;

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout << "Leap year!" << endl;
    }
    else{
        cout << "Not a leap eyar!" << endl;
    }

}

int FibonacciSeries(int n){
    if(n <= 1){ return n; }
    return FibonacciSeries(n-1) + FibonacciSeries(n-2);
}

void gcd(int n1, int n2){
    
    vector <int> n1_divisors;
    vector <int> n2_divisors;

    // Finding the divisors and storing them into vectors
    for(int i = 1; i <= sqrt(n1); i++){
        if(n1 % i == 0){
            n1_divisors.push_back(i);
            // This checks if i and n1/i are different 
            // To avoid adding the square root twice in the case of a perfect square
            if(i != (n1 / i)){
                n1_divisors.push_back(n1/i);
            }
        }
    }

    for(int i = 1; i <= sqrt(n2); i++){
        if(n2 % i == 0){
            n2_divisors.push_back(i);
            // This checks if i and n2/i are different 
            // To avoid adding the square root twice in the case of a perfect square
            if(i != (n2 / i)){
                n2_divisors.push_back(n2/i);
            }
        }
    }
    
    vector <int> commonDivisors;
    int i = 0, j = 0;

    while (i < n1_divisors.size() && j < n2_divisors.size())
    {
        if(n1_divisors[i] == n2_divisors[j]){
            commonDivisors.push_back(n1_divisors[i]);
            ++i;
            ++j;
        }
        else if(n1_divisors[i] < n2_divisors[j]){
            ++i;
        }
        else {
            ++j;
        }
    }

    // Display the common divisors
    cout << "Common divisors of " << n1 << " and " << n2 << " are: ";
    for(int &div: commonDivisors){
        cout << div << " ";
    }
    cout << endl;

    // Finding GCD
    if(!commonDivisors.empty()){
        int gcd = *max_element(commonDivisors.begin(), commonDivisors.end());
        cout << "GCD of: " << n1 << " and " << n2 << " is: " << gcd << endl;
    }
    else {
        cout << "There are no common divisors other than 1" << endl;
    }   

    cout << endl;
}

void lcm(int n1, int n2){

    vector <int> n1_multiples;
    vector <int> n2_multiples;
    
    for(int i = 1; i <= (n1*2); i++){
        int result = (n1 * i);
        n1_multiples.push_back(result);
    }

    for(int i = 1; i <= (n2*2); i++){
        int result = (n2 * i);
        n2_multiples.push_back(result);
    }

    vector <int> commonMultiples;
    int i = 0, j = 0;

    while (i < n1_multiples.size() && j < n2_multiples.size())
    {
        if(n1_multiples[i] == n2_multiples[j]){
            commonMultiples.push_back(n1_multiples[i]);
            ++i;
            ++j;
        }
        else if(n1_multiples[i] < n2_multiples[j]) {
            ++i;
        }
        else {
            ++j;
        }
    }

    cout << "Common multipes of " << n1 << " and " << n2 << " are: ";
    for(int &multiples: commonMultiples){
        cout << multiples << " ";
    }
    cout << endl;

    if(!commonMultiples.empty()){
        int lcm = *min_element(commonMultiples.begin(), commonMultiples.end());
        cout << "LCM of: " << n1 << " and " << n2 << " are: " << lcm << endl;
    }  
    else {
        cout << "No common multiples found in the range" << endl;
    }

    cout << endl;
}

void power(int base, int exponent){
    unsigned long long result = 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }

    cout << "Power: " << result << endl;
}

bool PalindromChecker(int num){
    string num_str = to_string(num);
    int left = 0;
    int right = (num_str.length() - 1);

    while (left < right)
    {
        if(num_str[left] != num_str[right]){
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

void checkPrime(int num){
    if(num <= 1){
        cout << "Not Prime!" << endl;
    }
    else {
        for(int i = 2; (i * i) <= num; i++){
            if(num % i == 0) {
                cout << "Not Prime!" << endl;
                break;
            }
            else {
                cout << "Is Prime!" << endl;
                break;
            }
        }
    }
}

void checkPrimeInterval(int low, int high){
    cout << "Prime numbers between " << low << " and " << high << " are: " << endl;

    if (low > high)
    {
        int temp = low;
        low = high;
        high = temp;
    }

    if(low < 2)
    {
        low = 2;
    }

    while (low < high)
    {
        bool isPrime = true;
        for(int i = 2; i <= sqrt(low); i++)
        {
            if(low % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            cout << low << " is prime!" << endl;
        }
        ++low;
    }
    
}

int main()
{   
    return 0;
}