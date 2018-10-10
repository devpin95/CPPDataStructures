// Author: Devin Piner
// Filename: SetFunctions.cpp
// Description: implement the union and difference operators to perform on ArrayBag objects
// Last Updated: January 29, 2017

#include "ArrayBag.h"

ArrayBag operator+( const ArrayBag& a, const ArrayBag& b ) {
    //Perform a union operation on the arraybags a and b
    //Combine the values of both bags, removing all duplicates and leaving
    //only 1 copy of each value
    //c = a + b
    //a = lefthand side
    //b = righthand side
    //return c after performing operation

    ArrayBag c;
    int i; //loop iterator

    for ( i = 0; i < a.getCurrentSize(); ++i ) { //O(n), getCurrentSize() is unknown
        c.add( a.items[i] ); //O(1), add() is constant
    }

    for ( i = 0; i < b.getCurrentSize(); ++i ) { //O(n), getCurrentSize() is unknown
        c.add( b.items[i] ); //O(1), add() is constant
    }

    //clean the array of duplicates
    for ( i = 0; i < c.getCurrentSize(); ++i ) { //O(n), getCurrentSize() is unknown
        int freq = c.getFrequencyOf(c.items[i]); //O(n), getFrequencyOf iterates through whole array
        int item = c.items[i]; //O(1), random access is constant for arrays

        //std::cout << item << " - " << freq << std::endl;

        if (freq > 1) { // O(1), constant
            //std::cout << "Removing ";
            for (int j = 0; j < freq - 1; ++j) { //O(n), freq is unknown
                //std::cout << item << " ";
                c.remove( item ); //O(n), remove uses getindexOf, which iterates through the array, the remove is constant time
            }
            //std::cout << std::endl;
        }
    }

    return c;

    //function effieciency:
    //*Removing O() for readability
    //(n * 1) + (n * 1) + n( (n + 1 + 1) * [ n * n ] )
    // = n + n + n*(n * n)
    // = n + n + n^3
    // = n^3
    //
    //operator+ has O(n^3)
    //
    //Without analysing the complexity of the ArrayBag functions
    //operater+ has only O(n^2)

}

ArrayBag operator-( const ArrayBag& a, const ArrayBag& b ) {
    //Perform a differnece operation on the arraybags a and b
    //remove all values in bag b from bag a, leaving all unique
    //in bag a, removing duplicates
    //c = a + b
    //a = lefthand side
    //b = righthand side
    //return c after performing operation

    //set c to the left hand side of the operator
    ArrayBag c = a;

    //loop through the right hand side of the operator
    for ( int i = 0; i < b.getCurrentSize(); ++i ) { //O(n)
        //get the item from b and its frequency in c
        int item = b.items[i]; //O(1) constant, random access is constant for arrays
        int freq = c.getFrequencyOf( item ); //O(n), getFrequencyOf iterates through the entire array once

        //if there is 1 or more of item in c
        if ( freq >= 1 ) { //O(1)

            //remove all of them
            for (int j = 0; j < freq; ++j) { //O(n), freq is unknown beforehand
                c.remove(item); //O(n), remove uses getIndexOf, which iterates through the array, the remove is constant time
            }
        }
    }

    return c;

    //function effieciency:
    //*Removing O() for readability
    //n * ( n + 1 + 1 ) + n * n
    // = n * n + n * n
    // = n * n + n^2
    // = n * n^2
    // = n^3
    //
    //operator- has O(n^3)
    //
    //Without analysing the complexity of the ArrayBag functions
    //operater- has only O(n^2)
}
