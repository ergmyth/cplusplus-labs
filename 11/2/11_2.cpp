#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main(){
    setlocale ( 0, "" ); // перекодировка windows-1251 -> OEM при выводе
    char namein [100], nameout [100];
	cout << "Ввести с клавиатуры слово. Вывести на экран его последний символ.\n";
    cout << "Пожалуйста, напишите слово.\n";
    
	cin >> namein; // приняли строку в кодировке OEM
    
	OemToCharBuff ( namein, nameout, 100 ); // перекодировали из OEM в windows-1251
	int i;
	for ( i = 0 ; i < strlen(nameout) ; i++ )
		if ( i == strlen ( nameout ) - 1 )
    		cout << "Последняя буква вашего слова - " << nameout [i] << endl;

    getch ();
    return 0;
}
