#include <iostream> 
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int func_s ( int c1, int c2, int c3 ) {
	int sum = 0;
   	sum += c1 + c2 + c3;
   	return sum;
}

int func_m ( int c1, int c2, int c3 ) {
	int mult = 1;
   	mult *= c1 * c2 * c3;
   	return mult;
}

int main () {
	setlocale ( 0 , "" );
	int sum, fsum = 0; 
	int mult = 1, fmult = 1;
	int c1, c2, c3;
	const int n = 2;
	
	cout << "��������� ������������ ������ ����� � ������������ 3 ����� �����. ����� � �� ������� ����� � ������������ 6 ������ �����." << endl;
	
	for ( int i = 0 ; i < n ; i++ ) { 
		cout << "������� 3 ����� �����" << endl;
		
		while ( true ) {
			cin >> c1 >> c2 >> c3;
		
			if ( !cin ) {	
				cout << "�������� ����. ������� �����!" << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); // ������ ������� ������� ������� ������ �������� � ������ ����� � ������������
			}
			else break;
    	}	
    	
		sum = func_s ( c1, c2, c3 );
		fsum += sum;
		cout << "����� " << i+1 << "-� ���� ����� ����� = " << sum << endl;
		
		mult = func_m ( c1, c2, c3 );
		fmult *= mult;
		cout << "������������ " << i+1 << "-� ���� ����� ����� = " << mult << endl;
	}
	
	cout << "����� ����� = " << fsum << endl;
	cout << "����� ������������ = " << fmult << endl;
}
