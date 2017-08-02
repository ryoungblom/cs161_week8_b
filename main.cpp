
 
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class Student

{
private:
    string name;
    double score;
    
public:
    Student (string, double);
    string getName ();
    double getScore ();
};


Student::Student (string nx, double sx)
{
    name = nx;
    score = sx;
}

string Student::getName ()
{
    return name;
}

double Student::getScore ()
{
    return score;
}


double stdDev (Student* studentArray[], int size);


int main()
{

    Student student1 ("harry", 55);
    Student student2 ("ron", 66);
    Student student3 ("hermione", 77);
    Student student4 ("neville", 88);
    Student student5 ("draco", 99);
    
    
    cout << student5.getName() << endl;
    
    Student* testStudent [5] { &student1, &student2, &student3, &student4, &student5};
    
    stdDev (testStudent, 5);
    
    return 0;

}



double stdDev (Student* studentArray[], int size)
{
    double standardDeviation;
    double oneSum = 0;
    double oneHold, oneAverage, twoSub, twoAverage;
    
    for (int i = 0; i < size; i++)
    {
        Student a = *studentArray[i];
        
        oneHold = oneSum += (a.getScore());
    }
    
    oneAverage = (oneHold / size);  //calculates the average of the scores
    
    for (int i = 0; i < size; i++)  //this is to take each score and subtract the mean and square the result, and add them together in preperation of taking that mean
    {
        Student a = *studentArray[i];
        oneHold = twoSub += (((a.getScore()) - oneAverage) * ((a.getScore()) - oneAverage));
    }
    
    twoAverage = (oneHold / size);  //takes the mean of this new average
    
    standardDeviation = sqrt (twoAverage);
    
    //cout << standardDeviation << endl;
    
    return standardDeviation;
};
