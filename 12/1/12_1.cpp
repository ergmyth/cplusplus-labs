#include <fstream>
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main () {
	setlocale ( 0, "" );
	srand ( time ( 0 ) );
	cout << "������� ����, ���������� �������� �������� ������ ������� �� ��������� ���������. ������� ��� �������� �� �����.\n";
	{	
		ofstream files ( "files.txt" );
		int n;
		cout << "������� ���������� ����� �����" << endl;
		while ( true ) {
			cin >> n;
		
			if ( ( n < 1 ) || ( !cin ) ) { 	
				cout << "�������� ����. ������� ���������� ����������� � ���� ����� �����." << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); 
			}
			else break;
   		}
		
		cout << "������� �������� �������� �����" << endl;
		int lev, prav;
		while ( true ) {
			cin >> lev >> prav;
		
			if ( ( lev >= prav ) || ( !cin ) ) { 	
				cout << "�������� ����. ������� ���������� ��������! (������ ��������� ������ ����� � ������ �������� ������ ���� ������ �������)" << endl;
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
