#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
string password[10] = {"haslo1", "haslo2", "haslo3", "haslo4", "haslo5", "haslo6", "haslo7", "haslo8", "haslo9", "haslo10"};
string login[10] = {"login1", "login2", "login3", "login4", "login5", "login6", "login7", "login8", "login9", "login10"};  
	
	
int f1(){
	string pass;
	string log;
	int licznik = 0;
	do
	{
		cout<<"Podaj login \n";
		cin>>log;		
		cout<<"Podaj haslo \n";
		cin>>pass;
		for (int i; i<11 ;i++)
		{
			if (login[i] == log&&password[i] == pass)
		{
			cout<<"Udalo Ci sie poprawnie zalogowac \n";
			break;
		}  
		}
		licznik++;
		}	while (licznik<0);

}


int main(){
	
	
	f1();
	
	
	return 0;
}
