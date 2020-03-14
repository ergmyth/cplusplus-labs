#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
	setlocale(0,"");
	int x,s,a,b;
	s=0;
	cout<<"Написать программу, вычисляющую утроенную сумму второй и предпоследней цифр пятизначного числа. Enter the five-digit number!"<<endl;
	cin>>x;
	
	a=x/1000%10;
	b=x%100/10;
	s=3*(a+b);
	
	cout<<"Summ - "<<s<<endl;
	
	system("PAUSE");
    return EXIT_SUCCESS;
}
