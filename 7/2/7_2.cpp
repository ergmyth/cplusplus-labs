#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale ( 0 , "" );
	int i;
	int max, imax, min, imin, secondmax, isecondmax;
	int k = 0 , b = 0;
	const int n = 10;
	int mas [n];
	
	cout << "����� � ������� ������ �� �������� ������� � ��� ���������� �����" << endl;
	cout << "�������� ������ ��� ������������� ��-��, �� 1-�� min � ��������� ��� ������������� ��-�� ����� 1-�� max" << endl;
	
	srand ( time ( 0 ) );
	for ( i = 0 ; i < n ; i++ ) {
		mas[i] = rand()%31 - 20;
		cout << mas[i] << "\t";
	}
	
	cout << endl;
	max = mas [0];
	min = mas [0];
	imax = 0;
	secondmax = 0;
	
	for ( i = 1 ; i < n ; i++ ) {
		if ( max < mas [i] ) {
			if ( k != 0 ){
				secondmax = max;
				isecondmax = imax;
			}
			k++;
			max = mas [i];
			imax = i;
		}
		if ( min > mas [i] ) {
			min = mas [i];
			imin = i;
		}	
	}
	
	for ( i = 0 ; i < n ; i++ ) {
		if ( ( mas [i] < max ) && ( mas [i] > secondmax ) ) {
			secondmax = mas [i];
			isecondmax = i;
		}
	}
	
	if ( ( k == 0 ) && ( secondmax == max ) )
		cout << "��� �������� ������� ����������" << endl;
		
	else {
		cout << "������ �� �������� ������� ������� = " << secondmax << "\t" << "������ = " << isecondmax << endl;
		cout << "������������ ������� = " << max << "\t" << "������ = " << imax << endl;
		cout << "����������� ������� = " << min << "\t" << "������ = " << imin << endl;
	}
	
	for ( i = 0 ; i < n ; i++ ) {
	if ( ( mas [i] < 0 ) && ( i < imin ) )
		mas [i] = 0;
	else if ( ( mas [i] > 0) && ( i > imax) ) 
		mas [i] = 1;
	}
	
	for ( i = 0 ; i < n ; i++ )
		cout << mas [i] << "\t";
	
	return 0;
}
