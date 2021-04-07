#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;
void  IsCalulted(const double x, double y);
void  y(const double x, const double y);

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	const auto leftBound = 1.0;
	const auto rightBound = 0.5;
	const auto step = 0.1;

	auto x = leftBound;
	cout << "x             y \n";

	while ((x < leftBound) || (abs(x - rightBound) < step))
	{
		double y;
		if ( IsCalulted(x, y))
		{
			cout << " x = " << setprecision(2) << x
				<< "y = " << setprecision(5) << y << endl;
			x += step;
		}
		else
		{
			cout << " x = " << setprecision(2) << x
				<< " not defined\n";
		}

	}



	void  IsCalulted(const double x, double y);
	{
		const auto IsCalulated = x >= 0;
	}
	
	void y(const double x, const double y);
	{
	    return x + cos(pow(x, 0.52) + 2);
	}
	return 0;

}