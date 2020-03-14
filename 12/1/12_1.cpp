#include <fstream>
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main () {
	setlocale ( 0, "" );
	srand ( time ( 0 ) );
	cout << "Создать файл, компоненты которого являются целыми числами из заданного интервала. Вывести его элементы на экран.\n";
	{	
		ofstream files ( "files.txt" );
		int n;
		cout << "Введите количество целых чисел" << endl;
		while ( true ) {
			cin >> n;
		
			if ( ( n < 1 ) || ( !cin ) ) { 	
				cout << "Неверный ввод. Введите количество вставляемых в файл целых чисел." << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); 
			}
			else break;
   		}
		
		cout << "Введите желаемый диапазон чисел" << endl;
		int lev, prav;
		while ( true ) {
			cin >> lev >> prav;
		
			if ( ( lev >= prav ) || ( !cin ) ) { 	
				cout << "Неверный ввод. Введите правильный диапазон! (должны вводиться только числа и первое значение должно быть меньше второго)" << endl;
				cin.clear(); 
				while ( cin.get() != '\n' );
			}
			else break;
    	}
    	
    	for ( int i = 0 ; i < n ; i++ )
    		files << rand()%( -lev + prav + 1 ) + lev << '\n';
	}
	
	{
		ifstream files ( "files.txt" );
    	char ss [20] ;
    	while ( true ) {
			files.getline( ss, 20 );
    		if ( files.eof () ) break;
    		cout << ss << '\t';
		}
	}
	return 0;
}
