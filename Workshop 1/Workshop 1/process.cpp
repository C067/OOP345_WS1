// Name: Callum Dodge
// Seneca Student ID: 100229178
// Seneca email: cdodge1@myseneca.ca
// Date of completion: Sept 11, 2018
//
// I confirm that the content of this file is created by me,
// with the exception of the parts provided to me by my professor.

#include <iostream> 
#include "process.h"
#include "CString.h"

using namespace std; 

namespace w1 {

	void process(char * str, std::ostream& os) {
		CString String(str);

		os << String;
		os << endl;

	}

}