#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    setlocale(0,"");
    float a,b,c,d,x1,x2;
    cout << "��������� ��������� ������� ����������� ���������. ������� ����-�� ����������� ���������" <<endl;
    cin >> a >> b >> c;
    d=b*b-4*a*c;
    if (d>0) {x1=(-b+sqrt(d))/(2*a);
              x2=(-b-sqrt(d))/(2*a);
              cout << "����� " << x1 <<", " << x2 << endl;}
              
    else {if (d==0) { x1=(-b+sqrt(d))/(2*a);
              cout << "����� " <<x1<<endl;}
              
    else cout << "������ ���" ;}
    
    system("PAUSE");
    return EXIT_SUCCESS; 
}
