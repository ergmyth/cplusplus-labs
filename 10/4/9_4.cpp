#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int func_sum ( int x ) {
	x = x / 1000 % 10 + x / 10 % 10;
   	return x;
}

int main () {
	setlocale ( 0 , "" );
	int k = 1, n;
	int i;
	cout << "Даны 3 пятизнанчых числа. В каком из них сумма 2 и 4 цифр больше (Составить подпрограмму поиска суммы двух цифр)." << endl;
	for ( i = 0 ; i < k ; i++ ) { 
		cout << "Введите количество пятизначных чисел" << endl;
		while ( true ) {
			cin >> n;
		
			if ( !cin ) {	
				cout << "Неверный ввод. Введите количество пятизначных чисел!" << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); // дважды вызвать функцию передав дважды значения и узнать сумму и произведение
			}
			else break;
    	}	
	}
	k = n; 
	int max, last_max = -1, imax;
	int mas [k];
		
	srand ( time ( 0 ) );
	for ( i = 0 ; i < k ; i++ ) {
		mas [k] = rand()%90000+10000;
		cout << mas [k] << "\t";
		max = func_sum (mas [k]);
		if ( max > last_max ) {
			last_max = max;
			imax = i;
		}
	}
	cout << endl;
	cout << "Сумма 2 и 4 цифр больше в " << imax+1 <<"-м числе, она равна - " << last_max << endl;
}
