#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
string password = "1234";
string login = "admin";
	
	
int f1(){
	string pass;
	string log;
	do
	{
		cout<<"Podaj login \n";
		cin>>log;
		if (login == log)
		{
			cout<<"Login poprawny \n";
		}
		else {
			cout<<"Podales zly login\n";
//			break;
		}

		cout<<"Podaj haslo \n";
		cin>>pass;
		if (password == pass)
		{
			cout<<"Haslo poprawne \n";
		}
		else {
		cout<<"Podales zle haslo";
//		break;
		}
		}
		while (password!=pass||login!=log);
	}

int main(){
	
	
	f1();
	
	
	return 0;
}
