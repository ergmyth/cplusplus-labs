#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
             int i;
              setlocale(0,"");
              cout<<"ѕосчитать произведение от 4 до 14 по формуле"<<endl;
             float s;
             s=1;
             i=4;
             for (i;i<=14;i++)
             {
                 if ((i*i*i-8*i*i+6)!=0)
                 {
                    s=s+(1.0)/(i*i*i-8*i*i+6);
                 }
             }
             cout<<"Multiple - "<<s<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
