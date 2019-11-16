#include <iostream>
using namespace std;

int main()
{
	char  tab[3], odp[3];
	char tab1[]="bba";
	cout<<"Podaj wynik: 2*2= \na) 3\nb) 4\n";
	cin>>tab[0];
	cout<<"Podaj wynik 8/2= \na) 7\nb) b\n";
	cin>>tab[1];
	cout<<"Podaj wynik 7+8= \na) 15\nb) 11\n";
	cin>>tab[2];
	for (int i=0; i<3;i++)
	{
		if (tab[i]==tab1[i]) odp[i]='1';
		if (tab[i]!=tab1[i]) odp[i]='0';
		if (odp[i]==0) cout<<"Zadanie "<<i;
	}
	
	


	return 0;
	
}

