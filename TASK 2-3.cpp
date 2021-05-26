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

/// РЕШЕНИЕ НА С# - 
                                                     using System;

namespace AsyncTest
{
    class Triangle
    {
        private int firstSide, secondSide, thirdSide;
        
        public int FirstSide
        {
            get => firstSide; 
            set { if (value > 0) firstSide = value; }
        }

        /// firstSide - первая переменная для 1 сторны треугольника 
        /// secondSide - вторая переменная для 2 сторны треугольника 
        /// thirdSide - третья переменная для 3 сторны треугольника 
       
        public int SecondSide {
            get => secondSide;
            set { if (value > 0) secondSide = value; }
        }

        public int ThirdSide
        {
            get => thirdSide;
            set { if (value > 0) thirdSide = value; }
        }
    

        public Triangle(int firstSide, int secondSide, int thirdSide)
        {
            FirstSide = firstSide;
            SecondSide = secondSide;
            ThirdSide = thirdSide;
        }

        public bool IsTriangle()
        {
            if (firstSide + secondSide >= thirdSide && firstSide + thirdSide >= secondSide &&
                firstSide + thirdSide >= secondSide) return true;
            else return false;
        }
        
        /// Проверка условий на существование треугольника

        public string TriangleType()
        {
            if (this.IsSharpTriangle()) return "Остроугольный";
            if (this.IsRightTriangle()) return "Прямоугольный";
            else return "Тупоугольный";
        }

        private bool IsSharpTriangle()
        {
            return Math.Pow(firstSide, 2) + Math.Pow(secondSide, 2) > Math.Pow(thirdSide, 2) 
                    && Math.Pow(secondSide, 2) + Math.Pow(thirdSide, 2) > Math.Pow(firstSide, 2) 
                    && Math.Pow(thirdSide, 2) + Math.Pow(firstSide, 2) > Math.Pow(secondSide, 2) ? true : false;
        }

        private bool IsRightTriangle()
        {
            return Math.Pow(firstSide, 2) + Math.Pow(secondSide, 2) == Math.Pow(thirdSide, 2)
                    || Math.Pow(secondSide, 2) + Math.Pow(thirdSide, 2) == Math.Pow(firstSide, 2)
                    || Math.Pow(thirdSide, 2) + Math.Pow(firstSide, 2) == Math.Pow(secondSide, 2) ? true : false;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            // Данным методом мы вводим данные поочерди , каждую сторону
            int firstSide, secondSide, thirdSide;

            Console.WriteLine("Введите 1 сторону: ");
            firstSide = IsNumbers();
            Console.WriteLine("Введите 2 сторону: ");
            secondSide = IsNumbers();
            Console.WriteLine("Введите 3 сторону: ");
            thirdSide = IsNumbers();

            Triangle triangle = new Triangle(firstSide, secondSide, thirdSide);
            triangle.SecondSide = 4;
            if (triangle.IsTriangle())
            {
                Console.WriteLine("Такой треугольник существует!");
                Console.WriteLine(triangle.TriangleType());
            }
            
            
            else Console.WriteLine("Треугольник не существует!");
        }
            // Проверка вводимых значений, важно что бы были только числа
        
        private static int IsNumbers()
        {
            
            bool isNumber;
            int number;

            do
            {
                isNumber = int.TryParse(Console.ReadLine(), out number);
                if (!isNumber || number < 0)
                {
                    Console.WriteLine("Повторите ввод");
                }
            } while (!isNumber || number < 0);

            return number;
        }
    }
}
