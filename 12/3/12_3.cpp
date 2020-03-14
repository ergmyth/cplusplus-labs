#include <fstream>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>
using namespace std;
int main () {
	setlocale ( 0, "" );
	srand ( time ( 0 ) );
	cout << "Создать файл, компоненты которого являются целыми числами из интервала [100;200]. Найти произведение последнего и К-го чисел.\n";
	{	
		ofstream files ( "files.txt" );
		int k;
		cout << "Введите количество целых чисел" << endl;
		while ( true ) {
			cin >> k;
	
			if ( ( k < 1 ) || ( !cin ) ) { 	
				cout << "Неверный ввод. Введите количество вставляемых в файл целых чисел." << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); 
			}
			else break;
   		}
		
    	for ( int i = 0 ; i < k ; i++ ) {
    		files << rand()%101	+ 100 << '\n';
  		}
	}
	
	{
		ifstream files ( "files.txt" );
    	int s1;
    	int n;
    	
    	cout << "Введите K" << endl;
		while ( true ) {
			cin >> n;
		
			if ( !cin ) { 	
				cout << "Неверный ввод. Введите корректное К." << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); 
			}
			else break;
   		}	
    
		while ( true ) {
			files >> s1;
			if ( files.eof () ) break;
    		cout << s1 << '\t';
		}
		s1 *= n;
		cout << "\nПроизведение K и последнего элемента файла = " << s1 << endl;
	}
	return 0;
}
