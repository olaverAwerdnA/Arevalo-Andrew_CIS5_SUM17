/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 14, 2017, 10:35 AM
 * Purpose:  Falling Distance.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float fallingDistance(float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initiate variables
    float time = 1.0;
    
    //Formatting table
    cout<<"     Falling Distance"<<endl;
    cout<<"Time(sec)\tDistance(m)"<<endl;
    cout<<"_________________________"<<endl;
    
    //Loop to showcase 10 seconds
    for(time; time<=10.0; time++) {
        cout<<time<<"    \t           "<<fallingDistance(time)<<endl;
  }
    
    //Exit stage right!
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                  Formula to find falling distance                          //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

float fallingDistance(float t) {
    //Declare variables
    float d;
    float g = 9.8;
    
    //Formula
    d = 0.5*g*t*t;
  
    return d;
}
