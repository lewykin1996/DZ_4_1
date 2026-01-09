// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a;
	int sum = 0;

	cout << "Введите целое число или число '0', чтобы закончить:" << endl;
	cin >> a;

	while (a != 0)
	{
		sum = sum + a;

		cout << "Введите целое число или число '0', чтобы закончить:" << endl;
		cin >> a;
	}
	cout << "Сумма:" << sum << endl;

	return 0;
}


