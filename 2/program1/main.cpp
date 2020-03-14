#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
	double x,y,z,a,b;
	setlocale(0,"");
	cout<<"Даны вещественные x, y, z. Вычислить а, b. Enter real x,y,z"<<endl;
	cin>>x>>y>>z;
	a=(sqrt(fabs(x+y))-pow(fabs(x),1/3.0))/(sin(x+y+z));
	b=log(pow(y,3.0/2)+5*sin(x)+pow(z,1/3.0));
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
