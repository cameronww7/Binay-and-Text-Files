/*************************************************************************
 * AUTHOR        : Cameron Walters
 * Assignment 	 : Binary & Text Files
 * Class         : CS 301
 * Due Date      : 2/4/2014
 ************************************************************************/

// This class file is used for the implementation of printHeader

#include "TempClass.h"

// CONSTRUCTOR -- Default constructor
TempClass::TempClass()
{
	num1 = -1;
	num2 = -2;

}

// CONSTRUCTOR -- Each of the class data members is passed in and stored
TempClass::TempClass(int    inNum1,
		    	  	 double inNum2)
{
	num1 = inNum1;
	num2 = inNum2;
}

int TempClass::returnNum1()
{
	return num1;
}

double TempClass::returnNum2()
{
	return num2;
}

void TempClass::cleanData()
{
	num1 = 0;
	num2 = 0;
}

void TempClass::printInfo()
{
	cout << endl;
	// OUTPUT -- Print class heading to the screen.
	cout << left;
	cout << setw(12) << "Number 1 : " << num1 << endl;
	cout << setw(12) << "Number 2 : " << num2 << endl;

	cout << right;
}

