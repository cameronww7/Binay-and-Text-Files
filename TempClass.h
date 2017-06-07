/*************************************************************************
 * AUTHOR        : Cameron Walters
 * Assignment 	 : Binary & Text Files
 * Class         : CS 301
 * Due Date      : 2/4/2014
 ************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#ifndef TEMPCLASS_H_
#define TEMPCLASS_H_

class TempClass
{
public:
	TempClass();
	TempClass(int    num1,
			  double num2);

	int    returnNum1();
	double returnNum2();

	void   cleanData();
	void   printInfo();



private:
	int    num1;
	double num2;
};

#endif /* TEMPCLASS_H_ */
