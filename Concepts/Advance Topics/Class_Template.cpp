#include <iostream>
using namespace std;

/*
! Class Template:
* A class template in C++ allows you to create a generic class that can work with any data type. This is useful when you want to define a class that can handle different types of data without duplicating code for each type.
*/

template <typename T1, typename T2>
class Pair {
    private:
        T1 first;
        T2 second;
    
    public:
        Pair(T1 f, T2 s): first(f), second(s){}

        T1 getFirst() const {
            return first;
        }

        T2 getSecond() const {
            return second;
        }

        void setFirst(T1 f) {
            first = f;
        }

        void setSecond(T2 s) {
            second = s;
        }
};


int main()
{
    Pair <int, double> p1(10, 4.5);
    Pair <int, float> p2(125, 6.77f);
    Pair <double, float> p3(10.67, 98.7f);
    Pair <string, char> p4("Hello", 'W');
    Pair <int, char> p5(45, 'W');
    Pair <int, char> p6(45, 'W');

    cout << "Pair 1: " << p1.getFirst() << ", " << p1.getSecond() << endl;
    cout << "Pair 2: " << p2.getFirst() << ", " << p2.getSecond() << endl;
    cout << "Pair 3: " << p3.getFirst() << ", " << p3.getSecond() << endl;
    cout << "Pair 4: " << p4.getFirst() << ", " << p4.getSecond() << endl;
    cout << "Pair 5: " << p5.getFirst() << ", " << p5.getSecond() << endl;
    cout << "Pair 6: " << p6.getFirst() << ", " << p6.getSecond() << endl;


    return 0;
}