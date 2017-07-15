/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 8, 2017, 2:50 PM
 * Purpose:  Sum of Numbers.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    int num, sum;
    int i = 1;
    
    //Ask for user input
    cout<<"Enter any positive value integer: ";cin>>num;
    
    //For loop
    for (i; i<=num; i++) {
        sum+=i;
    }
    
    //Output the transformed data
    cout<<"The sum of values from 1 to "<<num<<" = "<<sum<<endl;
    
    //Exit stage right!
    return 0;
}

