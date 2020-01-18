#include <iostream>
#include <stdio.h>
#include <string>
#include "conio.h"
using namespace std;
int bulka =10, chleb=10, bagietka=10;

f1(){
	char znak1;
	int a;
	do
	{
		cout<<"Wybierz towar ktory chcesz przyjac: \n";
		cout<<"1 - bulka \n";
		cout<<"2 - chleb \n";
		cout<<"3 - bagietka \n";
		cout<<"4 - Zakoncz przyjmowanie towaru \n";
		cin>>znak1;
		system("cls");
		
		switch (znak1)
		{
			case '1':
				cout<<"Podaj ilosc towaru jaka chcesz przyjac \n";
				cin>>a;
				bulka+=a;
				cout<<"Aktualny stan towaru: "<<bulka<<" sztuk\n";
				break;
			case '2':
				cout<<"Podaj ilosc towaru jaka chcesz przyjac \n";
				cin>>a;
				chleb+=a;
				cout<<"Aktualny stan towaru: "<<chleb<<" sztuk\n";
				break;
			case '3':
				cout<<"Podaj ilosc towaru jaka chcesz przyjac \n";
				cin>>a;
				bagietka+=a;
				cout<<"Aktualny stan towaru: "<<bagietka<<" sztuk\n";
				break;	
				
		}
	} while(znak1!='4');
	
}
int f2(){
	int tmpbulka, tmpbagietka, tmpchleb;
	
	
}


int main(){
	char znak;
	do
	{
		
		cout<<" Wybierz opcje: \n";
		cout<<"1 - Przyjmij towar do sklepu \n";
		cout<<"2 - Dodaj produkty do koszyka \n";
		cout<<"3 - Sprzedaz hurtowa \n";
		cout<<"4 - Sprzedaz detaliczna \n";
		cout<<"5 - Dodaj nowego klienta \n";
		cout<<"6 - Zakoñcz program \n";
		cin>>znak;
		system("cls");
	
		switch (znak)
			{
		case '1':
			f1();
			
		 break;
//		{
//		case '2':
//			f2();
//	} break;
//	{
//		case '3':
//			f3();
//	} break;
//	{
//		case '4':
//			f4();
//	} break;
//	{
//		case '5':
//			f5();
//	} break;
}
	} while(znak!='6');

	
	return 0;
}
