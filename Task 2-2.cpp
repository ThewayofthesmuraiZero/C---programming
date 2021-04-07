#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

int main() 
{

    setlocale(LC_ALL, "RUSSIAN");
    
    const double a = 0.3;

    double x;
    cout << "Введите переменную х = ";
    cin >> x;
    double result;

    if ((x * a) < 1)
    {
        result = a* sin((x * x - 1) / 10);
        cout << "При условии ((x * a) < 1) => y = " << setprecision(15) << result;
    }
    else ((x * a) >= 1);
    {
        result = a* cos((x - 1) / 10);
        cout << "При условии ((x * a) => 1) => y = " << setprecision(15) << result;
    }
    return(0);
}
