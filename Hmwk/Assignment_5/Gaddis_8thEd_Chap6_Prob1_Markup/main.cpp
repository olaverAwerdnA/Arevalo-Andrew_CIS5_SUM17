/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 10, 2017, 5:55 PM
 * Purpose:  Markup price of item.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float calculateRetail(int, float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int mrkPerc;
    float whlCst;
    
    //Ask user for product info
    cout<<"Enter the whole cost of an item: $";cin>>whlCst;
    cout<<"Enter the item's markup percentage: %";cin>>mrkPerc;
    
    //Output the transformed data
    cout<<setprecision(2)<<fixed;
    cout<<"The retail price of the item is $"<<calculateRetail(whlCst, mrkPerc);
 
    //Exit stage right!
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                    Function to find markup price                           //
//                                                                            //  
////////////////////////////////////////////////////////////////////////////////
float calculateRetail(int w, float m) {
    
    //Markup formula
    float cost = w*(m/100.0)+w;
    
    return cost;
}