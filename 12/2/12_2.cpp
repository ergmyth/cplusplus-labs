#include <fstream>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>
using namespace std;
int main () {
	setlocale ( 0, "" );
	srand ( time ( 0 ) );
	cout << "������� ����, ���������� �������� �������� ������ ������� �� ��������� [-5;10]. ����� ����� � ��� ������: �������� ��� �������������?\n";
	{	
		ofstream files ( "files.txt" );
		int k;
		cout << "������� ���������� ����� �����" << endl;
		while ( true ) {
			cin >> k;
		
			if ( ( k < 1 ) || ( !cin ) ) { 	
				cout << "�������� ����. ������� ���������� ����������� � ���� ����� �����." << endl;
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
			cout << "���������� ������������� ������ \t" <<  o << " > " << n << endl;
		else if ( n > o )
			cout << "���������� �������� ������ \t" <<  o << " < " << n << endl;
		else
			cout << "��� ����� \t" <<  o << " = " 	 << n << endl;
	}
	return 0;
}
