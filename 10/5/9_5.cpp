#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

unsigned long int func_fact ( unsigned long int n ) {
	if ( n == 1 )
		return 1;
	else 
		return	n*func_fact(n-1);
}

int main () {
	setlocale ( 0 , "" );
	int k,m,i;
	cout << "�������� ������������ ���������� ���������� ����� N. ��������� ��, ����� �����: �! + (�+1)! + ... + �!" << endl;
	for ( i = 0 ; i < 2 ; i++ ) { 
		if ( i == 0 )
			cout << "������� K" << endl;
		else 
			cout << "������� M" << endl;
			
		while ( true ) {
			if ( i == 0 )
				cin >> k;
			else 
				cin >> m;
		
			if ( ( !cin ) || ( k >= m ) || ( k < 1 ) ) {	
				cout << "�������� ����. ������� ���������� �����!(�������� ����� ������ ���� ������������� � ������ ����������� ������� � > K )" << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); // ������ ������� ������� ������� ������ �������� � ������ ����� � ������������
			}
			else break;
    	}	
	}
	unsigned long int sum = 0;
	for ( i = k ; i <= m ; i++ ) {
		sum += func_fact( i );
		//	cout<<sum<<endl;
	}
	
	cout << "�����: �! + (�+1)! + ... + �! = " << sum << endl;
}
