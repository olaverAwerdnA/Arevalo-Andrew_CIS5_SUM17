/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 8, 2017, 4:35 PM
 * Purpose:  Membership fee increase.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Membership cost
const int charge = 2500;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float perc = 0.04;
    float rate;
    int year = 2018;
    
    //Format table 
    cout<<"Year\tMembership fee($)"<<endl;
    cout<<"_______________________"<<endl;
    
    //Loop to find cost of membership each year
    for (year; year<=2023; year++) {
        for (perc; perc<=0.28; perc+=0.04) {
            rate = (perc*charge)+charge;
            cout<<year++<<"\t   "<<rate<<endl;
        }
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

