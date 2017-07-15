/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 2, 2017, 4:00 PM
 * Purpose:  Rise in ocean levels.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float rise = 1.5e-3f; //Rise of ocean in millimeters

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare and initialize variables: Beginning year and end year
    int begYear = 2017, endYear = 2042;
    
    //Set up table
    cout<<setprecision(5)<<fixed;
    cout<<"Year\tRise(mm)"<<endl;
    cout<<"_________________"<<endl;
    
    //Extra variables: Year and Ocean level
    int year;
    float ocLvl;
    
    //For Loop
    for (year=begYear; year<=endYear; year++) {
        ocLvl = year*rise;
        cout<<year<<"\t"<<ocLvl<<endl;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

