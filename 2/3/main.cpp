#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int a,b,c,d,e,s,e2;
    setlocale(0,"");
    cout <<"Написать программу проверки: сумма цифр четырехзначного числа больше квадрата его последней цифры. Enter 4-digit number" <<endl;
    cin >> a;
    b=a/1000;
    c=a/100%10;
    d=a/10%10;
    e=a%10;
    s=b+c+d+e;
    e2=e*e;
    if (a>999 && a <10000) {
    if (s>e2) {
                                                  cout <<s<<" > "<<e2<<endl;}
                                                  else {
                                                  cout <<s<<" < "<<e2<<endl;};}
    else { cout << "Invalid number" <<endl;}
    system("PAUSE");
    return EXIT_SUCCESS;
}
