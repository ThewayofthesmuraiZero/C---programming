#include <iostream>
#include <cmath>

using namespace std;
/**
 * \brief
 * \ Определить является ли треугольник остроугольным?
 * \param a - первая сторона стреугольника
 * \param b - вторая сторона стреугольника
 * \param c - вторая сторона стреугольника
 * \return true при условии, что треугольник возможно построить, после ответить ли он остроугольным?
 */
bool isTriangleExists(const double a, const double b, const double c);
/**
 * \brief
 * Возможно ли построить треугольник
 * \TriangleRules - Правила существования треуголника\
 */


/**
 * \brief Точка входа в программу
 * \return код ошибки. 0 - успех
 */
int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    cout << "Введите 3 числа, чтобы построить треугольник\n";
    double a, b, c;
    cin >> a >> b >> c;
    const auto result = isTriangleExists(a, b, c)
        ? "Треугольник возможно построить"
        : "Треугольник остроугольный";
    cout << result;
    return 0;
}

bool isTriangleExists(const double a, const double b, const double c)
{
    return (a + b > c || a + c > b || b + c > a) == ((a * a + b * b = c * c) || (a * a + c * c = b * b) || (b * b + c * c = a * a) ;
}

