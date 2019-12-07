#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int a, b;

int f1(){
	do{
		cout<<"Podaj liczbe wieksza lub rowna 0: ";
		cin>>a;
	}
	while (a<0);
}
void f2(){
	cout<<"Podaj "<<a<<" liczb\n";
	int suma = 0;
	for (int i=0;i<a;i++){
		int liczba;
		cin>>liczba;
		int liczba2;
		liczba2 = pow(liczba,2);
		suma +=liczba2; 
	}
	cout<<suma;
}

int main()
{
	f1();
	f2();
	
	return 0;
	
}
