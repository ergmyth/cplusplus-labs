#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
//7_4 ломается при диапазоне -0 -0

int main(int argc, char** argv) {
	setlocale ( 0 , "" );
	int i, k;
	int a = 0;
	int max, imax;
	int lev, prav;
	int n;		
	cout << "В заданный массив вставить заданное число перед максимальным из отрицательных элементов" << endl;//Максимальный отрицательный????? Ближе к 0 или дальше от 0?
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
    
	int mas [n+1];	
	cout << "Введите желаемый диапазон чисел" << endl;
	
	while ( true ) { //запуск вечного цикла, также есть for(;;) или можно написать while(1) также работает и с repeat
		cin >> lev >> prav;
		
		if ( ( lev >= prav ) || ( !cin ) ) { 	
			cout << "Неверный ввод. Введите правильный диапазон! (должны вводиться только числа и первое значение должно быть меньше второго)" << endl;
			cin.clear(); 
			while ( cin.get() != '\n' ); //ожидание ввода до символа перехода строки
		}
		else break;
    }
	
	cout << "Введите вставляемое число" << endl;
	while ( true ) {
		cin >> k;
		
		if ( !cin ) {	
			cout << "Неверный ввод. Введите число!" << endl;
			cin.clear(); 
			while ( cin.get() != '\n' ); 
		}
		else break;
    }
    
	srand ( time ( 0 ) );
	for ( i = 0 ; i < n ; i++ ) {
		mas [i] = rand()%( -lev + prav + 1 ) + lev;
		cout << mas [i] << "\t";
	}
	
	cout << endl;
	max = lev;//*
	//Будем вставлять перед ближайшим к нулю
	for ( i = 0 ; i < n ; i++ )
		if ( ( mas [i] > max ) && ( mas [i] < 0 ) ) {//*
			max = mas [i];
			imax = i;
			a++;
		}
		
	if ( a != 0 ) {
		cout << "Индекс максимального отрицательного элемента = " << imax << endl;
		cout << "Измененный массив" << endl;
		//чтобы вставить после, а не перед, надо убрать знак равно из цикла и в условии увеличить imax на единицу
		for ( i = n ; i >= imax ; i-- ) { 
			mas [i] = mas [i-1];  
			if ( i == imax ) 
				mas [i] = k;
		}
	
		for ( i = 0 ; i < n + 1 ; i++ )
			cout << mas [i] << "\t";
	}
	
	else
		cout << "В массиве отсутствуют отрицательные элементы" << endl;
	return 0;
}
