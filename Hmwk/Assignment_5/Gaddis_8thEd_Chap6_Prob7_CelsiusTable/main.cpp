/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 14, 2017, 11:20 AM
 * Purpose:  Celsius Temperature Table.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float celsius(float = 0.0);

//Execution begins here
int main(int argc, char** argv) {
    
    //Print out table
    cout<<"   Conversion Table"<<endl;
    cout<<"Fahrenheit\tCelsius"<<endl;
    cout<<"_______________________"<<endl;
    celsius();
    
    
    
    //Exit stage right!
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                           Conversion of F to C                             //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
float celsius(float F) {
    //Loop to print out table
    for(F; F<=20; F++) {
      float C = (5/9.0)*(F-32);
      cout<<"    "<<F<<"\t       "<<C<<endl;
    }
}

