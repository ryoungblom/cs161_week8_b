/*********************************************
 ** Program Filename: Student.cpp
 ** Author: reuben youngblom
 ** Date: November 16th 2016
 ** Description: Program for Student file.  takes student class and initializes variables with name and score, and then has functions to return them both.
 ** Input: The class takes string and double inputs.
 ** Output: there are class functions to return the name and score
 ***********************************************/

#include "Student.hpp"

Student::Student (string nx, double sx)  //takes two arguments: string and double
{
    name = nx;  //initializes the string to name
    score = sx;  //and the double to score
}

string Student::getName ()  //returns name
{
    return name;
}

double Student::getScore ()  //returns score (double)
{
    return score;
}
