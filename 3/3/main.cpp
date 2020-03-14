#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    setlocale(0,"");
    int x;
    cout << "Дано трехзначное число. Выяснить, различны ли его цифры. Если да, то проверить их на четность, иначе найти удвоенную сумму цифр. Введите 3-х значное число" <<endl;
    cin >>x;
    if (x>99 && x<1000) {
    
       if(x%10!=x/10%10 && x%10!=x/100 && x/10%10!=x/100) {
 
               if (x%10%2==0)  cout << "3-четная"<<endl; 
                  else cout <<"3-нечетная" <<endl;
               if (x/10%10%2==0) cout <<"2-четная"<<endl;
                  else cout <<"2-нечетная" <<endl;
               if (x/100%2==0) cout <<"1-четная"<<endl;
                  else cout <<"1-нечетная" <<endl;}
            else {cout<<"Их удвоенная сумма= "<<((x%10+x/10%10+x/100)*2)<< endl;}
            ;} 
            else cout << "Число не 3-х значное" <<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
