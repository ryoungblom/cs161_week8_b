/*********************************************
 ** Program Filename: stdDev.cpp
 ** Author: reuben youngblom
 ** Date: November 16th 2016
 ** Description: cpp file for stdDev.  Contains the function for caclculating the Standard Deviation of student scores.  Takes in an array of pointers, and dereferenecs them to pull the variabel value and plug that into the formula.  I used the population standard deviation, and got the formula off the internet.  I followed the steps listed as:
 To calculate the standard deviation of those numbers:
 1. Work out the Mean (the simple average of the numbers)
 2. Then for each number: subtract the Mean and square the result
 3. Then work out the mean of those squared differences.
 4. Take the square root of that and we are done!
 
 which is why I broke the program down the way I did (oneHold, twoAverage, etc).
 
 ** Input: Function takes in array of pointers
 ** Output: Dereferences pointers and uses value for the standard deviation formula, and return the standard deviation
 ***********************************************/

#include "Student.cpp"

double stdDev (Student* studentArray[], int size);  //function prototype


double stdDev (Student* studentArray[], int size)  //function call
{
    double standardDeviation;  //creates variable that will ultimately hold the standard deviation
    double oneSum = 0;   //used for the first step in determining standard deviation... holds the sum of all scores
    double oneHold, oneAverage, twoSub, twoAverage;  //more variables that will come in handy later.  Essentially used to hold values for the standard deviation steps.
    
    for (int i = 0; i < size; i++)  //for loop, used to loop through the array and:
    {
        Student a = *studentArray[i];   //deference the pointers in the array, and:
        
        oneHold = oneSum += (a.getScore());   //add them together and collect the sum in oneHold
    }
    
    oneAverage = (oneHold / size);  //calculates the average of the scores
    
    for (int i = 0; i < size; i++)  //this is to take each score and subtract the mean and square the result, and add them together in preperation of taking that mean
    {
        Student a = *studentArray[i]; //another defererencing loop
        oneHold = twoSub += (((a.getScore()) - oneAverage) * ((a.getScore()) - oneAverage));  //but here, sets oneHold equal to subtracting the mean from each score, and adds the together into oneHold
    }
    
    twoAverage = (oneHold / size);  //takes the mean of this new average
    
    standardDeviation = sqrt (twoAverage);  //takes root of twoAverage
    
    //cout << standardDeviation << endl;   //this was used for testing, to make sure I had the right answer
    
    return standardDeviation;   //but the function actuall just kicks back the standard deviation
};