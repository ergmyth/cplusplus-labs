#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    setlocale(0,"");
    float a,b,h,s;
    int x;
    cout<< "Выберите известный элемент прямоугольного равнобедренного треугольника" <<endl;
    cout << "1-катет а" <<endl<< "2-гипотенуза b" <<endl<< "3-высота h" <<endl<< "4-площадь S" <<endl;
    cin >> x;
    switch (x){
           case 1: 
                cout << "Введите значение катета" <<endl; 
                cin >>a;
                b=sqrt(a*a+a*a);
                h=b/2;
                s=(h*b)/2;
                cout <<"гипотенуза= "<<b<<endl<<"высота= "<<h<<endl<<"площадь= "<<s<<endl;break;
           case 2:
                cout << "Введите значение гипотенузы" <<endl; 
                cin >>b;
                h=b/2;
                s=(h*b)/2;
                a=sqrt((b*b)/2);
                cout <<"катет= "<<a<<endl<<"высота= "<<h<<endl<<"площадь= "<<s<<endl;break;
           case 3:
                cout << "Введите значение высоты" <<endl; 
                cin >>h;
                b=h*2;
                s=(h*b)/2;
                a=sqrt((b*b)/2);
                cout <<"гипотенуза= "<<b<<endl<<"катет= "<<a<<endl<<"площадь= "<<s<<endl;break;
           case 4:
                cout << "Введите значение площади" <<endl; 
                cin >>s;
                b=sqrt(s*4);
                a=sqrt((b*b)/2);
                h=b/2;
                cout <<"гипотенуза= "<<b<<endl<<"высота= "<<h<<endl<<"катет= "<<a<<endl;break;
                }
    system("PAUSE");
    return EXIT_SUCCESS;
}

