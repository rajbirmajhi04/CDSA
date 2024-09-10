#include <fstream>
#include <iostream>
using namespace std;

/*
! File Streams:
* ifstream: Input file strean class for reading from files
* iostream: Output file stream class for writing to files (Creates a new file if does not exists)
* fstream: File stream class for both reading and writing

! Modes:
* ios::in -> Open for reading
* ios::out -> Open for writing
* ios::app -> Append mode
* ios::ate -> Open a file for output and move the read/write control to the end of the file
* ios::binary -> Open a file in binary mode
* ios::truncate -> Discard all the content of a file

! Error Handling:
* is_open(): return true if opened successfully
* fail(): returns true if a file operation is failed
* eof(): returns true if the end of file is reached
* bad(): returns true if a reading or writing error occurs
* good(): returns true if none of the above errors have occured

! Advance:
* seek(): Move the get (read) pointer
* seekp: Move the put (write) pointer
* tellg(): Get the current read pointer position
* tellp(): Get the current write pointer position
*/

int main()
{
    //? Opening a file 
        // Writing
        ofstream outFile("example.txt", ios::app);
        // Reading:
        ifstream inFile("example.txt", ios::app);
        // Both read adn write
        fstream ioFile("example.txt", ios::in | ios::out);
    
    //? Error Handling
        if(!outFile){
            cout << "Error opening the file!" << endl;
        }

    //? Writing
        outFile << "Hello world this is c++" << endl;
        outFile << "C++ is a low level programming language" << endl;
        outFile << "It is focused for high performace and efficiency" << endl;
        outFile << "It supports Object Oriented Concept" << endl;

    //? Reading
        
        // Method 1: Read word by word
        string data;
        inFile >> data;

        // Method 2: Read till the end of the file
        string line;
        while(!inFile.eof()){
            getline(inFile, line);
            cout << line << endl;
        }

        // Method 3: Read entire lines or usign delimeters
        string Lines;
        while(getline(inFile, Lines)){
            cout << Lines << endl;
        }

    //? Closing file
        outFile.close();
        inFile.close();
        ioFile.close();


    //! Example
    string userInput;
    cout << "Enter some text: " << endl;
    getline(cin, userInput);

    fstream myFile("Demo.txt", ios::app);

    if(!myFile){
        cout << "Error opening file for read and write!" << endl;
        return 1;
    }
    else {
        myFile << userInput;
        cout << "Input saved!" << endl;
        cout << endl;
    }
    
    return 0;
}