// Name: Callum Dodge
// Seneca Student ID: 100229178
// Seneca email: cdodge1@myseneca.ca
// Date of completion: Sept 11, 2018
//
// I confirm that the content of this file is created by me,
// with the exception of the parts provided to me by my professor.

#include <iostream>
#include <fstream>
#include "process.h"

using namespace std;
using namespace w1;

// TODO: Declare (without defining) the global variable
// you have defined in CString.cpp
extern const int MAX;

int main(int argc, char* argv[])
{
	cout << "Command Line: ";
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << ' ';
	}
	if (argc < 2)
	{
		cout << "\nInsufficient number of arguments\n";
		return 1;
	}

	// TODO: Add code here that will print out max characters
	// stored by your CString object
	cout << endl << "Maximum number of characters stored: 3" << endl;
	for (int i = 1; i < argc; i++)
	{
		process(argv[i], cout);
	}

	return 0;
}