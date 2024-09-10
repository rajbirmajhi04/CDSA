#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1){ 
        return false;
    }
    for(int i = 2; (i * i) <= n; i++){
        if(n % i == 0){
             return false; 
        }
    }
    return true;
}

bool isSumTwoPrime(int num){

    /*
    ? Logic: Check whether the number half and its complement is prime or not 
    */

    for(int i = 2; i <= num/2; i++){
        if(isPrime(i) && isPrime(num - i)){
            cout << num << " = " << i << " + " << (num - i) << endl;
            return true;
        }
    }
    return false;
}

void primeSumChecker(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isSumTwoPrime(num))
    {
        cout << num << " can be expressed as the sum of two prime number!" << endl;
    }
    else {
        cout << num << " canot be expressed as the sum of two prime numbers!" << endl;
    }
    
}

int main()
{
    primeSumChecker();
    return 0;
}