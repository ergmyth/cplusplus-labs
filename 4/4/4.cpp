#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    double a,b,h,x,y;
     setlocale(0,"");
    cout<<"��������� ��������� ������������� ������� y = F(x) �� ������� [a;b] c ����� h. Enter a,b,h"<<endl;
    cin>>a>>b>>h;
    x=a;
    for (x;x<=b;x=x+h)
    {y=2*x*x*x+(2.0*cos(x)*cos(x))/(7*x*x);
    cout<<x<<" "<<y<<endl;
}
    system("PAUSE");
    return EXIT_SUCCESS;
}
