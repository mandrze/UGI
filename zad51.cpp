#include <iostream>
#include <iomanip>
using namespace std;
int tab[11][11];
int tmp;
int f1(){
	for (int i =1;i<11;i++)
	{
			for(int j = 1; j < 11; j++)
			{
				tab[i][j]=i*j;
				cout<<setw(2)<<tab[i][j]<<"   ";
			}
			cout<<endl;
		
		}
		cout<<endl;
		
	}

int main()
{
	system("cls");
	
	f1();

	return 0;
}

