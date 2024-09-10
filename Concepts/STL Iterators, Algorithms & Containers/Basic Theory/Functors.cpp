#include <iostream>
using namespace std;

/*
* Functor (function object) is an object that can be treated as though it is a function or function pointer. 

* Functors are created by overloading the 'operator()' in a class, making an instance of that class callable like a regular function
*/

class Multiply {
    // this is the state the functor will keep
    int factor; 

    public:
        // constructor to initialize the factor
        Multiply(int f): factor(f){}

        // overload the () operator
        int operator()(int x) const {
            return x * factor;
        }
};

class Greet {
    public:
        void operator()(){
            cout << "Hello World" << endl;
        }
};

class Add {
    public:
        int operator()(int a, int b){
            return (a + b);
        }
};

class Add_To_Sum {
    private:
        int initial_sum;

    public:
        Add_To_Sum(int sum){
            initial_sum = sum;
        }

        int operator()(int num){
            return (initial_sum + num);
        }
};

int main()
{
    Multiply timesFive(5);
    int result = timesFive(10);
    cout << "Result: " << result << endl;

    // create a object of the class
    Greet greet;
    // call the object as a function
    greet();

    Add add;
    int sum = add(56, 77);
    cout << sum << endl;

    Add_To_Sum ADD = Add_To_Sum(100);
    int final_Sum = ADD(200);

    cout << final_Sum << endl;
    return 0;
}