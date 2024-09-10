#include <iostream>
using namespace std;
void modify_data(int *data);
int main()
{
    /*
    * Implicit Type Conversion: Automatically done by the compiler
    * int -> float / double
    * float -> double
    * char -> int (ASCII)
    ! Data Loss occurs when converting from Higher data types to Lower data types
    */

    int num = 8;
    double num1 = num;

    cout << num << endl;
    cout << num1 << endl;
    
    /*
    * Explicit Type Conversion: Manually
    ? C++ named type casting
    ? C-Style type casting (cast notation)
    ? Function notation (old C++ type casting)

    ! C-style and function-style casting should be avoided in modern C++ code. 
    ! These casting methods are considered unsafe because they do not provide the type checking and constraints that C++'s named cast expressions do.
    ! This lack of safety can lead to hard-to-find bugs and undefined behavior in your programs. Instead, it is recommended to use C++ named casts which offer more specific and safer options for type conversion.
    */
    
    //* C-Style:
    int num3 = 26;
    float num4 = (float)num3;

    //* Function Notation
    int num5 = 67;
    double num6 = double(num5);

    /*
    ! static_cast: 
    * Used for standard type conversion.
    */

    int a = 10;
    double b = static_cast <double> (a);
    
    // class Base {};
    // class Derived : public Base {};
    // Base *bptr = new Derived();
    // Derived *dptr = static_cast <Derived*> (bptr);

    /*
    ! dynamic_cast:
    * Safely casts pointers or references to classes up and down the inheritance hierarchy, especially for polymorphic types (i.e., classes with virtual functions).
    * It's typically used in scenarios where a base class pointer needs to be converted to a derived class pointer.
    
    ? If the base class pointer doesn't point to an object of the derived class, dynamic_cast returns nullptr.
    ? works only with polymorphic classes (those that have at least one virtual function).
    */

    // class Base { virtual void func(){}};
    // class Derived : public Base {};
    // Base *bptr = new Derived();
    // Derived *dptr = dynamic_cast <Derived*> (bptr); // safe downcast

    /*
    ! const_cast: 
    * Adds or removes the const qualifier from a variable.
    * Removing const from a pointer or reference to modify the pointed-to object (use with caution).
    * One common scenario where we can use const_cast is when working with third-party libraries that have functions which take non-const pointers as arguments, but we need to pass in const data.
    */

    int x = 100;
    const int *ptr = &x;
    // use the const_cast to remove const qualifier and allow modification
    int *mutable_ptr = const_cast <int*> (ptr);
    // call the function
    modify_data(mutable_ptr);
    cout << "Modified Value: " << x << endl;

    /*
    ! reinterpret_cast:
    * Performs a low-level reinterpreting of the bit pattern of a variable. It allows for casting between completely unrelated types.
    * used to convert one pointer type to another pointer type or one reference type to another reference type.
    * Unlike static_cast, reinterpret_cast doesn't actually convert the data types but reinterprets one pointer type as another at compile time.
    */

    int d = 655;
    int *ptr_to_int = &d;
    char *ptr_to_char = reinterpret_cast <char*> (ptr_to_int);
    cout << "Dereferencing ptr_to_char: " << *ptr_to_char << endl;
    return 0;
}

void modify_data(int *data){
    *data *= 20;
}