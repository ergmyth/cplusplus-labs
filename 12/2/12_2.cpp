#include <fstream>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>
using namespace std;
int main () {
	setlocale ( 0, "" );
	srand ( time ( 0 ) );
	cout << "Создать файл, компоненты которого являются целыми числами из интервала [-5;10]. Каких чисел в нем больше: нечетных или отрицательных?\n";
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
    		files << rand()%16-5 << '\n';
    		
  		}
	}
	
	{
		ifstream files ( "files.txt" );
    	int s1;
    	int n = 0, o = 0;
    	while ( true ) {
			files >> s1;
			if ( files.eof () ) break;
			if ( s1 % 2 != 0) 
				n++;
			if ( s1 < 0 )
				o++;
    		cout << s1 << '\t';
		}
		cout << endl;
		if ( o > n )
			cout << "Количество отрицательных больше \t" <<  o << " > " << n << endl;
		else if ( n > o )
			cout << "Количество нечетных больше \t" <<  o << " < " << n << endl;
		else
			cout << "Они равны \t" <<  o << " = " 	 << n << endl;
	}
	return 0;
}
