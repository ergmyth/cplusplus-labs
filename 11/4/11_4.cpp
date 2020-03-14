#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main(){
    setlocale ( 0, "" ); // перекодировка windows-1251 -> OEM при выводе
    char namein [100], nameout [100];
	cout << "ƒано предложение. «аменить в нем все буквосочетани€ 'ах' на 'ух'.\n";
    cout << "ѕожалуйста, напишите предложение.\n";
    
	cin.getline( namein , 100); // прин€ли строку в кодировке OEM
    
	OemToCharBuff ( namein, nameout, 100 ); // перекодировали из OEM в windows-1251
	int i;
	for ( i = 0 ; i < strlen ( nameout ) ; i++ )
		if ( ( nameout [i] == 'а' ) && ( nameout [i+1] == 'х' ) )
			nameout [i] = 'у';
    cout << "»змененна€ строка\n" << nameout << endl;

    getch ();
    return 0;
}
