// Author: Devin Piner
// Filename: main.cpp
// Description: driver for the ArrayBag class and Setfunctions operators
// Last Updated: January 29, 2017

#include <iostream>
#include <fstream>
#include <sstream>
#include "Validate.h"
#include "ArrayBag.h"

using namespace std;

int main() {

    ArrayBag a, b, c;
    int counter = 0; //keep track of which loop we are on so we know which bad to insert the ints
    bool inputIsValid = false;

    string filename = "setInput.txt";
    ifstream infile;
    infile.open( filename );

    if ( infile ) {
        //The file has successfully opened
        //cout << "Opened file" << endl;

        //step through the file one line at a time
        //insert each line into a stringstream and pass to the validator
        //if the validator returns true, the values are all integers and can be copied into
        //the bag
        while ( !infile.eof() ) {
            //algorithm for validating input referenced from provided validateInput.cpp file
            //continues in Validate.cpp validateSS()
            Validate v;
            stringstream ss;
            string readstring;

            //get the first line of the file and insert it into the stringstream
            getline( infile, readstring );

            //if the last character of the string is a carriage return
            //remove it because it's annoying and no one likes it
            if ( readstring[readstring.length() - 1] == '\r' ) {
                readstring.erase( readstring.length() - 1 );
            }

            //insert the string for testing
            ss << readstring;

            //cout << readstring << endl;

            //test the line
            if (v.validateSS(ss) ) {
                //the line is valid, so clear the stringstream
                //and reinsert the line so that we can insert the
                //integers into the bag
                inputIsValid = true;
                ss.clear();
                ss << readstring;

                int num;
                while ( !ss.eof() ) {
                    ss >> num;
                    if ( counter == 0 ) {
                        a.add( num );
                    } else {
                        b.add( num );
                    }
                }

            } else {
                //input is invalid, exit program
                cout << "Invalid input. Exiting program" << endl;
                inputIsValid = false;
            }

            ++counter; //move to the next line of the file
        }

    } else {
        cout << "Could not open file" << endl;
    }

    //if we get here an inputIsValid is true, we can continue with the union
    //and difference operations
    cout << "a ----------------" << endl;
    a.printItems();
    cout << endl << "b ----------------" << endl;
    b.printItems();

    cout << endl << endl;

    //Do the union and difference operations
    c = a + b;
    cout << endl << "UNION a + b ----------------" << endl;
    c.printItems();

    //Do the union and difference operations
    c = a - b;
    cout << endl << "DIFFERENCE a - b ----------------" << endl;
    c.printItems();

    cout << endl << endl;


    infile.close();

    return 0;
}
