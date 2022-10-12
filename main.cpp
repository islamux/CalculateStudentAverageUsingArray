#include <iostream>
using namespace std;

// Reading
#include "read_student_degree_by_ref.h"

// Calculation
#include "sum_student_degrees.h"
#include "average_student_dgrees.h"


// Printing 
#include "print_student_dgree.h"


/*
    * Calculate 1 Student Average Using Array

        # Steps
            1- Read student degrees Procedural ==> void + call by ref  * (Array by dafault by ref)
                ReadStudentsDegree()
            2- Print what readed (Display only)
            3- Calculate sum of degrees
            4- Calculate Average

*/

int main(){
    
    // Array by default read by ref
    float degreesMain[3];
    
    // Reading by ref
    /* When you pass an arry parameter dont add [] */
    ReadStudentDegree(degreesMain); // parameter from main.cpps

    // Printing
    /* When you pass an arry parameter dont add [] */
    PrintStudentDegree(degreesMain);
    
    // Decoration
    PrintStarsUsingText("---------");
    
    // Calculation Sum of Degrees
    SumStudentDegreesf(degreesMain);

    // Calculate Student Average Degree
    AverageStudentDegrees(degreesMain);



    return 0;
}