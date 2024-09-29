#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void gcd(int n1, int n2){

    try {
        if (n1 < 0 || n2 < 0){
            throw invalid_argument("Both the numbers should be positive!");
        }
        // vectors to store the divisors of n1 and n2
        vector <int> n1_divisors;
        vector <int> n2_divisors;

        // loop to find the divisors of n1
        for(int i = 1; i <= sqrt(n1); i++){
            if(n1 % i == 0){
                n1_divisors.push_back(i);
                if(i != (n1 / i)){
                    n1_divisors.push_back(n1/i);
                }
            }    
        }

        // loop to find the divisors of n2
        for(int i = 1; i <= sqrt(n2); i++){
            if(n2 % i == 0){
                n2_divisors.push_back(i);
                if(i != (n2/i)){
                    n2_divisors.push_back(n2/i);
                }
            }
        }

        // vector to store the commmon divisors 
        vector <int> CD;
        int i = 0, j = 0;

        // loop to find the commomn divisors 
        while (i < n1_divisors.size() && j < n2_divisors.size())
        {
            if (n1_divisors[i] == n2_divisors[j])
            {
                CD.push_back(n1_divisors[i]);
                ++i;
                ++j;
            }
            else if (n1_divisors[i] < n2_divisors[j]){
                ++i;
            }
            else {
                ++j;
            }
        }
        // simple condition to find the max divisors
        if(!CD.empty()){
            cout << "GCD: " << *max_element(CD.begin(), CD.end());
        } 
        else {
            throw runtime_error("GCD not found!");
        }
    }

    catch(const invalid_argument &e){
        cout << "Invalid Argument Error: " << e.what() << endl;
    }
    catch(const runtime_error &e){
        cout << "Runtime Error: " << e.what() << endl;
    }
    catch(...){
        cout << "An unknown error occured!" << endl;
    }
}

void lcm(int n1, int n2){

    try{

        if(n1 < 0 || n2 < 0){
            throw invalid_argument("Both the numbers should be positive!");
        }

        vector <int> n1_multiples;
        vector <int> n2_multiples;
        
        for(int i = 1; i < sqrt(n1); i++){
            int result = (n1 * i);
            n1_multiples.push_back(result);
        }

        for(int i = 1; i < sqrt(n2); i++){
            int result = (n2 * i);
            n2_multiples.push_back(result);
        }
        
        vector <int> CM;
        int i = 0, j = 0;

        while (i < n1_multiples.size() && j < n2_multiples.size())
        {
            if(n1_multiples[i] == n2_multiples[j]){
                CM.push_back(n1_multiples[i]);
                ++i;
                ++j;
            }
            else if(n1_multiples[i] < n1_multiples[j]){
                ++i;
            }
            else {
                ++j;
            }
        }

        if(!CM.empty()){
            cout << "LCM: " << *min_element(CM.begin(), CM.end());
        }
        else {
            throw runtime_error("LCM not found!");
        }
    }

    catch(const invalid_argument &e){
        cout << "Invalid Argument: " << e.what() << endl;
    }
    catch(const runtime_error &e){
        cout << "Runtime Error: " << e.what() << endl;
    }
    catch(...){
        cout << "Unknown error occured!" << endl;
    }
}

void PalindromeChecker(int num){
    string num_str = to_string(num);
    int left = 0;
    int right = (num_str.length() - 1);

    bool isPlaindrome = true;
    while(left < right){
        if(num_str[left] != num_str[right]){
            isPlaindrome = false;
            break;
        }
        ++ left;
        -- right;
    }

    if(isPlaindrome){
        cout << "Yes! palindrome" << endl;
    }
    else {
        cout << "No! palindrome" << endl;
    }
}

void power(int base, int exponent){
    unsigned long long result= 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
    cout << "Power: " << result << endl;
}

void Right_To_Left(int n){
    int storage;
    while (n > 0)
    {
        storage = n % 10;
        cout << storage << " ";
        n = n / 10;
    } 
    cout << endl;
}

void Left_To_Right(int n){
    string num_str = to_string(n);
    for(char digitChar: num_str){
        cout << digitChar << " ";
    }
    cout << endl;
}

void ReverseNumber(int n){
    int reversed = 0;
    cout << "Actual: " << n << endl;
    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    cout << "Reversed: " << reversed << endl;  
}

void ReverseString(string str){
    string reversed = str;
    int left = 0;
    int right = str.length() - 1;

    cout << "Actual String: " << reversed << endl;
    while (left < right)
    {
        char temp = reversed[left];
        reversed[left] = reversed[right];
        reversed[right] = temp;
        ++left;
        --right;
    }
    cout << "Reversed String: " << reversed << endl;
}

void ArmstrongChecker(int num){
    int remainder = 0;
    int digits = 0;
    int result = 0;

    int temp = num;
    while(temp != 0){
        temp = temp / 10;
        digits++;
    }

    while (num != 0)
    {
        remainder = remainder + (num % 10);
        result = result + pow(remainder, digits);
        num = num / 10;
    }

    if(result == num) {
        cout << "Yes! the given number is an armstrong number."; 
    }
    else {
        cout << "No! the given number is not an armstrong number.";
    }
    cout << endl;
}

void ArmstrongChecker(int num1, int num2){

    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    string CN;
    for(int i = num1; i <= num2; i++){
        CN = CN + to_string(i);
    }

    unsigned long long FN = stoll(CN);
    unsigned long long result = 0;
    unsigned long long digits = 0;
    unsigned long long temp = FN;

    while (temp != 0)
    {
        temp = temp / 10;
        digits++;
    }

    while (temp != 0)
    {
        int remainder = temp % 10;
        result = result + pow(remainder, digits);
        temp = temp / 10;
    }

    if(result == temp){
        cout << "Yes! the given number is an armstrong number." << endl;
    }
    else{
        cout << "No! the given number is not an armstrong number." << endl;
    }  
}

int main()
{
    Right_To_Left(4254);
    Left_To_Right(3214);
    ReverseNumber(7654);
    ReverseString("Hello World");
    ArmstrongChecker(14353);
    ArmstrongChecker(1, 5);
    return 0;
}