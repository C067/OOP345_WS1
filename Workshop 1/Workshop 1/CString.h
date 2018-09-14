// Name: Callum Dodge
// Seneca Student ID: 100229178
// Seneca email: cdodge1@myseneca.ca
// Date of completion: Sept, 11/2018
//
// I confirm that the content of this file is created by me,
// with the exception of the parts provided to me by my professor.

#ifndef CSTRING_H
#define CSTRING_H

namespace w1 {

	const int MAX = 3;

	class CString {
		char * str;
	public:
		CString(char *);
		void display(std::ostream& os) const; 
	};

	std::ostream& operator<<(std::ostream& os, const CString CStr);
}


#endif // !CSTRING_H