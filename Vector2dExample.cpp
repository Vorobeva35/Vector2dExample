// Vector2dExample.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "pch.h"
#include <iostream>
#include <clocale>
#include "Vector2d.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Vector2d v1(2, 2);
	Vector2d v2(1, 1, 3, 4);
	cout << "Первый вектор: " << (string)v1 << endl;
	cout << "Воторой вектор " << (string)v2 << endl;
	Vector2d v3(v1);
	cout << "Копируем значение первого вектора во третий:" << (string)v3 << endl;
	v3.setx(5); v3.sety(4);
	cout << "Меняем координаты третьего вектора: " << (string)v3 << endl;
	cout << "Сумма первого и второго вектора: " << (string)(v1 + v2) << endl;
	v3 -= v2;
	cout << "Вычитание из третьего вектора второго: " << (string)(v3) << endl;
	v3 *= 3;
	cout << "Умножение третьего вектора на 3: " << (string)(v3) << endl;
	cout << "Длина второго вектора = " << v2.length() << endl;
	cout << "Скалярное умножение первого и второго вектора = " << v1 * v2 << endl;
	cout << "Косинус угла между первым и вторым вектором = " << v1.angle(v2) << endl;
}