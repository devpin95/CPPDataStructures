// Modified By: Devin Piner
// Filename: LinkedList.h
// Description: Interface of the LinkedList class
// Last Updated: February 20, 2017

#include <iostream>
#include <fstream>
#include <sstream>
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList line1, line2;

    string filename = "input.txt";
    ifstream infile;
    infile.open( filename );

    if ( infile ) {
        int counter = 0;
        char c;
        while ( !infile.eof() ) {
            string readstring;
            stringstream ss;

            getline( infile, readstring );

            //remove the endline character from the the string
            if ( readstring[ readstring.size() - 1 ] == '\r' ||readstring[ readstring.size() - 1 ] == '\n'  ) {
                readstring.pop_back();
            }

            //put the string into a stringstream
            ss << readstring;

            //extract each character from the stringstream
            while (ss >> c) {
                if (counter == 0) {
                    line1.insertAtBack(c);
                }
                else {
                    line2.insertAtBack(c);
                }
            }

            ++counter;
            ss.clear();
            readstring.clear();
        }

        cout << "LISTS" << endl;
        cout << "[A] "; line1.printVals();
        cout << endl;
        cout << "[B] "; line2.printVals();
        cout << endl << "[C] - empty list" << endl << endl;

        cout << "ASSIGNMENT C = A" << endl;
        LinkedList ops = line1;
        cout << "[A]"; line1.printVals();
        cout << endl;
        cout << "[C]"; ops.printVals();
        cout << endl << endl;

        cout << "UNION C = A + B" << endl;
        cout << "[A] "; line1.printVals(); cout << endl;
        cout << "[B] "; line2.printVals(); cout << endl;
        ops = line2 + line1;
        cout << "[C] "; ops.printVals();
        cout << endl << endl;

        cout << "DIFFERENCE C = A - B" << endl;
        cout << "[A] "; line1.printVals(); cout << endl;
        cout << "[B] "; line2.printVals(); cout << endl;
        ops = line1 - line2;
        cout << "[C] "; ops.printVals(); cout << endl << endl;


    } else {
        cout << "could not open file" << endl;
    }


    infile.close();

    return 0;
}