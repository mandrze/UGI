#include <iostream>
using namespace std;

int main()
{
	char odp1[3], odp2[3], odp3[3], odp4[3];
	char znak = 'n';
	do
	{
		cout<<"Pytanie 1 \nCzy Gniezno to stolica Polski? tak/nie \n";
		char podp1[]="nie";
		cout<<"Odpowiedz ";
		for (int i=0; i<3; i++) cin>>odp1[i];
		cout<<"Pytanie 2 \nCzy Polska ma dostep do morza? tak/nie \n";
		char podp2[] = "tak";
		cout<<"Odpowiedz ";
		for (int i=0; i<3; i++) cin>>odp2[i];
		cout<<"Pytanie 3 \nIle dni ma rok przestepny? (liczba) \n";
		char podp3[]= "366";
		cout<<"Odpowiedz ";
		for (int i=0; i<3; i++) cin>>odp3[i];
		cout<<"Pytanie 4 \nCzy Berlin to stolica Niemiec? tak/nie \n";
		char podp4[]="tak";
		cout<<"Odpowiedz ";
		for (int i=0; i<3; i++) cin>>odp4[i];
		for (int i=0;i<3; i++)
		{
			
			if (odp1[i]==podp1[i]&&odp2[i]==podp2[i]&&odp3[i]==podp3[i]&&odp4[i]==podp4[i])
			{
				znak = 'zima';
				system("cls");
			}
			else 
			{
				znak = 't';
				system("cls");
			}

		}
		
	}
	while (znak!='zima');
	cout<<"Haslo: zima\n";
	return 0;
	
}

//(odp1[i]==podp1[i]);


//pytanie i odpowiedz
//kolejne pytanie
//sprawdzanie poprawnosci odpowiedzi
//wyswietlanie odpowiedzi jesli sa prawidlowe
