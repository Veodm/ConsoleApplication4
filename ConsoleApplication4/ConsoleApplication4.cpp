﻿

#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");

    

    /*Требуется определить, является ли данный год високосным.
    (Напоминаю, что год является високосным, 
    если его номер кратен 4, но не кратен 100, а также если он кратен 400.)*/

    /*cout << "Программа для выявления високосного года\nВведите год:";
    int g;
    cin >> g;
    if ((g % 4 == 0 && g % 100 != 0) || g % 400 == 0)
        cout << "Год високосный";
    else
        cout << "Год невисокосный";*/

    /*В математике функция sign(x) (знак числа) определена так :
        sign(x) = 1, если x > 0,
        sign(x) = -1, если x < 0,
        sign(x) = 0, если x = 0.
    Для данного числа x выведите значение sign(x).*/    

   /* cout << "Программа определяет знак для числа\nВведите число:";
    int c;
    cin >> c;
    if (c > 0)cout << 1;
    if (c < 0)cout << -1;
    if (c == 0)cout << 0;*/







    /*Даны три числа.
    Выведите наибольшее из данных чисел(программа должна 
    вывести ровно одно целое число).*/

    /*int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if (n1 < n2)
        n1 = n2;
    
    if (n1 < n3)
        n1 = n3;
    cout << n1;*/
    







    /*Требуется определить, бьет ли ладья, стоящая на клетке
    с указанными координатами(номер строки и номер столбца),
    фигуру, стоящую на другой указанной клетке.
    Вводятся четыре числа : координаты ладьи(два числа) и координаты другой фигуры(два числа), каждое число вводится в отдельной строке.*/
    

    /*cout << "Программа для определения возможности ладьи.\n";
    int x1, x2, y1, y2;
    cout << "x1 = ";
    cin >> x1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y1 = ";
    cin >> y1;
    cout << "y2 = ";
    cin >> y2;
    if ((x1 == x2) || (y1 == y2))
        cout << "YES";
    else
        cout << "NO";*/






    /*Дано три числа, записанный в отдельных строках.
    Упорядочите их в порядке возрастания.
    Программа должна считывать три числа a, b, c, 
    затем программа должна менять их значения так, 
    чтобы стали выполнены условия a <= b <= c,
    затем программа выводит тройку a, b, c.*/
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)swap(a, b);
    if (a > c)swap(a, c);
    if (b > c)swap(b, c);
    cout << a << b << c;
}


