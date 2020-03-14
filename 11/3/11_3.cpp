#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main(){
    setlocale ( 0, "" ); // перекодировка windows-1251 -> OEM при выводе
    char namein [100], nameout [100];
	cout << "Дано предложение. Определить количество букв 'в' в нем.\n";
    cout << "Пожалуйста, напишите предложение.\n";
    
	cin.getline( namein , 100); // приняли строку в кодировке OEM
    
	OemToCharBuff ( namein, nameout, 100 ); // перекодировали из OEM в windows-1251
	int i, k = 0;
	for ( i = 0 ; i < strlen ( nameout ) ; i++ )
		if ( nameout [i] == 'в' )
			k++;
    		cout << "Количество букв 'в' в Вашем предложении = " << k << endl;

    getch ();
    return 0;
}
