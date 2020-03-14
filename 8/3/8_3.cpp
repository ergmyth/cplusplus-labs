#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale ( 0 , "" );
	int i, j;
	int lev,prav;
	const int n = 10;
	int mas [n][n];
	int sum = 0;
	
	cout << "Введите желаемый диапазон чисел" << endl;
	
	while ( true ) { //запуск вечного цикла, также есть for(;;) или можно написать while(1) также работает и с repeat
		cin >> lev >> prav;
		
		if ( ( lev >= prav ) || ( !cin ) ) { 	
			cout << "Неверный ввод. Введите правильный диапазон! (должны вводиться только числа и первое значение должно быть меньше второго)" << endl;
			cin.clear(); 
			while ( cin.get() != '\n' ); 
		}
		else break;
    }
	
	srand ( time ( 0 ) );
	for ( i = 0 ; i < n ; i++ ) {
		for ( j = 0 ; j < n ; j++ ) {
			mas [i][j] = rand()%( prav - lev + 1 ) + lev;
			cout << mas [i][j] << "\t";
		}
		cout << endl;
	}
	int c;
	
	for ( j = 0 ; j < n ; j++ ) {
		c = 0;
		for ( i = 0 ; i < n ; i++ ) {
			if ( mas [i][j] < 0 ) {
				c++;
				if ( c == 3 )
					sum += mas [i][j];
			}
			if ( ( c < 3 ) && ( i == n-1 ) )
				cout << "В " << j + 1 << "-м столбце нет третьего отрицательного элемента" << endl;
		}
	}
	
	if ( sum == 0 )
		cout << "В массиве нет отрицательных элементов"	<< endl;
	else
		cout << "Сумма третьих отрицательных элементов каждого столбца = " << sum << endl;

	return 0;
}
