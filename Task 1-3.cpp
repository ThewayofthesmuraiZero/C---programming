  
#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>


double ConvertToMetrs(const double metr);
ddouble GetEnergy(const double stiffness, const double displacement);

int main()
{
    double metrmm, displacement;
    std::cout << "Введите размер растяжения пружины в мм и коэффициент жесткости в Н/м, чтобы найти потенциальную энергию пружины\n";
    std::cin >> metrmm >> displacement;

    const auto metrmm = ConvertToMetrs(metrmm);
    const auto energy = GetEnergy(metrmm, displacement);

    std::cout << "Потенциальная энергия пружины равна " << energy;
    return 0;
}


double ConvertToMetrs(const double metr);
{
    const auto mm = 1000;
	return mm / metr;
}
/**
 * \brief Метод перевода миллиметров в метры
 * \mm - миллиметры 
 * \return миллиметры в метры
 */

double GetEnergy(const double stiffness, const double displacement);
{
    return (displacement * pow(displacement, 2)) / 2;
}

/**
 *   \brief Метод расчёта потенциальногй энергии в СИ.
 *
 *   \param metr метры (кг).
 *   \param displacement коэффициент жесткости (Н/м)
 */
