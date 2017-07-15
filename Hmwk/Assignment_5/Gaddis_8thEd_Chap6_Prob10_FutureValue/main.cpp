/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 14, 2017, 5:35 PM
 * Purpose:  Future Value.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
float perc = 100.0f;

//Function Prototypes
float futureValue(float, float, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float iRate, pVal, totPerc; //Interest rate, present value, and total percent
    int nMonths; //number of months
    
    //Ask user for inputs
    cout<<"Enter the present value of your account: $";cin>>pVal;
    cout<<"Enter the monthly interest rate (%): ";cin>>iRate;
    cout<<"Enter the number of months that should pass by: ";cin>>nMonths;
    
    //Calculate percent 
    totPerc = iRate/perc;
    
    //Output future value
    cout<<"The future value of your account is $"<<futureValue(pVal,totPerc,nMonths);
    //Exit stage right!
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                   Function to determine future value                       //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

float futureValue(float P, float i, int t) {
  float F = P*pow(1+i, t); //Future value formula
  
  return F;
}
