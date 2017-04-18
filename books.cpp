#include "books.h"

ostream& operator<<(ostream& os, const Book& st)
{
	return os<<"Book: "<<st.m_codeisbn<<" "<<st.m_surname<<" "<<st.m_name<<endl;
}

//===============================================================================
void Book::set_codeisbn(const string& codeisbn)
{
	m_codeisbn = codeisbn;
}
const string& Book::get_codeisbn () const
{
	return m_codeisbn;
}

void Book::set_name(const string& name)
{
	m_name = name;
}
const string& Book::get_name () const
{
	return m_name;
}

void Book::set_surname(const string& surname)
{
	m_surname = surname;
}
const string& Book::get_surname () const
{
	return m_surname;
}

void Book::set_check(const bool check)
{
	m_check = check;
}
bool Book::get_check () const
{
//	cout<<"get_check m_check = "<<m_check<<endl;
	return m_check;
}

bool Book::set_check (const string& st)
{
	m_check = (st == "+");
	
}




bool Book::operator==(const Book& st) 
{
	return m_codeisbn == st.m_codeisbn;
}

bool Book::operator!=(const Book& st) 
{
	return m_codeisbn != st.m_codeisbn;
}

