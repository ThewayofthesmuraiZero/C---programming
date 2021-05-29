
#include <iostream>
using namespace std;

/// длина ребра куба
///найти по выбору пользователя - 1 площадь грани 2 площадь полной поверхности 3 объем

/**
 * \Facearea расчет площади грани куба
 * \TotalSurfaceArea площадь полной поверхности куба
 * \VolumeCube Объем куба
 * \cubeedge - ребро куба
 */

double FaceArea(const double cubeedge);

double TotalSurfaceArea(const double cubeedge);

double VolumeCube(const double cubeedge);



enum ActionChoice { FaceFrea, TotalSurfaceArea, VolumeCube };

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */

int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    cout << " Введите ребро куба  \n";
    double cubeedge;
    cin >> cubeedge;

    cout << " Выберете что хотите посчитать\n";
    cout << " 1 - Объем \n";
    cout << " 2 - Площадь полной поверхности \n";
    cout << " 3 - Площадь грани \n";
    int input;
    cin >> input;
   
    const auto choice = static_cast<ActionChoice>(input);

    switch (choice)
    {
        case Facearea:
        {
        const auto facearea = FaceFrea(cubeedge);
            cout << "Площадь грани= " << FaceFrea;
            break;
        }
        case totalSurfaceArea:
        {
            const auto totalSurfaceArea = TotalSurfaceAreaa(cubeedge);
            cout << "Площадь полной поверхности  = " << TotalSurfaceArea;
            break;
        }
       case VolumeCube:
        {
            const auto volumeCube = VolumeCube(cubeedge);
            cout << "Объем = " << VolumeCube;
            break;
        }
    }
 return 0;
}

double FaceFFrea(const double cubeedge)
{ 
 retutn cubeedge * cubeedge;
}
double TotalSurfaceArea(const double cubeedge)
{
 retutn  6 * cubeedge * cubeedge
}
double VolumeCube(const double cubeedge)
{
 retutn cubeedge * cubeedge * cubeedge;
}


