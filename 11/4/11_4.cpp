#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main(){
    setlocale ( 0, "" ); // ������������� windows-1251 -> OEM ��� ������
    char namein [100], nameout [100];
	cout << "���� �����������. �������� � ��� ��� �������������� '��' �� '��'.\n";
    cout << "����������, �������� �����������.\n";
    
	cin.getline( namein , 100); // ������� ������ � ��������� OEM
    
	OemToCharBuff ( namein, nameout, 100 ); // �������������� �� OEM � windows-1251
	int i;
	for ( i = 0 ; i < strlen ( nameout ) ; i++ )
		if ( ( nameout [i] == '�' ) && ( nameout [i+1] == '�' ) )
			nameout [i] = '�';
    cout << "���������� ������\n" << nameout << endl;

    getch ();
    return 0;
}
