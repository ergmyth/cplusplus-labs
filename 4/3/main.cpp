#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int x,y,z,s,k,n; s=0;k=0;
     setlocale(0,"");
    cout<<"��������� ���������, ������� ��������� ���������� � ����� ��������� ����� �� 15 �� ���������� ���� ������ ����� N, ������� ��� ������� �� 6 ���� ������� 2 ��� 3. Enter number >15"<<endl;
    cin>>n;
	if (n>15) {
 	x=15; 
	for (x;x<=n;x++) 
	{ 
	if ((x*x)%6==2 ||(x*x)%6==3) {s=s+x; k++;} 
	} cout<<"Kol-vo - "<<k<<endl<<"Summa - "<<s<<endl;}
	else cout<<"Invalid number"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
