#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

double y(const double x);
/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */
int main()
{
    const auto leftBound = 1.0;
    const auto rightBound = 0.5;
    const auto step = 0.1;
	
	/// leftBound - левая переменная в константе х
	/// rightBound - правая переменная  в константе х
	/// step - шаг,

    auto x = leftBound;
    while ((x < rightBound) || (abs(x - rightBound) < step))
	    ///Данный цикл (while )выполняет определенные действия, пока условие истинно. Структура цикла while.
	    ///Цикл while имеет самую простую структуру из всех циклов (по сравнению с тем же циклом for).
	    ///abs- модуль числа, предположительно, нам важно, что бы числа е были отрицательными
    {
        cout << "x = " << setprecision(2) << x << " y =  " << setprecision(5) << y(x) << endl;
	   //// setprecision - точность вывода чисел (по умолчанию равна 6. Чтобы более корректно выводить информацию.
        x += step;
	    /// Состваной оператор сложения и присваивания " += "
    }
    return 0;
}

double y(const double x)
{
    return x + cos(pow(x, 0.52) + 2);
	/// Функция, по которой происходит расчет
	/// pow(x,y)-возведенеие в степень ,х- число, у - степень
}
