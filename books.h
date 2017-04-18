#ifndef BOOKS_HEADER
#define BOOKS_HEADER

#include <iostream>
#include <string>

using namespace std;



class Book
{
public:
	const string& get_codeisbn () const;
	const string& get_name () const;
	const string& get_surname () const;
	bool get_check () const;

	void set_codeisbn(const string& codeisbn);
	void set_name (const string& name);
	void set_surname (const string& surname);
	void set_check(const bool check);
	
	bool set_check (const string& st) ;

	bool operator!=(const Book& st) ;
	bool operator==(const Book& st) ;
	
private:
	string m_codeisbn;
	string m_name;
	string m_surname;
	bool m_check = false;
	const string m_check_str = "+";
	
	friend ostream& operator<<(ostream& os, const Book& st) ;
};

ostream& operator<<(ostream& os, const Book& st) ;

#endif
