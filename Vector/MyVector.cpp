// Author: Devin Piner
// Filename: MyVector.cpp
// Description: Implementation of the MyVector class
// Last Updated: February 10, 2017

#include "MyVector.h"

using namespace HW4;

MyVector::MyVector() { //DEFAULT CONSTRUCTOR
    //Make the default size 10 because it wasnt specified in the problem statement
    vec = new T[capacity];
}

MyVector::~MyVector() {
    delete [] vec;
    vec = nullptr;
    vsize = 0;
}

void MyVector::push_back( T value ) {

    if ( vsize == capacity ) {
        resize( );
    }

    vec[vsize] = value;
    ++vsize;
}

HW4::T MyVector::operator[]( int index ) {
    //default value to return in case of bound errors
    T value = -1;

    //check the bounds of the array
    if ( index >= 0 && index < vsize ) {
        value = vec[index];
    }

    return value;
}

void MyVector::pop_back( void ) {
    --vsize;
}

int MyVector::size( void ) {
    return vsize - 1;
}

bool MyVector::empty( void ) {
    return !vsize;
}

int MyVector::search(T Value) {
    int index = -1; //return -1 if not found

    //loop through the array checking for the value
    for ( auto i = 0; i < vsize; ++i ) {
        if ( vec[i] == Value ) {
            index = i; //index of the target value
            break; //get out for the for loop
        }
    }

    //return the index of the searched value
    return index;
}

void MyVector::resize( void ) {
    //create a temp array with double the capacity
    capacity *= 2;
    T* temp = new T[ capacity ];

    //loop through small array and copy the values into the big array
    for ( auto i = 0; i < vsize; ++i ) {
        temp[i] = vec[i];
    }

    //delete the old, small array
    //make vec point to the new array
    delete [] vec;
    vec = temp;

    //deal with the dangling pointer
    temp = nullptr;
}