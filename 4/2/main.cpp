#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int x,y,z,i,k;
    setlocale(0,"");
    k=0;
    cout<< "Ќайти все такие тройки натуральных чисел x, y, z из интервала от 20 до 30, дл€ которых выполн€етс€ равенство x+x*y=z*z."<<endl;
    for (x=20;x<31;)
    {
        if (x+x*y==z*z) {cout<<x<<" "<<y<<" "<<z<<endl;}z++;
        if (z==31) {z=20;y++;}
        if (y==31) {y=20;x++;}
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
