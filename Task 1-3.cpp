#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>


double ConvertStretching(const double metr);
double Stiffnesscoefficient(const double power, const double metr);


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double Stretching, Stiffnesscoefficient;
	std::cout << " Введите размер растяжения пружины в мм и коэффициент жесткости в Н/м, чтобы найти потенциальную энергию пружины ";
    std::cin >> Stretching >> Stiffnesscoefficient;

	const auto metr = ConvertStretching(Stretchin);
	const auto  energy = fnesscoefficient(const double power, const double metr);

	std::cout << "Потенциальная энергия пружины равна " << energy << ;
		
	return 0;
}


double ConvertStretching(const double metr);
{ 
	const auto mm = 1000;
	return mm * metr;
}

double Stiffnesscoefficient(const double power, const double metr);
{
	return (mm * pow(mm, 2)) / 2;
}
