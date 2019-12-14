#include <iostream>
using namespace std;
int main()
{
	system("cls");
	int tab[3][3]={{1,1,1},{1,1,1},{1,1,1}};
	cout<<"podaj liczbe >1 \n";
	cin>>tab[1][1]; 
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<tab[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
		
	
}
