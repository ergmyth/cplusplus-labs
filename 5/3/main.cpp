#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int k,s,b,i;
     setlocale(0,"");
    i=19;k=0;s=0;
    cout<<"���� ����������� ����� �� 20 �� �. ����� ����� � ���������� ��� �� ���, ������� ��� ������� �� 7 ���� ������� 2 ��� 5. Enter number >20"<<endl;
    cin>>b; if (b>20) {
    while (i<=b)
    {
          i++;
    if ((i%7==2)||(i%7==5))
    {
    s=s+i;
    k++;
    }
    }
    cout<<"summa - "<<s<<endl;
    cout<<"kol-vo - "<<k<<endl; }
    else cout<<"Invalid number"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
