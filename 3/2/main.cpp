#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    setlocale(0,"");
    float y,x;
    cout << "Вычислить значение функции. Введите х" <<endl;
    cin >> x;
    
    if (x<=3) y=-x*x+3*x+9;
    else y=x/(x*x+1);
    
    cout << "F(x)=" << y <<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
