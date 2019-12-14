#include <iostream>
using namespace std;
int tab[3][3];
int tab1[3][3];
int tmp;

int f1(){
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<"Podaj element macierzy ";
			cin>>tab[i][j];
			
		}
	}
}
int f2(){
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<tab[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
int f3(){
	for(int j = 0; j < 3; j++)
	{
		for(int i = 0; i < 3; i++)
		{
			cout<<tab[i][j]<<" ";
		}
		cout<<endl;
	}           
}

int main()
{
	system("cls");
	
	f1();
	f2();
	f3();

	return 0;
}
