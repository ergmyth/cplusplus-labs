#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main () {
    setlocale ( 0, "" ); // ������������� windows-1251 -> OEM ��� ������4
    const int n=100;
    char namein [n], nameout [n];
	cout << "�������� ���������, ������� ����������� ���� ��� � ����������� � ����.\n";
    cout << "����������, �������� ���� ���.\n";
    
	cin >> namein; // ������� ������ � ��������� OEM
    
	OemToCharBuff ( namein, nameout, n ); // �������������� �� OEM � windows-1251

    cout << "������, " << nameout << "!\n";

    getch ();
    return 0;
}

