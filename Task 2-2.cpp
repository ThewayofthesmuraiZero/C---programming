
#define _USE_MATH_DEFINES // for C++
#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

/**
 * \brief Функция расчета для случая, когда x*а <= 1.
 * \const double x Входная величина.
 * \const double a Входная величина.
 * \return Значение функции.
 */

double f1(const double x, const double a);

/**
 * \brief Функция расчета для случая, когда x <= a.
 * \param x Входная величина.
 * \param a Входная величина.
 * \return Значение функции.
 */

double f2(const double x, const double a);

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */

int main() 
{
    setlocale(LC_ALL, "RUSSIAN");
       const auto a = 0.3;
    double x;
    cout << "Введите переменную x = ";
    cin >> x;
    if ( x * a < 1 )
    {
        cout << "y = " << f1(x, a);
    }
    else
    {
        cout << "y = " << f2(x, a);
    }
    
    return(0);
}

double f1(const double x, const double a)
{
    return a * sin((x * x - 1) / 10);
}

double f2(const double x, const double a)
{
    return a * cos((x - 1) / 10);
}
