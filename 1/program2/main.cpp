#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
	setlocale(0,"");
	int x,a,b,c,d;
	cout<<"���� �������������� �����. ����� �����, ���������� ��� ������������ ������ � ������� ���� ������� �����. Enter the four-digit number!"<<endl;
	cin>>x;
	cout<<"Old number - "<<x<<endl;
	a=x/100%10;
	b=x%100/10;
	c=x/1000;
	d=x%10;
	x=c*1000+b*100+a*10+d;
	cout<<"New number - "<<x<<endl;
	
	system("PAUSE");
    return EXIT_SUCCESS;
}
