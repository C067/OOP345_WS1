// Name: Callum Dodge
// Seneca Student ID: 100229178
// Seneca email: cdodge1@myseneca.ca
// Date of completion: Sept 11, 2018
//
// I confirm that the content of this file is created by me,
// with the exception of the parts provided to me by my professor.

#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
#include <cstring>
#include "CString.h"

using namespace std;

namespace w1 {

	CString::CString(char * string) {

		//Compare to see if the string is empty or Null. Place it into a Safe Empty State
		if (string == nullptr || string == '\0') {
			str[0] = '\0';
		}
		//If not, copy the data over into the data member
		else {
			str = new char[MAX];
			strncpy(str, string, MAX);
			str[MAX] = '\0';
		}
	}

	void CString::display(std::ostream& os) const {

		for (auto cnt = 0u; cnt < MAX; cnt++) {
			os << str[cnt];
		}

	}

	std::ostream & operator<<(std::ostream & os, const CString CStr) {
		static int cnt = 0;
		
		cout << cnt++ << ": ";

		CStr.display(os);

		return os;
	}

}