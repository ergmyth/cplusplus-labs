#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int x,i,b;
     setlocale(0,"");
    cout<<"����� 10 ������ ����������� �����, ��������� ������ �� 9 ��� �� 7 � ������� 300."<<endl;
    i=1;x=300;
    while (i<=10)
    {
    x++;
    if ((x>300) && ((x%9==0)||(x%7==0)))
    {
    cout<<i<<" chislo - "<<x<<endl;
    i++;
    }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
