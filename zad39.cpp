#include <iostream>
#include <stdio.h>
using namespace std;
int a, rozmiar;

int f1(){
	do{
		cout<<"Podaj liczbe wieksza lub rowna 0: ";
		cin>>a;
	}
	while (a<0);
}
int f2(){
		do{
		cout<<"Podaj rozmiar tablicy wiekszy od 3: ";
		cin>>rozmiar;
	}
	while (rozmiar<4);
}	

void f3(){
	int t1[rozmiar];
	for (int i=0;i<rozmiar;i++)
	{
		t1[i]=0;
		t1[0]=a;
		cout<<t1[i]<<" ";
	}
	
}



int main()
{
	system("cls");
	f1();
	f2();
	f3();
	
	
}


