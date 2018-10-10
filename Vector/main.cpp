// Author: Devin Piner
// Filename: MyVector.cpp
// Description: driver of the MyVector class
// Last Updated: February 10, 2017

#include <iostream>
#include "MyVector.h"

using namespace std;

int main() {
    HW4::MyVector vector;

    //test empty() on the vector that should be empty
    if ( vector.empty() ) {
        cout << "Empty Vector" << endl;
    } else {
        cout << "Not empty" << endl;
    }

    //put 25 items into the vector, testing the dynamic array and push_back functions
    for ( int i = 0; i <= 25; ++i ) {
        vector.push_back(i);
    }

    //test empty(). the vector should not be empty
    if ( vector.empty() ) {
        cout << "Empty Vector" << endl;
    } else {
        cout << "Not empty" << endl;
    }

    //test operator[], should print 25-0 in reverse order
    for ( int i = vector.size(); i >= 0; --i ) {
        cout << vector[i] << endl;
    }

    //search for 5, which should be at index 5
    if ( vector.search( 5 ) == -1 ) {
        cout << "5 not found" << endl;
    } else {
        cout << "5 at [" << vector.search( 5 ) << "]" << endl;
    }

    //test pop_back, remove all items except 1
    for ( int i = vector.size(); i >= 1; --i ) {
        vector.pop_back();
    }

    //search for 5 again which should have just been removed
    if ( vector.search( 5 ) == -1 ) {
        cout << "5 not found" << endl;
    } else {
        cout << "5 at [" << vector.search( 5 ) << "]" << endl;
    }

    //test empty. should return false because there is still 1 item left
    if ( vector.empty() ) {
        cout << "Empty Vector" << endl;
    } else {
        cout << "Not empty" << endl;
    }

    //remove the last item, should now be empty
    vector.pop_back();

    //test empty again, should return true
    if ( vector.empty() ) {
        cout << "Empty Vector" << endl;
    } else {
        cout << "Not empty" << endl;
    }

    return 0;
}