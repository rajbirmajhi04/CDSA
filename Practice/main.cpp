#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include <vector>
#include <arrays>
using namespace std;

int main()
{
    /*
    ! Fast I/O:
    * Reccomended scanf/printf instead of cin/cout for fast input and output
    * However cin/cout can be made same speed as scanf/printf by including:
    * By default, C++ cin and cout are synchronized with C's scanf and printf, making them slower.  
    * Disabling the synchronization and untangling cin and cout can significantly speed up input and output.
    */

    // This will removes the sync and drastically improves the I/O 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "You entered: " << n << endl;

    /*
    ! Using getchar_unlocked() and putchar_unlocked():
    * These functions are non-thread-safe but are faster than cin and cout for character input and output.
    * They are generally used when handling large amounts of inputs and outputs.
    
    ! Using fread() and fwrite(): 
    * These are more faster 
    */


    return 0;
}