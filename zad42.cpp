#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int a, b;

int f1(){
	do{
		cout<<"Podaj liczbe wieksza lub rowna 1: ";
		cin>>a;
	}
	while (a<1);
}
int f2(){
	do{
		cout<<"Podaj liczbe wieksza lub rowna 0: ";
		cin>>b;
	}
	while (a<0);
}
void f3(){
	int suma = pow(a,b);
	cout<<suma;
}

int main()
{
	f1();
	f2();
	f3();
	
	return 0;
	
}
