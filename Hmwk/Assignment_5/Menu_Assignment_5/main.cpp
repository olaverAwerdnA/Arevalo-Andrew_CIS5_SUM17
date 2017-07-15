/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 15, 2017, 2:40 AM
 * Purpose:  Menu.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
float perc = 100.0f;

//Function Prototypes
float calculateRetail(int, float);
float fallingDistance(float);
float kineticEnergy(int, int);
float celsius(float = 0.0);
void coinToss(int);
float presentValue(int, float, int);
float futureValue(float, float, int);
float getPopulation(int, float, float);
float stockProfit(float,float,float,float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char num;
    
    //Do loop for menu
    do {
      cout<<setw(2)<<endl;
      cout<<"To get the answer to the assignment, pick the corresponding number."<<endl;
      cout<<setw(3)<<endl;
      cout<<"\tAnswer Menu for assignments"<<endl;
      cout<<"___________________________________________"<<endl;
      cout<<"1. Markup"<<endl;
      cout<<"2. Falling Distance"<<endl;
      cout<<"3. Kinetic Energy"<<endl;
      cout<<"4. Celsius Temperature Table"<<endl;
      cout<<"5. Coin Toss"<<endl;
      cout<<"6. Present Value"<<endl;
      cout<<"7. Future Value"<<endl;
      cout<<"8. Population"<<endl;
      cout<<"9. Stock Profit"<<endl;
      
      //User input
      cout<<setw(2)<<endl;
      cout<<"Enter your choice: ";cin>>num;
      
      //Map inputs to outputs or process the data
      switch (num) {
            
            case '1': {
              //Declare variables
              int mrkPerc;
              float whlCst;
              
              //Ask user for product info
              cout<<"Enter the whole cost of an item: $";cin>>whlCst;
              cout<<"Enter the item's markup percentage: %";cin>>mrkPerc;
              
              //Output the transformed data
              cout<<setprecision(2)<<fixed;
              cout<<"The retail price of the item is $"<<calculateRetail(whlCst, mrkPerc);
              break;
            }
            
            case '2': {
              //Declare and initiate variables
              float time = 1.0;
              
              //Formatting table
              cout<<"     Falling Distance"<<endl;
              cout<<"Time(sec)\tDistance(m)"<<endl;
              cout<<"_________________________"<<endl;
              
              //Loop to showcase 10 seconds
              for(time; time<=10.0; time++) {
                  cout<<time<<"    \t           "<<fallingDistance(time)<<endl;
            }
              break;
            }
            
            case '3': {
              //Declare variables
              int mass, speed;
              
              //Ask for mass and velocity
              cout<<"Enter an object's mass(kg): ";cin>>mass;
              cout<<"Enter the object's velocity(m/s): ";cin>>speed;
              
              //Print out results
              cout<<"The kinetic energy of the object is "<<kineticEnergy(mass, speed);
              cout<<" joules."<<endl;
              
              //Exit stage right!
              break;
            }
            
            case '4': {
              //Print out table
              cout<<"   Conversion Table"<<endl;
              cout<<"Fahrenheit\tCelsius"<<endl;
              cout<<"_______________________"<<endl;
              celsius();
              break;
            }
            
            case '5': {
              //Declare variable and ask coin tossage
              int tosses;
              cout<<"How many times should the coin be tossed? ";cin>>tosses;
              
              //Format table
              cout<<"\tCoin Chart"<<endl;
              cout<<"# of Tosses\tHeads/Tails"<<endl;
              cout<<"_____________________________"<<endl;
              
              //Output results
              coinToss(tosses);
              break;
            }
            
            case '6': {
              //Declare variables
              float inRate, totPerc;
              int fVal, yrs;
              
              //Ask user to input information 
              cout<<"What future value do you plan to have? $";cin>>fVal;
              cout<<"What is the annual interest rate (%)? ";cin>>inRate;
              cout<<"How many years do you plan to"<<endl;
              cout<<"let the money sit in the account? ";cin>>yrs;
              
              //Percentage
              totPerc = inRate/perc;
              
              //Output the present value
              cout<<"To earn $"<<fVal<<", you would need a present value ";
              cout<<"value of "<<presentValue(fVal, totPerc, yrs);
              break;
            }
            
            case '7': {
              //Declare variables
              float iRate, pVal, totPerc; //Interest rate, present value, and total percent
              int nMonths; //number of months
              
              //Ask user for inputs
              cout<<"Enter the present value of your account: $";cin>>pVal;
              cout<<"Enter the monthly interest rate (%): ";cin>>iRate;
              cout<<"Enter the number of months that should pass by: ";cin>>nMonths;
              
              //Calculate percent 
              totPerc = iRate/perc;
              
              //Output future value
              cout<<"The future value of your account is $"<<futureValue(pVal,totPerc,nMonths);
              break;
            }
            
            case '8': {
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
               break;
            }
            
            case '9': {
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
               break;
            }
      }
      
    } while(num>'0'||num<'9');
    
    
    //Exit stage right!
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////


float calculateRetail(int w, float m) {
    
    //Markup formula
    float cost = w*(m/100.0)+w;
    
    return cost;
}

float fallingDistance(float t) {
    //Declare variables
    float d;
    float g = 9.8;
    
    //Formula
    d = 0.5*g*t*t;
  
    return d;
}

float kineticEnergy(int m, int v) {
    //Kinetic energy formula
    float KE = 0.5*m*v*v;
    
    return KE;
}

float celsius(float F) {
    //Loop to print out table
    for(F; F<=20; F++) {
      float C = (5/9.0)*(F-32);
      cout<<"    "<<F<<"\t       "<<C<<endl;
    }
}

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
  
  float presentValue(int F, float r, int n) {
  //Denominator formula
  float denom = pow(1+r, n);
  
  //Present value formula
  float P = F/denom;
  
  return P;
  }
  
  float futureValue(float P, float i, int t) {
  float F = P*pow(1+i, t); //Future value formula
  
  return F;
}

float getPopulation(int P, float B, float D) {
  float N = P + B*P - D*P; //New population formula
  
  return N;
}

float stockProfit(float NS,float SP,float SC,float PP,float PC) {
    float Prof = ((NS*SP)-SC)-((NS*PP)+PC);
    return Prof;
}

