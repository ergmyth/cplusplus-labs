#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    setlocale(0,"");
    float a,b,h,s;
    int x;
    cout<< "�������� ��������� ������� �������������� ��������������� ������������" <<endl;
    cout << "1-����� �" <<endl<< "2-���������� b" <<endl<< "3-������ h" <<endl<< "4-������� S" <<endl;
    cin >> x;
    switch (x){
           case 1: 
                cout << "������� �������� ������" <<endl; 
                cin >>a;
                b=sqrt(a*a+a*a);
                h=b/2;
                s=(h*b)/2;
                cout <<"����������= "<<b<<endl<<"������= "<<h<<endl<<"�������= "<<s<<endl;break;
           case 2:
                cout << "������� �������� ����������" <<endl; 
                cin >>b;
                h=b/2;
                s=(h*b)/2;
                a=sqrt((b*b)/2);
                cout <<"�����= "<<a<<endl<<"������= "<<h<<endl<<"�������= "<<s<<endl;break;
           case 3:
                cout << "������� �������� ������" <<endl; 
                cin >>h;
                b=h*2;
                s=(h*b)/2;
                a=sqrt((b*b)/2);
                cout <<"����������= "<<b<<endl<<"�����= "<<a<<endl<<"�������= "<<s<<endl;break;
           case 4:
                cout << "������� �������� �������" <<endl; 
                cin >>s;
                b=sqrt(s*4);
                a=sqrt((b*b)/2);
                h=b/2;
                cout <<"����������= "<<b<<endl<<"������= "<<h<<endl<<"�����= "<<a<<endl;break;
                }
    system("PAUSE");
    return EXIT_SUCCESS;
}

