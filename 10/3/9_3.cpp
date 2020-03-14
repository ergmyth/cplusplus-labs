#include <iostream> 
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int func_f ( int u, int t ) {
	int result;
	if ( ( u > 0 ) && ( t > 0 ) )
		result = 2 * u * u + t * t;
	if ( ( u > 0 ) && ( t <= 0 ) )
		result = 5 * u - 4 * t;
	if ( ( u <= 0 ) && ( t > 0 ) )
		result = 2 * u + 5 * t;
	if ( ( u <= 0 ) && ( t <= 0 ) )
		result = u * t - 5;
	
   	return result;
}

int main () {
	setlocale ( 0 , "" );
	float a, b, z;
	
	cout << "Вычислить значение z = 3f( 3a, b - 5 ) + 2f( a - 1, b ) + 4f( a + 21, sin ( b ) )" << endl;
	for ( int i = 0 ; i < 2 ; i++ ) { 
		if ( i == 0 )
			cout << "Введите a" << endl;
		else 
			cout << "Введите b" << endl;
			
		while ( true ) {
			if ( i == 0 )
				cin >> a;
			else 
				cin >> b;
		
			if ( !cin ) {	
				cout << "Неверный ввод. Введите числа!" << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); // дважды вызвать функцию передав дважды значения и узнать сумму и произведение
			}
			else break;
    	}	
	}
/*	int c,d,e;
		c=3 * func_f( 3 * a, b - 5 );
		d=2 * func_f( a - 1, b );
		e=4 * func_f( a + 21, sin ( b ) );
*/
	z = 3 * func_f( 3 * a, b - 5 ) + 2 * func_f( a - 1, b ) + 4 * func_f( a + 21, sin ( b ) );
	cout << "z = " << z << endl; //<< c << d << e << endl;
}
