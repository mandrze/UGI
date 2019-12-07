#include <iostream>
#include <stdio.h>
using namespace std;
int tmp[100], i=0, liczbaMin,liczbaMax, liczba,b;
int f1(){
	do{
		for (i=0; i<100;i++){
			cin>>b;
			tmp[i]=b;
			
			if (b==liczba){
			break;
			}

			}
		
	}
	while (liczba!=b);
}

void f2(){
	for (i=0; i<100;i++){
		cout<<tmp[i]<<" ";
		if (tmp[i]==liczba){
			break;
		}
	}
}
void f3(){
	liczbaMax=tmp[0];
	for (i=0; i<100;i++){
		
			
		if (liczbaMax<tmp[i])
			liczbaMax=tmp[i];
		
		if (tmp[i]==liczba){
			break;
		}
}
cout<<"najwiekszy element "<<liczbaMax;
}

void f4(){
	liczbaMin=tmp[0];
	for (i=0; i<100;i++){
		
			
		if (liczbaMin>tmp[i])
			liczbaMin=tmp[i];
		
		if (tmp[i]==liczba){
			break;
		}
}
cout<<"Najmniejszy element "<<liczbaMin;
}





int main()
{
	system("cls");
	cout<<"podaj liczbe \n";
	cin>>liczba;
	cout<<"Ta liczba konczy wpisywanie elementow: "<<liczba<<endl;
	f1();
	f2();
	f3();
	f4();


	return 0;
}
	
	
	
