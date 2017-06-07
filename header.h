/*************************************************************************
 * AUTHOR        : Cameron Walters
 * Assignment 	 : Binary & Text Files
 * Class         : CS 301
 * Due Date      : 2/4/2014
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <fstream>
using namespace std;

void openTextFile();
void openBinaryFile();

void readTextFile();
void readBinaryFile();

void openTextFileWClass(TempClass inClass);
void readTextFileWClass(TempClass inClass);

void openBinaryFileClass(TempClass inClass);
void readBinaryFileClass(TempClass inClass);


void openBinaryFileW5Classes(TempClass inClass1,
							 TempClass inClass2,
							 TempClass inClass3,
							 TempClass inClass4,
							 TempClass inClass5);

void readBinaryFileW5Classes(TempClass inClass1,
							 TempClass inClass2,
							 TempClass inClass3,
							 TempClass inClass4,
							 TempClass inClass5);

void seekInBinaryFile(int locToSeek);




#endif /* HEADER_H_ */
