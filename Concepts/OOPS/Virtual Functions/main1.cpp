#include <iostream>
using namespace std;

/*
* Sometimes implementation of all functions cannot be provided in a base class because we don't know the implementation. Such class is called an abstract class

* Pure Virtual Function or Abstract Function: Must override that function in the derived class otherwise the derived class will also become an abstract class. A pure virtual function is declared (0) in the declaratiion.

* Use of Pure Virtual Functions: If a function doesn't have any use in the base class but the function must be implemented by all its derived classes
*/

class Shape {
    protected:
        double dimensions;
    
    public:
        void getDimensions(){
            cout << "Enter dimensions: ";
            cin >> dimensions;
        }

        virtual float calculateArea() override = 0;
};

class Triangle: public Shape {
    public:
        double calculateArea() {
            return (1/2) * dimensions * dimensions;
        }
};

class Square: public Shape {
    public:
        double calculateArea() {
            return dimensions * dimensions;
        }
};

class Circle: public Shape {
    public:
        double calculateArea() {
            return 3.141 * dimensions * dimensions;
        }
};

int main()
{
    return 0;
}