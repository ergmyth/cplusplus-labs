#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main(){
    setlocale ( 0, "" ); // ������������� windows-1251 -> OEM ��� ������
    char namein [100], nameout [100];
	cout << "������ � ���������� �����. ������� �� ����� ��� ��������� ������.\n";
    cout << "����������, �������� �����.\n";
    
	cin >> namein; // ������� ������ � ��������� OEM
    
	OemToCharBuff ( namein, nameout, 100 ); // �������������� �� OEM � windows-1251
	int i;
	for ( i = 0 ; i < strlen(nameout) ; i++ )
		if ( i == strlen ( nameout ) - 1 )
    		cout << "��������� ����� ������ ����� - " << nameout [i] << endl;

    getch ();
    return 0;
}
