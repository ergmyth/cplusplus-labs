#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale ( 0 , "" );
	int i;
	int min, imin;
	int lev, prav;
	int n;	
	int a = 0;	
	cout << "В заданном массиве. Удалить наименьшший из положительных элементов" << endl;
	cout << "Введите размер массива" << endl;
	
	while ( true ) {
		cin >> n;
		
		if ( ( n <= 1 ) || ( !cin ) ) {	
			cout << "Неверный ввод. Введите правильный размер массива! (должны вводиться только числа >1)" << endl;
			cin.clear(); 
			while ( cin.get() != '\n' ); 
		}
		else break;
    }
    
	int mas [n];	
	cout << "Введите желаемый диапазон чисел" << endl;
	srand ( time ( 0 ) );
	
	while ( true ) { 					 //запуск вечного цикла, также есть for(;;) или можно написать while(1) также работает и с repeat
		cin >> lev >> prav;
		
		if ( ( lev >= prav ) || ( !cin ) ) {	
			cout << "Неверный ввод. Введите правильный диапазон! (должны вводиться только числа и первое значение должно быть меньше второго)" << endl;
			cin.clear(); 
			while ( cin.get() != '\n' );   //ожидание ввода пока не перейдет на след строку
		}
		else break;
    }

	for ( i = 0 ; i < n ; i++ ) {
		mas [i] = rand()%( lev * -1 + prav + 1 ) + lev;//шаг и откуда начинаем
		cout << mas [i] << "\t";
	}
	
	cout << endl;
	min = prav;
	
	for ( i = 0 ; i < n ; i++ )
		if ( ( mas [i] < min ) && ( mas [i] > 0 ) ) {
			min = mas [i];
			imin = i;
			a++;
		}
		
	if ( a != 0 ) {
		cout << "Индекс минимального положительного элемента = " << imin << endl;
		cout << "Измененный массив" << endl;
	
		for ( i = imin ; i < n - 1 ; i++ )
			mas [i] = mas [i+1];
	
		for ( i = 0 ; i < n - 1 ; i++ )
			cout << mas[ i] << "\t";
	}
	else
		cout << "Положительные элементы в заданном массиве отсутствуют" << endl;
		
	return 0;
}
