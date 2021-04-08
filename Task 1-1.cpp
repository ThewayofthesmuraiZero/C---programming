#define USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
using namespace std;

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */

int Square (int length);
double Divide (double devident, double devider);
bool isEven(int value);

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    
    
   onst auto x = 2.2;
   onst auto y = 9.2;
   onst auto z = 10.2;
    
    const auto a = (log(2.718281) * (z + x * x) + sin((x / y) * sin((x/y))));
    const auto b = exp(-z)*((x + sqrt(x + z))/(x - sqrt(abs(x - y))));

    cout << "x = " << x << "; "
         << "y = " << y << "; "
         << "z = " << z << ";\n";

    cout << setprecision(10)
         << "a = " << a << "; "
         << "b = " << b << ";"
         << endl;
    
    return 0;
    
}
