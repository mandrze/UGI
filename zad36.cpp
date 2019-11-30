#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	
	int lenght = 7;
	double  tab[lenght];
	double odpp, odpn;
	double sum = 0;
	double odp[] = {4, 4, 15, 12, 14, 18, 0};
	char znak;
	do {
		system("cls");
		cout<<"Podaj wynik 2*2= \n"; cin>>tab[0];
		cout<<"Podaj wynik 8/2= \n"; cin>>tab[1];
		cout<<"Podaj wynik 7+8= \n"; cin>>tab[2];
		cout<<"Podaj wynik 13-1= \n"; cin>>tab[3];
		cout<<"Podaj wynik 2*7= \n"; cin>>tab[4];
		cout<<"Podaj wynik 9+9= \n"; cin>>tab[5];
		cout<<"Podaj wynik 0-0= \n"; cin>>tab[6];
		for (int i=0; i<7;i++)
		if (tab[i]==odp[i]){ sum+=1;
	}
		else {cout<<"Odpowiedziales zle na pytanie "<<i+1<<"\n";
	}
		odpp=(sum/lenght)*100;
		odpn=100-odpp;
		cout<<"Udzieliles "<<odpp<<"% poprawnych odpowiedzi i "<<odpn<<"% niepoprawnych odpowiedzi \n";
		cout<<"Czy chcesz powtorzyc test? t/n \n";
		cin>>znak;
	
	
	} while(znak =='t');
	system("cls");
	if (odpp<51) cout<<"Otrzymales ocene ndst";
	else if (odpp<61) cout<<"Otrzymales ocene dostateczny";
	else if (odpp<71)cout<<"Otrzymales ocene dostateczny+";
	else if (odpp<81) cout<<"Otrzymales ocene dobry";
	else if (odpp<91) cout<<"Otrzymales ocene dobry+";
	else cout<<"Otrzymales ocene bardzo dobry";



	return 0;
	
}
