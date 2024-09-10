#include <iostream>
#include <memory>
using namespace std;

class Rectangle {
    int length;
    int breadth;

    public:
        Rectangle(int l, int b): length(l), breadth(b){}
        int area(){
            return length * breadth;
        }
};

int main()
{
    /*
    * Smart pointers in C++ are an abstraction that helps manage dynamic memory automatically. They ensure that memory is properly allocated and deallocated, reducing the risk of memory leaks and dangling pointers. Smart pointers are part of the C++ Standard Library, specifically the <memory> header.

    ! Types of Smart Pointers:
    ? unique_ptr: 
    * represents exclusive ownership of a dynamically allocated object
    * cannot be copied, only moved
    * when goes out of the scope, it automatically deletes the resource it owns
    * use when a single entity owns the resource and there is no need for shared ownership
    
    ? shared_ptr:
    * Represents shared ownership of a dynamically allocated object. 
    * Multiple shared_ptr instances can share ownership of the same resource.
    * Uses reference counting to manage the resource
    * The resource is deallocated when the last shared pointer owning it is destroyed or reset
    * Use when multiple parts of a program needed to share access to a dynamically allocated resource
    
    ? weak_ptr:
    * Provides a non-owning reference to an object managed by shared_ptr
    * Does not affect the reference count of the shared_ptr
    * Can be used to break circular references in a graph of shared_ptr instances
    * Use when you want to access an object managed by shared_ptr without extending its lifetime
    */

    // smart pointers
    unique_ptr <Rectangle> p1(new Rectangle(10, 5));
    unique_ptr <Rectangle> p2 = move(p1);

    shared_ptr <Rectangle> p3(new Rectangle(23, 12));
    shared_ptr <Rectangle> p4 = p3;

    shared_ptr <Rectangle> p6(new Rectangle(55, 67));
    weak_ptr <Rectangle> p5(p6);

    auto_ptr <Rectangle> p7(new Rectangle(90, 45));




    return 0;
}