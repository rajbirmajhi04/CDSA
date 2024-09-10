#include <iostream>
using namespace std;

/*
! Buffers():
? buffer is a memory space for temporarily storing data before processing, writing to a file, or sending it over a network.

? Buffers serve as intermediaries, facilitating seamless data transfer within your program and between external devices.

* Efficiency: Buffers help reduce the overhead of frequent I/O operations. Instead of reading or writing data one byte at a time (which can be slow), you can work with larger chunks of data stored in a buffer.

* Minimizing I/O calls: Buffers minimize the number of read and write operations, which are typically more time-consuming than working with data in memory.

* Data Consistency: Buffers ensure that data is read or written consistently, reducing the likelihood of errors and improving the reliability of your code.

* Optimizing Resources: Buffers allow your program to read or write data in larger blocks, making better use of system resources.
*/

int main()
{   
    // declare buffer size and a char buffer
    const int buffer_size = 1024;
    char *buffer = new char[buffer_size];

    cout << "Enter a line of text: " << endl;
    cin.getline(buffer, buffer_size);

    cout << "You entered: " << buffer;
    delete[] buffer;

    return 0;
}