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
double Algebra(const double a, const double b);
double Geometria(const double a, const double b);
/**
 * \а - первое число
 * \B -второе число
 * \ Algebra - для рассчета среднего арифметического
 * \Geometria - для рассчета среднего модуля геометрического
 */
int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    cout << "Введите первое число для рассчета среднего арифмеического кубов и среднего геометрического модулей этих чисел";
     double a;
    cin >> a;
    
    cout << "Введите второе число для рассчета среднего арифмеического кубов и среднего геометрического модулей этих чисел";
   double  b;
    cin >> b;
    
    const auto  Algebra = Algebra(a, b); 
    cout << " среднеге арифмеическое кубов и = " << Algebra << "\n";
    
    const auto Geometria = Geometria(a, b);
    cout << " среднее геометрическое модулей чисел = " << Geometria << "\n";
    ///cout << (a * a * a + b * b * b)/2 << "  " << sqrt(fabs(a * b)) << "\n";
    /**
    * \ находим среднее арифметическое — (а^3*b^3)/2
    * \ находим среднее геометрическое — √|a*b| 
    * \  sqrt- квадратный корень числа fabs-модуль числа
    */
  
return(0);
}

 double Algebra(const double a, const double b)
{
    return (a * a * a + b * b * b)/2;
}
 double Geometria(const double a, const double b)
{
    return sqrt(fabs(a * b));
}

