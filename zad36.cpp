#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	
	int lenght = 3;
	double  tab[lenght];
	double odpp, odpn;
	double sum = 0;
	double odp[] = {4, 4, 15};
	char znak;
	do {
		cout<<"Podaj wynik 2*2= \n";
		cin>>tab[0];
		cout<<"Podaj wynik 8/2= \n";
		cin>>tab[1];
		cout<<"Podaj wynik 7+8= \n";
		cin>>tab[2];
		for (int i=0; i<3;i++)
		if (tab[i]==odp[i]){ sum+=1;
	}
		else {cout<<"Odpowiedziales zle na pytanie "<<i+1<<"\n";
	}
		odpp=(sum/lenght)*100;
		odpn=100-odpp;
		cout<<"Udzieliles "<<odpp<<"% poprawnych odpowiedzi i "<<odpn<<"% niepoprawnych odpowiedzi ";
		cout<<"Czy chcesz powtorzyc test? t/n";
		cin>>znak;
	
	
	} while(znak =='t');



	return 0;
	
}
