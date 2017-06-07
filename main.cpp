/*************************************************************************
 * AUTHOR        : Cameron Walters
 * Assignment 	 : Binary & Text Files
 * Class         : CS 301
 * Due Date      : 2/4/2014
 ************************************************************************/

#include "TempClass.h"
#include "header.h"

int main()
{
	// Part 3 of Binary & Text Files W/out Classes
	cout << "\n\n-- Part 3\n\n";
	// Simple Binary & Text File
    openTextFile();
    readTextFile();

    openBinaryFile();
    readBinaryFile();


    // Part 5 of Binary & Text Files W/ Classes
    cout << "\n\n\n-- Part 5 With Classes\n";
    TempClass tempClass1(6, 8);
    TempClass tempClass2;

    TempClass tempClass3(10, 12);
    TempClass tempClass4;

    openTextFileWClass(tempClass1);
    readTextFileWClass(tempClass2);

    openBinaryFileClass(tempClass3);
    readBinaryFileClass(tempClass4);

    // Part 6 of Binary & Text Files W/ Classes - 5 in - 5 out
    // & seek the 3rd
    cout << "\n\n-- Part 6 W/ 5 Classes\n";

    TempClass tempClass5(5, 55);
    TempClass tempClass6(6, 66);
    TempClass tempClass7(7, 77);
    TempClass tempClass8(8, 88);
    TempClass tempClass9(9, 99);

    TempClass tempClass10;
    TempClass tempClass11;
    TempClass tempClass12;
    TempClass tempClass13;
    TempClass tempClass14;

    openBinaryFileW5Classes( tempClass5,
							 tempClass6,
							 tempClass7,
							 tempClass8,
							 tempClass9);

    readBinaryFileW5Classes( tempClass10,
							 tempClass11,
							 tempClass12,
							 tempClass13,
							 tempClass14);

    // Part 6 of Binary & Text Files W/ seek of binary file
    cout << "\n\nPart 6 - W/ Seekg()\n";
    seekInBinaryFile(3);





    return 0;
}


void openTextFile()
{
    int num1 = 1;
    int num2 = 2;

    ofstream oFile;
    oFile.open ("TextFile.txt");

    oFile << num1  << " " << num2;

    oFile.close();
}


void readTextFile()
{
    int num1;
    int num2;

    fstream oFile;
    oFile.open("TextFile.txt");

    oFile >> num1;
    oFile >> num2;

    cout << "Text File   int 1 : " << num1;
    cout << endl;
    cout << "Text File   int 2 : " << num2;
    cout << endl;

    oFile.close();
}

void openBinaryFile()
{
    int num1 = 2;
    int num2 = 4;

    ofstream oFile2;
    oFile2.open("BinaryFile.txt", ios::in | ios::binary);

    oFile2.write(reinterpret_cast<const char *> (&num1), sizeof(num1));

    oFile2.write(reinterpret_cast<const char *> (&num2), sizeof(num2));

    oFile2.close();
}

void readBinaryFile()
{
    int num1 = 0;
    int num2 = 0;

    ifstream iFile2;
    iFile2.open("BinaryFile.txt", ios:: out | ios::binary);

    iFile2.read(reinterpret_cast<char *> (&num1), sizeof(num1));

    iFile2.read(reinterpret_cast<char *> (&num2), sizeof(num2));

    cout << endl;
    cout << "Binary File int 1 : " << num1;
    cout << endl;
    cout << "Binary File int 1 : " << num2;

    iFile2.close();
}

void openTextFileWClass(TempClass inClass)
{


    ofstream oFile;
    oFile.open ("TextFileWClass.txt");

    oFile << inClass.returnNum1() << " " << inClass.returnNum2();

    oFile.close();
}


void readTextFileWClass(TempClass inClass)
{
    int num1 = 0;
    int num2 = 0;

    fstream oFile;
    oFile.open("TextFileWClass.txt");

    oFile >> num1;
    oFile >> num2;

    cout << "\nText File   int 1 : " << num1;
    cout << endl;
    cout << "Text File   int 2 : " << num2;
    cout << endl;

    oFile.close();
}

void openBinaryFileClass(TempClass inClass)
{
    ofstream oFile2;
    oFile2.open("BinaryFileWClass.txt", ios::in | ios::binary);

    oFile2.write(reinterpret_cast<const char *> (&inClass), sizeof(inClass));

    oFile2.close();
}

void readBinaryFileClass(TempClass inClass)
{

    ifstream iFile2;
    iFile2.open("BinaryFileWClass.txt", ios:: out | ios::binary);

    iFile2.read(reinterpret_cast<char *> (&inClass), sizeof(inClass));

    inClass.printInfo();

    iFile2.close();
}

void openBinaryFileW5Classes(TempClass inClass1,
							 TempClass inClass2,
							 TempClass inClass3,
							 TempClass inClass4,
							 TempClass inClass5)
{
	ofstream oFile2;
	    oFile2.open("BinaryFileWClass.txt", ios::out | ios::binary);

	    oFile2.write(reinterpret_cast<const char *> (&inClass1), sizeof(inClass1));
	    oFile2.write(reinterpret_cast<const char *> (&inClass2), sizeof(inClass2));
	    oFile2.write(reinterpret_cast<const char *> (&inClass3), sizeof(inClass3));
	    oFile2.write(reinterpret_cast<const char *> (&inClass4), sizeof(inClass4));
	    oFile2.write(reinterpret_cast<const char *> (&inClass5), sizeof(inClass5));


	    oFile2.close();
}

void readBinaryFileW5Classes(TempClass inClass1,
							 TempClass inClass2,
							 TempClass inClass3,
							 TempClass inClass4,
							 TempClass inClass5)
{

    ifstream iFile2;
    iFile2.open("BinaryFileWClass.txt", ios::in | ios::binary);

    iFile2.read(reinterpret_cast< char *> (&inClass1), sizeof(inClass1));
    iFile2.read(reinterpret_cast< char *> (&inClass2), sizeof(inClass2));
    iFile2.read(reinterpret_cast< char *> (&inClass3), sizeof(inClass3));
    iFile2.read(reinterpret_cast< char *> (&inClass4), sizeof(inClass4));
    iFile2.read(reinterpret_cast< char *> (&inClass5), sizeof(inClass5));

    inClass1.printInfo();
    inClass2.printInfo();
    inClass3.printInfo();
    inClass4.printInfo();
    inClass5.printInfo();

    iFile2.close();
}

void seekInBinaryFile(int locToSeek)
{
	TempClass temp;

	cout << "\nPre Population";
	temp.printInfo();

    ifstream iFile2;
    iFile2.open("BinaryFileWClass.txt", ios::out | ios::binary);

    long byteSizeofClass = sizeof(temp);

    iFile2.seekg((locToSeek-1) * byteSizeofClass, ios::beg);
    iFile2.read(reinterpret_cast< char *> (&temp), sizeof(temp));

    cout << "\nPost Seek Population";
	temp.printInfo();

    iFile2.close();

}



