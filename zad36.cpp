#include <iostream>
using namespace std;

int main()
{
	char  tab[3], odp[3];
	char tab1[]="bba";
	cout<<"Podaj wynik: 2*2= \n a) 3\nb) 4\n";
	cin>>tab[0];
	cout<<"2";
	cin>>tab[1];
	cout<<"3";
	cin>>tab[2];
	for (int i=0; i<3;i++)
	{
		if (tab[i]==tab1[i]) odp[i]='1';
		if (tab[i]!=tab1[i]) odp[i]='0';
		cout<<tab[i]<<" "<<odp[i]<<"\n";
	}
	


	return 0;
	
}
//int liczby[ 3 ];
//    std::cout << "Podaj liczbe 1:";
//    std::cin >> liczby[ 0 ];
//    std::cout << "Podaj liczbe 2:";
//    std::cin >> liczby[ 1 ];
//    liczby[ 2 ] = 567;
//    std::cout << "liczby[2] wynosi " << liczby[ 2 ] << std::endl;
//    int suma = liczby[ 0 ] + liczby[ 1 ] + liczby[ 2 ];
//    std::cout << "Suma trzech liczb wynosi:" << suma << std::endl;
//

