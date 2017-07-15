/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 8, 2017, 8:55 PM
 * Purpose:  Distance traveled chart.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int hours, mph, speed, time=1;
    
    //Ask user for distance and time
    cout<<"What is the speed of the vehicle (miles)? ";cin>>mph;
    cout<<"How many hours has it traveled? ";cin>>hours;
    
    //Setup format
    cout<<"Hours\tDistance(miles)"<<endl;
    cout<<"________________________"<<endl;
    
    //Creating information for table
    for (time; time<=hours; time++) {
        for (mph; mph<=hours; mph++) {
        }
        speed+=mph;
        cout<<time<<"\t   "<<speed<<endl;
    }
   
    //Exit stage right!
    return 0;
}

