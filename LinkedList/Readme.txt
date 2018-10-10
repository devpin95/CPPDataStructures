*******************************************************
*  Name      :  Devin Piner
*  Student ID:  107543409
*  Class     :  CSC 2421           
*  HW#       :  4
*  Due Date  :  February 15, 2017
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program recreates a vector style data structure using
dynamically allocated arrays.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that tests functionality
   of the MyVector class

Name:  MyVector.h
   Contains the definition for the class MyVector.

Name: MyVector.cpp
   Defines and implements the MyVector class for implementing a vector-style
   data structure using dynamic arrays. This class provides similar vector
   routines push_back, pop_back, search, and operator[],
   as well as functions to return the size and if the vector
   is empty

   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on gcc 5.4 as well
   as gcc 4.8.2 (csegrid)


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip pinerHW4

   Now you should see a directory named homework with the files:
        main.cpp
        MyVector.h
        MyVector.cpp
        makefile
        Readme.txt
        analysis.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd pinerHW4

    Compile the program by:
    % make

3. Run the program by:
   % ./hw4

4. Delete the obj files, executables, and core dump by
   %./make clean
