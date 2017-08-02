/*********************************************
 ** Program Filename: Student.hpp
 ** Author: reuben youngblom
 ** Date: November 16th 2016
 ** Description: header file for Student.  Defines vaariables (name and score) and has prototypes for functions and class members.
 ** Input: The class takes two arguments (string and double)
 ** Output: Initializes them to name and score and returns them
 ***********************************************/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class Student  //class definition

{
private:  //private members
    string name;  //variable to hold string argument
    double score;  //variable to hold score argument
    
public:
    Student (string, double);   //prototype for class members, takes two arguments
    string getName ();  //prototype for function to return name
    double getScore ();  //prototype for function to return score
};
