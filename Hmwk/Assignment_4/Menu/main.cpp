/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 9, 2017, 6:00 PM
 * Purpose:  Menu.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

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
      cout<<"1. Sum of Numbers"<<endl;
      cout<<"2. Ocean Levels"<<endl;
      cout<<"3. Calories Burned"<<endl;
      cout<<"4. Membership Fees Increase"<<endl;
      cout<<"5. Distance Traveled"<<endl;
      cout<<"6. Celsius to Fahrenheit Table"<<endl;
      cout<<"7. Budget Analysis"<<endl;
      cout<<"8. Random Number Guessing Game"<<endl;
      cout<<"9. Random Number Guessing Game Enhancement"<<endl;
      
      //User input
      cout<<setw(2)<<endl;
      cout<<"Enter your choice: ";cin>>num;
      
      //Map inputs to outputs or process the data
      switch (num) {
            
            case '1': {
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
              break;
            }
            
            case '2': {
              int begYear = 2017, endYear = 2042;
              const float rise = 1.5e-3f;
    
              //Set up table
              cout<<setprecision(5)<<fixed;
              cout<<"Year\tRise(mm)"<<endl;
              cout<<"_________________"<<endl;
              
              //Extra variables: Year and Ocean level
              int year;
              float ocLvl;
              
              //For Loop
              for (year=begYear; year<=endYear; year++) {
                  ocLvl = year*rise;
                  cout<<year<<"\t"<<ocLvl<<endl;
              }
              break;
            }
            
            case '3': {
              int time = 5;
              float cals;
              const float burned = 3.6;
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
              break;
            }
            
            case '4': {
              float perc = 0.04;
              float rate;
              int year = 2018;
              const int charge = 2500;
              
              //Format table 
              cout<<"Year\tMembership fee($)"<<endl;
              cout<<"_______________________"<<endl;
              
              //Loop to find cost of membership each year
              for (year; year<=2023; year++) {
                  for (perc; perc<=0.28; perc+=0.04) {
                      rate = (perc*charge)+charge;
                      cout<<year++<<"\t   "<<rate<<endl;
                  }
              }
              break;
            }
            
            case '5': {
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
              break;
            }
            
            case '6': {
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
              break;
            }
            
            case '7': {
              //Declare budget, expenses, and total
              float budget, exp, total = 0;
              
              //Ask user to enter budget and instruct termination of program
              cout<<"Enter the amount of cash you have budgeted for the month: $";
              cin>>budget;
              cout<<setw(2)<<endl;
              cout<<"Enter any expenses you have made this month. Enter -1";
              cout<<" to finish."<<endl;
              cout<<setw(2)<<endl;
              cout<<"Expense: $";cin>>exp;
              
              //User inputs expenses
              while (exp!=-1) {
                  total+=exp;
                  cout<<"Expense: $";cin>>exp;
              }
              
              //Branching statement to determine if user is over/under budget
              if (total>budget) {
                  cout<<"You are over the budget with a total of $"<<total;
              }
              else {
                  cout<<"You are under the budget with a total of $"<<total;
              }
              break;
            }
            
            case '8': {
              //Setting up RNG
              srand(static_cast<unsigned int>(time(0)));
              
              //Declare variables
              int guess, rng;
              
              //Initialize variables
              rng = rand()%101;
              
              //Do while loop to find number
              do {
                  cout<<"Enter a number from 0-100: ";cin>>guess;
                  if (guess>rng)cout<<"The number is lower!"<<endl;
                  else if (guess<rng)cout<<"The number is higher!"<<endl;
                     }    while (guess!=rng);
              
              //Output the transformed data
               cout<<"You guessed the number!"<<endl;
               break;
            }
            
            case '9': {
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
               break;
            }
      }
      
    } while(num>'0'||num<'9');
    
    
    //Exit stage right!
    return 0;
}

