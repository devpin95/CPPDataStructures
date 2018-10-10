*******************************************************
*  Name      :  Devin Piner
*  Student ID:  107543409
*  Class     :  CSC 2421           
*  HW#       :  2
*  Due Date  :  Jan. 29, 2013
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

Read values from a file, validating them, and add them to
an ArrayBag object. Implement a union and difference operator
using operator+ and operator-. The union operator combines
2 bags and removes all duplicates. The difference operator
removes all values from one bag that are present in the other -
only the unique values in the first bag remain in the new bag


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls, reading
   the values from a file and using the validator class to validate
   the values. If the values are valid, the values are added to two
   ArrayBag objects, which are then made into a new union and difference
   ArrayBag

Name:  Validator.cpp
  Implementation of the Validator class. The member function validateSS()
  accepts a stringstream containing a single line from the setInput.txt file.
  Each value is extracted from the stringstream but is not used. Only the success
  of the extraction is tested. If any extraction fails, the input is invalid and
  the object returns false

Name: Validator.h
   Contains the prototypes for the Validator class

Name: ArrayBag.cpp
   Implements the ArrayBag class, an array-based data structure that
   holds values of type int. Provides functions for adding, removing, searching,
   and counting values. Union and difference operators are friend functions and
   are implemented in SetFunctions.cpp

Name: ArrayBag.h
   Contains the prototypes for the ArrayBag class

Name: SetFunction.cpp
   Contains the implementation of the union and difference operator functions


   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on g++ 5.4


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [1234HW1]

   Now you should see a directory named homework with the files:
        main.cpp
        matrix.h
        matrix.cpp
	matrix_functions.h
	matrix_functions.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [1234HW1] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[matrix]

4. Delete the obj files, executables, and core dump by
   %./make clean
