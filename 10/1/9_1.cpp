#include <iostream> 
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int func_s ( int c1, int c2, int c3 ) {
	int sum = 0;
   	sum += c1 + c2 + c3;
   	return sum;
}

int func_m ( int c1, int c2, int c3 ) {
	int mult = 1;
   	mult *= c1 * c2 * c3;
   	return mult;
}

int main () {
	setlocale ( 0 , "" );
	int sum, fsum = 0; 
	int mult = 1, fmult = 1;
	int c1, c2, c3;
	const int n = 2;
	
	cout << "Составить подпрограммы поиска суммы и произведения 3 целых чисел. Найти с их помощью сумму и произведение 6 данных чисел." << endl;
	
	for ( int i = 0 ; i < n ; i++ ) { 
		cout << "Введите 3 целых числа" << endl;
		
		while ( true ) {
			cin >> c1 >> c2 >> c3;
		
			if ( !cin ) {	
				cout << "Неверный ввод. Введите числа!" << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); // дважды вызвать функцию передав дважды значения и узнать сумму и произведение
			}
			else break;
    	}	
    	
		sum = func_s ( c1, c2, c3 );
		fsum += sum;
		cout << "Сумма " << i+1 << "-х трех целых чисел = " << sum << endl;
		
		mult = func_m ( c1, c2, c3 );
		fmult *= mult;
		cout << "Произведение " << i+1 << "-х трех целых чисел = " << mult << endl;
	}
	
	cout << "Общая сумма = " << fsum << endl;
	cout << "Общее произведение = " << fmult << endl;
}
