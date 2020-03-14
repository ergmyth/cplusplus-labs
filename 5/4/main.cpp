#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int x,a,k,b,c;k=1;
     setlocale(0,"");
    cout<<"Дано натуральное число. Заменить предпоследнюю цифру числа на 6 (цифры числа нумеруются справа налево). Enter number >9"<<endl;
    cin>>x;b=x;
    if (x<10) cout<<"nevernyi vvod"<<endl;
    else
 {
    if (x<100)
       {
a=(x%10)+60;cout<<"otvet - "<<a<<endl;
       }  
   else 
     {
    do  
          {
            x=x/10; k++;  if (x<100) {c=pow(10,k-1); a=(x/10)*pow(10,k)+6*pow(10,k-1)+b%c;}
          } 
    while (x>100);cout<<"otvet - "<<a<<endl;
	 }
    system("PAUSE");
    return EXIT_SUCCESS;
 }
}
