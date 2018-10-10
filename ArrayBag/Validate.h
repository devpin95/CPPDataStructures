// Author: Devin Piner
// Filename: Validate.h
// Description: Interface for the Validate class
// Last Updated: January 29, 2017

#ifndef HW2_VALIDATE_H
#define HW2_VALIDATE_H

#include <sstream>
#include <iostream>

class Validate {
public:
    Validate();
    bool validateSS(std::stringstream &ss);
};


#endif //HW2_VALIDATE_H
