/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 14, 2017, 5:35 PM
 * Purpose:  Future Value.
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
float perc = 100.0f;

//Function Prototypes
float getPopulation(int, float, float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int popSize, yrs;
    float bRate, dRate;
    
    //Ask the user to input info
    cout<<"Give the starting size of the population.";cin>>popSize;
    while(popSize<2) {
      cout<<"Input Validation"<<endl;
      cout<<"Give a number greater than 1.";cin>>popSize;
    }
    cout<<"Give the annual birth rate (%): ";cin>>bRate;
    while(bRate<0) {
      cout<<"Input Validation"<<endl;
      cout<<"Give a postive number.";cin>>bRate;
    }
    cout<<"Give the annual death rate (%): ";cin>>dRate;
    while(dRate<0) {
      cout<<"Input Validation"<<endl;
      cout<<"Give a positive number.";cin>>dRate;
    }
    
    cout<<"Give the number of years to pass by: ";cin>>yrs;
    while(yrs<1) {
      cout<<"Input Validation"<<endl;
      cout<<"Give a number greater than 0.";cin>>yrs;
    }
    
    //Convert whole number into decimal
    float birth = bRate/perc;
    float death = dRate/perc;
    
    //Output the new population size
    cout<<"The new population size "<<endl;
    cout<<"in "<<yrs<<" years  = "<<yrs*getPopulation(popSize,birth,death);
    
    
    //Exit stage right!
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                   Function to determine new population                     //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

float getPopulation(int P, float B, float D) {
  float N = P + B*P - D*P; //New population formula
  
  return N;
}


