/*
** Пользователь 	вводит с клавиатуры дробное число(например, 13, 45).Вывести на экран его 	целую и дробную части.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double a;
	cout << "Введите дробное число (например, 13,45): ";
	cin >> a;
	cout << "Целая часть дробного числа: " << int(a) << "\nДробная часть дробного числа: " << (a - int(a)) * 100 << endl;
	return 0;
}
