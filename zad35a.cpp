#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	char odp1[5], odp2[4], odp3[6];

	cout<<"Pytanie 1 \nZbiornik wodny, wiekszy od morza \n";
	char podp1[]="ocean";
	cout<<"Odpowiedz ";
	for (int i=0; i<5; i++) cin>>odp1[i];
	cout<<"Pytanie 2 \nZwierze, symbol wiedzy \n";
	char podp2[] = "sowa";
	cout<<"Odpowiedz ";
	for (int i=0; i<4; i++) cin>>odp2[i];
	cout<<"Pytanie 3 \nUrzadzenie do robienia zdjec \n";
	char podp3[]= "aparat";
	cout<<"Odpowiedz ";
	for (int i=0; i<6; i++) cin>>odp3[i];
	int odp[3] = {0, 0, 0};
		
	for (int i=0; i<5;i++) 
		{
			if (odp1[i]!=podp1[i]) odp[0]=1;
		}
	for (int i=0; i<4;i++) 
		{
			if (odp2[i]!=podp2[i]) odp[1]=1;
		}		
	for (int i=0; i<6;i++) 
		{
			if (odp3[i]!=podp3[i]) odp[2]=1;
		}
	do
	{
		if (odp[0]==1) 
		{
			system("cls");
			cout<<"Pytanie 1 \nZbiornik wodny, wiekszy od morza \n"; 
			for (int i=0;i<5;i++) cin>>odp1[i];
			for (int i=0;i<5;i++)
			{
				if (odp1[i]==podp1[i])odp[0]=0;				
				else odp[0]=1;
			}	

		}
	}
	while (odp[0]!=0);
	do
	{
		if (odp[1]==1) 
		{
			system("cls");
			cout<<"Pytanie 2 \nZwierze, symbol wiedzy \n"; 
			for (int i=0;i<4;i++) cin>>odp2[i];
			for (int i=0;i<4;i++)
			{
				if (odp2[i]==podp2[i])odp[1]=0;				
				else odp[1]=1;
			}	

		}
	}
	while (odp[1]!=0);	
	do
	{
		if (odp[2]==1) 
		{
			system("cls");
			cout<<"Pytanie 3 \nUrzadzenie do robienia zdjec \n"; 
			for (int i=0;i<6;i++) cin>>odp3[i];
			for (int i=0;i<6;i++)
			{
				if (odp3[i]==podp3[i])odp[2]=0;				
				else odp[2]=1;
			}	
		}
	}
	while (odp[2]!=0);					

	system("cls");		
	for (int i=0;i<5;i++) cout<<odp1[i]; cout<<"\n";
	for (int i=0;i<4;i++) cout<<odp2[i]; cout<<"\n";	
	for (int i=0;i<6;i++) cout<<odp3[i]; cout<<"\n";
	

	return 0;
	
}
