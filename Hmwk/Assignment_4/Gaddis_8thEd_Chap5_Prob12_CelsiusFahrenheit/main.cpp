/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 8, 2017, 9:40 PM
 * Purpose:  Celsius to Fahrenheit chart.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Celsius to start at 0
    int celsius = 0;
    
    //Setup for conversion table
    cout<<"Celsius\t Fahrenheit"<<endl;
    cout<<"_____________________"<<endl;
    
    //For loop for conversion values
    for (celsius; celsius<=20; celsius++) {
        float fahren = (9/5.0)*celsius+32;
        cout<<celsius<<"\t  "<<fahren<<endl;
    }
  
    
    //Exit stage right!
    return 0;
}

