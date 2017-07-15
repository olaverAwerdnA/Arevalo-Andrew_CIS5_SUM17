/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 14, 2017, 11:15 AM
 * Purpose:  Kinetic Energy.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float kineticEnergy(int, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int mass, speed;
    
    //Ask for mass and velocity
    cout<<"Enter an object's mass(kg): ";cin>>mass;
    cout<<"Enter the object's velocity(m/s): ";cin>>speed;
    
    //Print out results
    cout<<"The kinetic energy of the object is "<<kineticEnergy(mass, speed);
    cout<<" joules."<<endl;
    //Exit stage right!
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       Convert inputs into KE                               //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
float kineticEnergy(int m, int v) {
    //Kinetic energy formula
    float KE = 0.5*m*v*v;
    
    return KE;
}

