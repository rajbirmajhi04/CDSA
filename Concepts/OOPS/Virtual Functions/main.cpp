#include <iostream>
#include <vector>
using namespace std;

/*
* virtual function is also a member function that is declared within a base class and is re-defined (overriden) by a derived class.

* virtual function ensure that the corrct functon is called for an object, regardless of the type of reference (or pointer) used for the function call
* they are mainly used to achieve runtime polymorphism
* function are declared with a virtual keyword in base class
* resolving of a function call is done at runtime
*/

/*
! Rules:
* virtual functions cannot be static
* a virtual function can be a friend function of another class
* virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism
* the prototype of virtual functions should be the same in the base as well as the derived class
* they are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used
* a class may have a virtual destructor but it cannot have a virtual constructor
*/

// class Base {
//     public:
//         virtual void print(){
//             cout << "Print base class" << endl;
//         }
//         void show(){
//             cout << "Show base class" << endl;
//         }
// };

// class Derived: public base {
//     public:
//         void print() {
//             cout << "Print derived class" << endl;
//         }
//         void show() {
//             cout << "Show derived class" << endl;
//         }
// };

// class A {
//     public:
//         virtual void fun() { cout << "A :: fun() called" << endl;}
// };

// class B: public A {
//     public:
//         void fun() override { cout << "B :: fun() called" << endl; }
// };

// class C: public B {
//     public:
//         void fun() override { cout << "C :: fun() called" << endl; }
// };

//! Never call a virtual function from a constructor or destructor
//! use override keyword to avoid mistakes

class Employee {
    public:
        string fname;
        string lname;
        Employee(string f_name, string l_name): fname(f_name), lname(l_name){}
        string getFullName() { return fname + " " + lname; }
        virtual void print_wage() { cout << "The emploee's wage structure is not declared yet" << endl; }
        virtual ~Employee(){}
};

class HourlyEmployee: public Employee {
    private:
    public:
        double hourly_wage;
        HourlyEmployee(string f_name, string l_name, double wage_per_hour): Employee(fname, lname), hourly_wage(wage_per_hour){} 
        void print_wage() { cout << "The hourly wage of " << getFullName() << " is " << hourly_wage << endl; }
};

class RegualrEmployee: public Employee {
    public:
        double monthly_wage;
        RegualrEmployee(string fname, string lname, double wage_per_month): Employee(fname, lname), monthly_wage(wage_per_month){}
        void print_wage() { cout << "The monthly wage of " << getFullName() << " is " << monthly_wage << endl; }
};



int main()
{
    // Base *bptr;
    // Derived *d;
    // bptr = &d;

    // bptr->print();
    // bptr->show();
    
    // C c;
    // B *b;
    // b = &c;
    // b->fun();

    vector <Employee*> employees { 
        new HourlyEmployee("John", "Doe", 13.5), 
        new RegualrEmployee("Emil", "Smith", 3000.65)
    };
    for(Employee* emp: employees){
        emp->print_wage();
    }
    
    return 0;
}