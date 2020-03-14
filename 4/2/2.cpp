#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int x,y,z; 
 	x=20; 
	for (x;x<=31;) 
	{ 
	if (x+x*y==z*z) {cout<<x<<" "<<y<<" "<<z<<" "<<endl;} z++;
	if (z==31) {z=20;y++;} 
	if (y==31) {y=20;x++;} 
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}
