#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
	int x,y;
	setlocale(0,"");
	cout<<"Даны два числа а и b. Необходимо поменять местами их значения. а) с использованием дополнительной переменной; б) без использования дополнительной переменнойEnter two any numbers"<<endl;
	cin>>x>>y;
	cout<<"X - "<<x<<endl;
	cout<<"Y - "<<y<<endl;
	x=x+y;	
	y=x-y;
	x=x-y;
	cout<<"X - "<<x<<endl;
	cout<<"Y - "<<y<<endl;
	system("PAUSE");
    return EXIT_SUCCESS;
}
