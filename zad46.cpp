#include <iostream>
using namespace std;
int tab[3][3]={{1,2,3},{1,2,0},{1,0,2}};
int tab1[3];

void f1(){
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<tab[i][j]<<" ";
		}
		cout<<endl;
	}
}
int f2(){
	for (int i=0;i<3;i++)
	{
		cout<<"Podaj element tablicy ";
		cin>>tab1[i];
	}
}
int f3(){
	for (int i=0;i<3;i++)
	{
		tab[1][i] =tab1[i];
	}
}
f4(){
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
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
	f4();

	return 0;
}
