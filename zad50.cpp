#include <iostream>
using namespace std;
int tab[2][2];
int tab1[2][2];
int tmp;

int f1(){
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			cout<<"Podaj element"<<i<<" "<<j<<" macierzy A ";
			cin>>tab[i][j];
			
		}
	}
}
int f2(){
	system("cls");
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			cout<<"Podaj element"<<i<<" "<<j<<" macierzy B ";
			cin>>tab1[i][j];
			
		}
	}
}
int f3(){
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			if (tab[i][j] == tab1[j][i])
			tmp+=1;
		}
	}
	if (tmp==4){
		cout<<"Macierz B jest macierza transponowana macierzy A \n";
	} else cout<<"Macierz B nie jest transponowana macierzy A \n";
	
}
int f4(){
	cout<<"Macierz A: \n";
	for(int j = 0; j < 2; j++)
	{
		for(int i = 0; i < 2; i++)
		{
			cout<<tab[i][j]<<" ";
		}
		cout<<endl;
	}           
}
int f5(){
	cout<<"Macierz B: \n";
	for(int j = 0; j < 2; j++)
	{
		for(int i = 0; i < 2; i++)
		{
			cout<<tab1[i][j]<<" ";
		}
		cout<<endl;
	}           
}
int main(){
	system("cls");
	f1();
	f2();
	f3();
	f4();
	f5();
	
	return 0;
}

