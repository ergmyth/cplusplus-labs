#include <fstream>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>
using namespace std;
int main () {
	setlocale ( 0, "" );
	srand ( time ( 0 ) );
	cout << "������� ����, ���������� �������� �������� ������ ������� �� ��������� [100;200]. ����� ������������ ���������� � �-�� �����.\n";
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
    		files << rand()%101	+ 100 << '\n';
  		}
	}
	
	{
		ifstream files ( "files.txt" );
    	int s1;
    	int n;
    	
    	cout << "������� K" << endl;
		while ( true ) {
			cin >> n;
		
			if ( !cin ) { 	
				cout << "�������� ����. ������� ���������� �." << endl;
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
		cout << "\n������������ K � ���������� �������� ����� = " << s1 << endl;
	}
	return 0;
}
