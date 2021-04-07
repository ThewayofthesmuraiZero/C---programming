
#include <iostream>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    double a, v, sp, sg;
    int b;

    cout << " Введите грань: \n";
    cin >> a;

    cout << " Выберете что хотите посчитать\n";
    cout << " 1 - Объем \n";
    cout << " 2 - Площадь полной поверхности \n";
    cout << " 3 - Площадь грани \n";

    cin >> b;

    switch (b)
    {
        case 1:
            v = a * a * a;
            cout << " Объем =" << v << " \n";
            break;

        case 2:
            sp = 6 * a * a;
            cout << " Площадь полной поверхности = " << sp << " \n";
            break;

        case 3:
            sg = a * a;
            cout << " Площадь грани = " << sg << " \n";
            break;
    }
 return 0;
}