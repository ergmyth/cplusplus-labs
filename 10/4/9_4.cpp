#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int func_sum ( int x ) {
	x = x / 1000 % 10 + x / 10 % 10;
   	return x;
}

int main () {
	setlocale ( 0 , "" );
	int k = 1, n;
	int i;
	cout << "���� 3 ����������� �����. � ����� �� ��� ����� 2 � 4 ���� ������ (��������� ������������ ������ ����� ���� ����)." << endl;
	for ( i = 0 ; i < k ; i++ ) { 
		cout << "������� ���������� ����������� �����" << endl;
		while ( true ) {
			cin >> n;
		
			if ( !cin ) {	
				cout << "�������� ����. ������� ���������� ����������� �����!" << endl;
				cin.clear(); 
				while ( cin.get() != '\n' ); // ������ ������� ������� ������� ������ �������� � ������ ����� � ������������
			}
			else break;
    	}	
	}
	k = n; 
	int max, last_max = -1, imax;
	int mas [k];
		
	srand ( time ( 0 ) );
	for ( i = 0 ; i < k ; i++ ) {
		mas [k] = rand()%90000+10000;
		cout << mas [k] << "\t";
		max = func_sum (mas [k]);
		if ( max > last_max ) {
			last_max = max;
			imax = i;
		}
	}
	cout << endl;
	cout << "����� 2 � 4 ���� ������ � " << imax+1 <<"-� �����, ��� ����� - " << last_max << endl;
}
