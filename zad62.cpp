#include <iostream>
#include <stdio.h>
using namespace std;

int trojkaPitagorejska(){
	int a, b, c;
	cin>>a;
	cin>>b;
	cin>>c;
	
	if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
	{
		cout<<"Podane liczby tworza trojke pitagorejska \n";
	}
	else cout<<"Podane liczby nie tworza trojki pitagorejskiej";
}

int main(){
	trojkaPitagorejska();
	return 0;
}
