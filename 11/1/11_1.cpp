#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main () {
    setlocale ( 0, "" ); // перекодировка windows-1251 -> OEM при выводе4
    const int n=100;
    char namein [n], nameout [n];
	cout << "Написать программу, которая запрашивает Ваше имя и здоровается с Вами.\n";
    cout << "Пожалуйста, напишите свое имя.\n";
    
	cin >> namein; // приняли строку в кодировке OEM
    
	OemToCharBuff ( namein, nameout, n ); // перекодировали из OEM в windows-1251

    cout << "Привет, " << nameout << "!\n";

    getch ();
    return 0;
}

