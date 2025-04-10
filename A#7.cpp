/*
 * main.cpp
 *
 *  Created on: Apr 9, 2025
 *      Author: alishadv16
 */


/********************************************************************
* AUTHOR :
* STUDENT ID :
* LAB #07 : Eclipse Lab
* CLASS :
* SECTION :
* DUE DATE :
*********************************************************************/

// Preproscessor directives

#include <iostream>
#include <iomanip>

using namespace std;

/******************************************************************
* INPUT AND OUTPUT LAB
* -------------------------------------------------------------
* This program takes two number integers and outputs sum and product
* Runs 4 times
* -------------------------------------------------------------
* INPUT
    num1: First int > input from user
    num2: Second int > input from user

* OUTPUT
    sum: sum of ints
    prod: product of ints
    ****************************************************************/
int main()
{
    /***************************************************************
     * CONSTANTS
     * -------------------------------------------------------------
     * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
     * -------------------------------------------------------------
     * PROGRAMMER : Programmer’s Name
     * CLASS      : Student’s Course
     * SECTION    : Class Days and Times
     * LAB_NUM    : Lab Number (specific to this lab)
     * LAB_NAME   : Title of the Lab
     ***************************************************************/
    const char PROGRAMMER[] = "Alisha Valadez";
    const char CLASS[]      = "CS1A";
    const char SECTION[]    = "MW : 5:00p - 7:20p";
    const int  LAB_NUM      = 0-8;
    const char LAB_NAME[17] = "Input and Output";

    // Data Table

int count; //counter
int num1; 
int num2;
int sum;
int prod;


// OUTPUT – Class Heading
cout << left;
cout << "**************************************************";
cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
cout << "\n*  " << setw(14) << "CLASS"  << ": " << CLASS;
cout << "\n*  " << setw(14) << "SECTION"<< ": " << SECTION;
cout << "\n*  Lab #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
cout << "\n**************************************************\n\n";
cout << right;

// For loop

for (count=1; count<=4; count=count+1)
{
    cout << "Pair" << count << endl;
    cout << setw(26) << "Input First Int: ";
    cin >> num1;
    cout << setw(26) << "Input Second Int: ";
    cin >> num2;

    sum = num1 + num2;

    prod = num1 * num2;

    cout << endl;
    cout << setw(26) << "The sum is: " << sum << endl;
    cout << setw(26) << "The product is: " << prod << endl;
}

cout << right;
cin.ignore(1000, '\n');

    return 0;
}
