#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int x,a,b,c,d;
    setlocale(0,"");
    cout<<"Дано четырехзначное число. Определить какая из его цифр является второй по велечине. Enter 4-digit number"<<endl;
    cin>>x;
    a=x/1000;
    b=(x/100)%10;
    c=(x%100)/10;
    d=x%10;
    if ((a>b)&&(a>c)&&(a>d))
       {
        if ((b>c)&&(b>d))
        cout<<"Vtoroe po velechine chislo - "<<b<<endl;
        else if ((c>b)&&(c>d))
        cout<<"Vtoroe po velechine chislo - "<<c<<endl;
        else if ((d>b)&&(d>c))
        cout<<"Vtoroe po velechine chislo - "<<d<<endl;
        }
    else if ((b>a)&&(b>c)&&(b>d))
         {
         if ((a>c)&&(a>d))
        cout<<"Vtoroe po velechine chislo - "<<a<<endl;
        else if ((c>a)&&(c>d))
        cout<<"Vtoroe po velechine chislo - "<<c<<endl;
        else if ((d>a)&&(d>c))
        cout<<"Vtoroe po velechine chislo - "<<d<<endl;         
         }
    else if ((c>a)&&(c>b)&&(c>d))
    	{
         if ((a>b)&&(a>d))
        cout<<"Vtoroe po velechine chislo - "<<a<<endl;
        else if ((b>a)&&(b>d))
        cout<<"Vtoroe po velechine chislo - "<<b<<endl;
        else if ((d>a)&&(d>b))
        cout<<"Vtoroe po velechine chislo - "<<d<<endl;         
         }
    else if ((d>a)&&(d>b)&&(d>c))
    	{
         if ((a>b)&&(a>c))
        cout<<"Vtoroe po velechine chislo - "<<a<<endl;
        else if ((b>a)&&(b>c))
        cout<<"Vtoroe po velechine chislo - "<<b<<endl;
        else if ((c>a)&&(c>b))
        cout<<"Vtoroe po velechine chislo - "<<c<<endl;         
         }
    system("PAUSE");
    return EXIT_SUCCESS;
}
