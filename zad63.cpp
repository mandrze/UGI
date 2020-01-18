#include <iostream>
#include <stdio.h>
using namespace std;

int t1(){
	int a;
        cout << "Podaj dlugosc podstawy trojkata: ";
        cin >> a;
    char b = '#';
    for (int i=1; i<a+1; i++)
    {   
         for (int k=1; k<i+1; k++)
        {
             cout << b;
        }
             cout << endl;
    }
	for (int i=a; i>0; i--)
    {   
         for (int k=1; k<i+1; k++)
        {
             cout << b;
        }
             cout << endl;
    }

}

int main(){

	t1();
	
	return 0;
}
