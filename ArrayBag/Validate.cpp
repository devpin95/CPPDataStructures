// Author: Devin Piner
// Filename: Validate.cpp
// Description: Implementation of the Validate class
// Last Updated: January 29, 2017

#include "Validate.h"

Validate::Validate( ) {} //Default Constructor

bool Validate::validateSS(std::stringstream &ss) {
    bool valid = true;
    int dummy; //hold the value of the data to test if it succeeded

    while ( !ss.eof() && ( ss.peek() != '\r' || ss.peek() != '\n' ) ) {

        ss >> dummy;
        if ( ss.fail() ) {
            ss.clear();
            valid = false;
            break;
        }
    }

    //std::cout << "In VALIDATOR" << std::endl;

    return valid;
}
