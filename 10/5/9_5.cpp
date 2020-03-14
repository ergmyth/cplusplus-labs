#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

unsigned long int func_fact ( unsigned long int n ) {
	if ( n == 1 )
		return 1;
	else 
		return	n*func_fact(n-1);
}

int main () {
	setlocale ( 0 , "" );
	int k,m,i;
	cout << "Написать подпрограмму вычисления факториала числа N. Используя ее, найти сумму: К! + (К+1)! + ... + М!" << endl;
	for ( i = 0 ; i < 2 ; i++ ) { 
		if ( i == 0 )
			cout << "Введите K" << endl;
		else 
			cout << "Введите M" << endl;
			
		while ( true ) {
			if ( i == 0 )
				cin >> k;
			else 
				cin >> m;
		
			if ( ( !cin ) || ( k >= m ) || ( k < 1 ) ) {	
				cout << "Неверный ввод. Введите подходящие числа!(вводимые числа должны быть положительные и должно соблюдаться условие М > K )" << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); // дважды вызвать функцию передав дважды значения и узнать сумму и произведение
			}
			else break;
    	}	
	}
	unsigned long int sum = 0;
	for ( i = k ; i <= m ; i++ ) {
		sum += func_fact( i );
		//	cout<<sum<<endl;
	}
	
	cout << "Сумма: К! + (К+1)! + ... + М! = " << sum << endl;
}
