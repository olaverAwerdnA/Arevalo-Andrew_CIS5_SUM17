/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 8, 2017, 4:10 PM
 * Purpose:  Calculating calories burned.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip> 
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float burned = 3.6; //Number of calories burned

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int time = 5;
    float cals;
    
    //Creating table
    cout<<setprecision(2)<<fixed;
    cout<<"Time(min)\tCals. burned"<<endl;
    cout<<"__________________________"<<endl;
    
    //Looping calories burned
    for (time; time<=30; time+=5) {
        cals = time*burned;
        cout<<time<<setw(13)<<"\t"<<cals<<endl;
    }
    
    //Exit stage right!
    return 0;
}

