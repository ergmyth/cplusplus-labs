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
	
	cout << "������� �������� �������� �����" << endl;
	
	while ( true ) { //������ ������� �����, ����� ���� for(;;) ��� ����� �������� while(1) ����� �������� � � repeat
		cin >> lev >> prav;
		
		if ( ( lev >= prav ) || ( !cin ) ) { 	
			cout << "�������� ����. ������� ���������� ��������! (������ ��������� ������ ����� � ������ �������� ������ ���� ������ �������)" << endl;
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
				cout << "������� �������������� " << i + 1 << "-� ������ = " << avg_a << endl;
				cout << "������� �������������� " << i + 1 << "-� ������ = " << avg_g <<endl;
			}
			
			else if ( ( avg_a == 0 ) && ( j == m-1 ) )
				cout << "� ������ ����������� ������������� ��������" << endl;	
		}
	}
	return 0;
}
	
