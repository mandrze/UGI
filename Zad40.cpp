#include <iostream>
#include <stdio.h>
using namespace std;
int a, b;

int f1(){
	do{
		cout<<"Podaj liczbe wieksza lub rowna 0: ";
		cin>>a;
	}
	while (a<0);
}
int f2(){
	do{
		cout<<"Podaj liczbe wieksza lub rowna 1: ";
		cin>>b;
	}
	while (a<1);
}
void f3(){
	int wynik, reszta;
	wynik = (a/b);
	reszta = a%b;
	cout<<wynik<<" + "<<reszta<<"/"<<b;
}

main(){
	f1();
	f2();
	f3();
}
