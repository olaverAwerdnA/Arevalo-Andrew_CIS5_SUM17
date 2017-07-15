/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 15, 2017, 1:10 AM
 * Purpose:  Stock Profit.
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float stockProfit(float,float,float,float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float nShares,sPrice,sComm,pPrice,pComm;
    
    //Have user input stock information
    cout<<"Enter the number of shares: ";cin>>nShares;
    cout<<"Enter the sale price per share: $";cin>>sPrice;
    cout<<"Enter the sale commission paid: $";cin>>sComm;
    cout<<"Enter the purchase price per share: $";cin>>pPrice;
    cout<<"Enter the purchase commission paid: $";cin>>pComm;
    
    //Output positive or negative yield
    cout<<"Stock yield: "<<stockProfit(nShares,sPrice,sComm,pPrice,pComm);
    
    //Exit stage right!
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//      Function to determine if stock yield is positive or negative          //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

float stockProfit(float NS,float SP,float SC,float PP,float PC) {
    float Prof = ((NS*SP)-SC)-((NS*PP)+PC);
    return Prof;
}


