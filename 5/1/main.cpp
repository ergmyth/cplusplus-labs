#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    double y,a,b,h,x;
     setlocale(0,"");
    cout<<"��������� ��������� ������������� ������� y = F(x) �� ������� [a;b] c ����� h. Enter a,b,h"<<endl;
    cin>>a>>b>>h;
    while (a<=b)
    {
          x=a;
          y=2*x*x*x+(2*cos(x)*cos(x))/(7*x*x);
          cout<<y<<endl;
          a=a+h;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
