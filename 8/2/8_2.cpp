#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale ( 0 , "" );
	int i, j;
	int lev,prav;
	float avg_a = 0, avg_g = 1;
	const int n = 5, m = 4;
	int mas [n][m];
	int avg_a_c = 0, avg_g_c = 0;
	
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
		for( j = 0 ; j < m ; j++ ) {
			mas [i][j] = rand()% ( prav - lev + 1 ) + lev;
			cout << mas [i][j] << "\t";
		}
		cout << endl;
	}
	
	for( i = 0 ; i < n ; i++ ) {
		avg_a = 0;
		avg_g = 1;
		
		for ( j = 0 ; j < m ; j++ ) {
			if ( mas [i][j] > 0 ) {
				avg_a += mas [i][j];
				avg_a_c++;
				avg_g *= mas [i][j];
				avg_g_c++;
			}
			
			if ( ( avg_a != 0 ) && ( j == m-1 ) ) {
				avg_a /= avg_a_c;
				avg_g /= avg_g_c;
				cout << "Среднее арифметическое " << i + 1 << "-й строки = " << avg_a << endl;
				cout << "Среднее геометрическое " << i + 1 << "-й строки = " << avg_g <<endl;
			}
			
			else if ( ( avg_a == 0 ) && ( j == m-1 ) )
				cout << "В строке отсутствуют положительные элементы" << endl;	
		}
	}
	return 0;
}
	
