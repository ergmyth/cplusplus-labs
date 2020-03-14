#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale ( 0 , "" );
	int i, j;
	int lev,prav;
	long int sum = 0, mult = 1;
	const int n = 5;
	int mas [n][n];
	
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
	for ( i = 0 ; i < n  ; i++ ){
		for ( j = 0 ; j < n  ; j++ ){
			mas [i][j] = rand()%( prav - lev + 1 ) + lev;
			cout << mas [i][j] << "\t";
		}
		cout << endl;
	}
	
	for ( i = 0 ; i < n ; i++ )
		for ( j = 0 ; j < n ; j++ ) {
			if ( i + j  == n - 1  ) 
				mult *= mas [i][j];

			if ( i == j ) {
				sum += mas [i][j];
			}
		}
	cout << "Произведение элементов побочной диагонали = " << mult << endl;
	cout << "Сумма элементов главной диагонали = " << sum <<endl;
	
	return 0;
}
