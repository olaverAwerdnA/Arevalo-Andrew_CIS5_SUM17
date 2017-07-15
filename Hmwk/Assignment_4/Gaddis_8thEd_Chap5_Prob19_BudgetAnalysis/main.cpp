/* 
 * File:   main.cpp
 * Author: Andrew Arevalo
 * Created on July 9, 2017, 1:25 PM
 * Purpose:  Calculating if user is over or under the budget.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
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
    
    //Exit stage right!
    return 0;
}

