#include "books.h"
#include <string>
#include <iostream>
#include <fstream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	ifstream infile;
	infile.open("books.txt");
	
	vector<Book> group;
	int quantity = 0;
	infile>>quantity;

	for (int i = 0; i < quantity; i++)
	{
		string code;
		string name;
		string surname;
		string check;

		infile>>code>>name>>surname>>check;
		
		
		Book st;
		st.set_codeisbn(code);
		cout<<st.get_codeisbn()<<" ";

		st.set_name(name);
		cout<<st.get_name()<<" ";

		st.set_surname(surname);
		cout<<st.get_surname()<<" ";

		st.set_check(check);
		cout<<st.get_check()<<endl;
		
		group.push_back(st); 

	}

	cout<<endl;
	for(auto st : group)
	{
		if (st.get_check() == true)
		{
			cout << st.get_codeisbn() << " " << st.get_name() << " " << 				st.get_surname() << endl << endl;
		}
	}

	cout<<"Проверка оператора =="<<endl;
	cout<<"0 и 3 элемент"<<(group[0]==group[3])<<" "<<endl;
	cout<<"0 и 2 элемент"<<(group[0]==group[2])<<" "<<endl; 

	cout<<"Проверка оператора !="<<endl;
	cout<<"0 и 3 элемент"<<(group[0]!=group[3])<<" "<<endl;
	cout<<"0 и 2 элемент"<<(group[0]!=group[2])<<" "<<endl; 

	cout<<"Проверка оператора "<<endl<<group[0]<<endl;

	infile.close();
}
