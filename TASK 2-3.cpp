#include <iostream>
#include <cmath>

using namespace std;

/**
 * \brief
 * Функция определения является ли треугольник остроугольным?
 * \param a целое число
 * \param b целое число
 * \param c целое число
 * \return true при условии, что треугольник возможно построить, после является ли он остроугольным
 */
bool TriangleRules(const int a, const int b, const int c);
bool OstrTreangle(const int a, const int b, const int c);
/**
 * \brief Точка входа в программу
 * \return код ошибки. 0 - успех
 */
int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    cout << "Введите 3 числа, чтобы построить треугольник\n";
    int a, b, c;
    cin >> a >> b >> c;

    const auto result = TriangleRules(a, b, c)
        ? "Треугольник возможно построить"
        : "Треугольник нельзя построить ";
    
    const auto result2 = OstrTreangle(a, b, c)
        ? "Треугольник остроугольный"
        : "Треугольник не остроугольный ";  

    cout << result;
    cout << result2;

    return 0;
}

bool TriangleRules(const int a, const int b, const int c)
{
    return     (a + b > c || a + c > b || b + c > a) == (a + b < c || a + c < b || b + c < a) ;
}

bool OstrTreangle(const int a, const int b, const int c)
{
    return ((a * a + b * b = c * c) || (a * a + c * c = b * b) || (b * b + c * c = a * a) == (a * a + b * b != c * c) || (a * a + c * c != b * b) || (b * b + c * c != a * a));
}

///  (a* a + b * b = c * c) || (a * a + c * c = b * b) || (b * b + c * c = a * a);
///  (a + b > c || a + c > b || b + c > a) == (a + b < c || a + c < b || b + c < a);