#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    setlocale(0,"");
    int x;
    cout << "���� ����������� �����. ��������, �������� �� ��� �����. ���� ��, �� ��������� �� �� ��������, ����� ����� ��������� ����� ����. ������� 3-� ������� �����" <<endl;
    cin >>x;
    if (x>99 && x<1000) {
    
       if(x%10!=x/10%10 && x%10!=x/100 && x/10%10!=x/100) {
 
               if (x%10%2==0)  cout << "3-������"<<endl; 
                  else cout <<"3-��������" <<endl;
               if (x/10%10%2==0) cout <<"2-������"<<endl;
                  else cout <<"2-��������" <<endl;
               if (x/100%2==0) cout <<"1-������"<<endl;
                  else cout <<"1-��������" <<endl;}
            else {cout<<"�� ��������� �����= "<<((x%10+x/10%10+x/100)*2)<< endl;}
            ;} 
            else cout << "����� �� 3-� �������" <<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
