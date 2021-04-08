// see https://docs.microsoft.com/ru-ru/cpp/c-runtime-library/math-constants?view=msvc-160
#define _USE_MATH_DEFINES // for C++

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    
    double a;
    double b;
    cout << "Введите два числа";
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    cout << (a * a * a + b * b * b)/2 << "  " << sqrt(fabs(a * b)) << "\n";

}

