#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
    int x,a,i,b,c,d,v,f,k;
    setlocale(0,"");
    i=1000;k=0;
    cout<<"Среди натуральных четырехзначных чисел найти те, которые состоят из разных цифр, сумма квадратов цифр которых делится на V, а само число делится на V+1. Enter number"<<endl;
    cin>>v;
    for(i;i<=9999;i++)
    {
    a=i/1000;
    b=i/100%10;
    c=i%100/10;
    d=i%10;
    if ((a!=b) && (a!=c) && (a!=d) && (b!=c) && (b!=d) && (c!=d) && ((a*a+b*b+c*c+d*d)%v==0) && (i%(v+1)==0))
    {cout<<"chisla summa kvadratov kotoryh delitca na " <<v<< " samo chislo na "<<v<<"+1 - "<<i<<endl;k++;}
	}
    if (k==0) cout<<"chisel net"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
