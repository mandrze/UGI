#include <iostream>
using namespace std;
int tab[3][3]={{1,2,3},{1,2,0},{1,0,2}};
int wiersz, kolumna, przekatna;
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
void f2(){
	for (int i=0;i<3;i++)
	{
		wiersz +=tab[i][0];
	}
	cout<<"Suma wierszu 1 = "<<wiersz<<" \n";
}
void f3(){
	for (int i=0;i<3;i++)
	{
		kolumna +=tab[0][i];
	}
	cout<<"Suma kolumny 1 = "<<kolumna<<" \n";
}
void f4(){
	for (int i=0;i<3;i++)
	{
		przekatna +=tab[i][i];
	}
	cout<<"Suma przekatnej = "<<przekatna<<" \n";
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
