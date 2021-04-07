#define USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
using namespace std;

int Square (int length);
double Divide (double devident, double devider);
bool isEven(int value);

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    double x = 2.2;
    double y = 9.2;
    double z = 10.2;
    const auto a = (log(2.718281) * (z + x * x) + sin((x / y) * sin((x/y))));
    const auto b = exp(-z)*((x + sqrt(x + z))/(x - sqrt(abs(x - y))));

    cout << a << ' ' << b;
}
