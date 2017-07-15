/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 14, 2017, 11:50 AM
 * Purpose:  Coin toss.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void coinToss(int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variable and ask coin tossage
    int tosses;
    cout<<"How many times should the coin be tossed? ";cin>>tosses;
    
    //Format table
    cout<<"\tCoin Chart"<<endl;
    cout<<"# of Tosses\tHeads/Tails"<<endl;
    cout<<"_____________________________"<<endl;
    
    //Output results
    coinToss(tosses);
    
    //Exit stage right!
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//           function to determine if toss would be heads or tails            //  
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
void coinToss(int t) {
  //setting random number seeds
  srand(static_cast<unsigned int>(time(0)));
  
  //Loop to determine if trial is heads or tails
  for(int i=1; i<=t; i++) {
      char a = rand()%2+1;
  
        if(a==1) {
          cout<<i<<"\t            "<<"H"<<endl;
        }
        else {
          cout<<i<<"\t            "<<"T"<<endl;
        }
    }
  }

