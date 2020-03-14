#include <iostream> 
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int func_max ( int mas[], int n ) {
	int i, max;
	max = mas [0];
	for ( i = 1 ; i < n ; i++ ) {
		if ( mas [i] > max )
			max = mas [i];
	}
   	return max;
}

int func_min ( int mas[], int n ) {
	int i, min;
	min = mas [0];
	for ( i = 1 ; i < n ; i++ ) {
		if ( mas [i] < min )
			min = mas [i];
	}
   	return min;
}

int main () {
	setlocale ( 0 , "" );
	const int n = 4;
	int i;
	cout << "���� 4 ����� �����. �������� ����� �� ����� Max � Min ����� ���� ������, ��������� ������������ ���������� �������� � ���������." << endl;
	int mas [n];
	for ( i = 0 ; i < n ; i++ ) { 
		cout << "������� " << i + 1 << "-� �����" << endl;
		while ( true ) {
			cin >> mas [i];
		
			if ( !cin ) {	
				cout << "�������� ����. ������� �����!" << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); // ������ ������� ������� ������� ������ �������� � ������ ����� � ������������
			}
			else break;
    	}	
	}
	cout << "������" << endl;
	for ( i = 0 ; i < n ; i++ )
		cout << mas [i] << "\t";
		
	cout << endl;
	
	int sum1 = 0, sum2;
	int	x = func_max( mas , n );
	int	y = func_min( mas , n );
	sum2 = x + y;
	for ( i = 0 ; i < n ; i++ )
		if ( ( mas [i] != x ) && ( mas [i] != y ) )
			sum1 += mas [i];
	
	if ( sum2 > sum1 )  
		cout << "����� ����������� � ����������� > ���� ������\n" << sum2 << " > " << sum1 << endl;
	else if ( sum2 < sum1 )
		cout << "����� ����������� � ����������� < ���� ������\n" << sum2 << " < " << sum1 << endl;
	else
		cout << "����� �����\n" << sum2 << " = " << sum1 << endl;
}
