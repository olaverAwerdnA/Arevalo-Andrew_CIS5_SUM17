/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 14, 2017, 2:00 PM
 * Purpose:  Present Value.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
float perc = 100.0f;
//Function Prototypes
float presentValue(int, float, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float inRate, totPerc;
    int fVal, yrs;
    
    //Ask user to input information 
    cout<<"What future value do you plan to have? $";cin>>fVal;
    cout<<"What is the annual interest rate (%)? ";cin>>inRate;
    cout<<"How many years do you plan to"<<endl;
    cout<<"let the money sit in the account? ";cin>>yrs;
    
    //Percentage
    totPerc = inRate/perc;
    
    //Output the present value
    cout<<"To earn $"<<fVal<<", you would need a present value ";
    cout<<"value of "<<presentValue(fVal, totPerc, yrs);
    
    //Exit stage right!
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                   Function to determine present value                      //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
float presentValue(int F, float r, int n) {
  //Denominator formula
  float denom = pow(1+r, n);
  
  //Present value formula
  float P = F/denom;
  
  return P;
  }

