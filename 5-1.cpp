// Lab_5.1.cpp 
// Хомицький Данило
// Лабораторна робота No 5.1
// Функції, що містять
// арифметичний вираз
// Варіант 16 

#include <iostream>
#include <cmath>

using namespace std;

double h (double a, double b);

int main()
{
    double t, s;
    cout << "t=";
    cin >> t;
    cout << "s=";
    cin >> s; 
    double result = (h(s*s, 1+t) + h(1, s*t))/(1 + (h(s*t, 1))*(h(s*t, 1)));
    cout << "result=" << result << endl;
    return 0;
}

double h (double a, double b)
{
    double h = (a+b+((a*a)*(b*b)))/((a*a)+(b*b));
    return h;
}
