/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 8, 2017, 12:05 PM
 * Purpose:  Random Number Generator Game Enhancement.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Setting up RNG
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int guess, rng;
    int tally = 0;
    //Initialize variables
    rng = rand()%100+1;
    
    //Do while loop to find number
    do {
        cout<<"Enter a number from 1-100: ";cin>>guess;
        if (guess>rng) {
          cout<<"The number is lower!"<<endl;
          tally++;
        }
        else if (guess<rng) {
          cout<<"The number is higher!"<<endl;
          tally++;
        }
          
        }    while (guess!=rng);
    
    //Output the transformed data
    tally++;
     cout<<"You guessed the number in "<<tally<<" attempt(s)!"<<endl;
    //Exit stage right!
    return 0;
}

