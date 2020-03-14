#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
             int i;
              setlocale(0,"");
              cout<<"Посчитать сумму от 5 до 13 по формуле"<<endl;
             float s;
             s=0;
             i=5;
             for (i;i<=13;i++)
             {
                 if ((i*i*i-3*i*i+4*i)!=0)
                 {
                    s=s+(i-2.0)/(i*i*i-3*i*i+4*i);
                 }
             }
             cout<<"Summa - "<<s<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
