#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
//7_4 �������� ��� ��������� -0 -0

int main(int argc, char** argv) {
	setlocale ( 0 , "" );
	int i, k;
	int a = 0;
	int max, imax;
	int lev, prav;
	int n;		
	cout << "� �������� ������ �������� �������� ����� ����� ������������ �� ������������� ���������" << endl;//������������ �������������????? ����� � 0 ��� ������ �� 0?
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
    
	int mas [n+1];	
	cout << "������� �������� �������� �����" << endl;
	
	while ( true ) { //������ ������� �����, ����� ���� for(;;) ��� ����� �������� while(1) ����� �������� � � repeat
		cin >> lev >> prav;
		
		if ( ( lev >= prav ) || ( !cin ) ) { 	
			cout << "�������� ����. ������� ���������� ��������! (������ ��������� ������ ����� � ������ �������� ������ ���� ������ �������)" << endl;
			cin.clear(); 
			while ( cin.get() != '\n' ); //�������� ����� �� ������� �������� ������
		}
		else break;
    }
	
	cout << "������� ����������� �����" << endl;
	while ( true ) {
		cin >> k;
		
		if ( !cin ) {	
			cout << "�������� ����. ������� �����!" << endl;
			cin.clear(); 
			while ( cin.get() != '\n' ); 
		}
		else break;
    }
    
	srand ( time ( 0 ) );
	for ( i = 0 ; i < n ; i++ ) {
		mas [i] = rand()%( -lev + prav + 1 ) + lev;
		cout << mas [i] << "\t";
	}
	
	cout << endl;
	max = lev;//*
	//����� ��������� ����� ��������� � ����
	for ( i = 0 ; i < n ; i++ )
		if ( ( mas [i] > max ) && ( mas [i] < 0 ) ) {//*
			max = mas [i];
			imax = i;
			a++;
		}
		
	if ( a != 0 ) {
		cout << "������ ������������� �������������� �������� = " << imax << endl;
		cout << "���������� ������" << endl;
		//����� �������� �����, � �� �����, ���� ������ ���� ����� �� ����� � � ������� ��������� imax �� �������
		for ( i = n ; i >= imax ; i-- ) { 
			mas [i] = mas [i-1];  
			if ( i == imax ) 
				mas [i] = k;
		}
	
		for ( i = 0 ; i < n + 1 ; i++ )
			cout << mas [i] << "\t";
	}
	
	else
		cout << "� ������� ����������� ������������� ��������" << endl;
	return 0;
}
