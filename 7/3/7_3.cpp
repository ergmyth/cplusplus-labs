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
	cout << "� �������� �������. ������� ����������� �� ������������� ���������" << endl;
	cout << "������� ������ �������" << endl;
	
	while ( true ) {
		cin >> n;
		
		if ( ( n <= 1 ) || ( !cin ) ) {	
			cout << "�������� ����. ������� ���������� ������ �������! (������ ��������� ������ ����� >1)" << endl;
			cin.clear(); 
			while ( cin.get() != '\n' ); 
		}
		else break;
    }
    
	int mas [n];	
	cout << "������� �������� �������� �����" << endl;
	srand ( time ( 0 ) );
	
	while ( true ) { 					 //������ ������� �����, ����� ���� for(;;) ��� ����� �������� while(1) ����� �������� � � repeat
		cin >> lev >> prav;
		
		if ( ( lev >= prav ) || ( !cin ) ) {	
			cout << "�������� ����. ������� ���������� ��������! (������ ��������� ������ ����� � ������ �������� ������ ���� ������ �������)" << endl;
			cin.clear(); 
			while ( cin.get() != '\n' );   //�������� ����� ���� �� �������� �� ���� ������
		}
		else break;
    }

	for ( i = 0 ; i < n ; i++ ) {
		mas [i] = rand()%( lev * -1 + prav + 1 ) + lev;//��� � ������ ��������
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
		cout << "������ ������������ �������������� �������� = " << imin << endl;
		cout << "���������� ������" << endl;
	
		for ( i = imin ; i < n - 1 ; i++ )
			mas [i] = mas [i+1];
	
		for ( i = 0 ; i < n - 1 ; i++ )
			cout << mas[ i] << "\t";
	}
	else
		cout << "������������� �������� � �������� ������� �����������" << endl;
		
	return 0;
}
