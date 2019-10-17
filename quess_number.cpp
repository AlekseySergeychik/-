// gjgsnrf4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int secretNumber;
	int number;	
	int minBorder1 = 1;
	int maxBorder1 = 100;
	char again;

	cout << "Enter a number from 1 to 100" << endl;
	cin >> secretNumber;
	int tries = 0;

	srand(static_cast<unsigned int>(time(0)));
	number = rand() % 100 + 1;
	if (number == secretNumber)
	{
		cout << "Vshe chislo " << number << " ugadanno with " << tries << " popitok " << endl;
	}
	cout << "Vashe chislo bolshe ? " << number << "(y/n) " << endl;
	cin >> again;

	if (again == 'y')
	{
		minBorder1 = number;
		++tries;
		if (minBorder1 == secretNumber)
			cout << "Vashe chislo " << minBorder1 << " ugadanno with " << tries << " popitok" << endl;
	}


	if (again == 'n')
	{
		maxBorder1 = number;
		++tries;
		if (maxBorder1 == secretNumber)
			cout << "Vashe chislo " << number << " ugadanno with " << tries << " popitok" << endl;
	}
	do {
		number = rand() % (maxBorder1 - minBorder1) + minBorder1;
		
		cout << "Vashe chislo bolshe ? " << number << "(y/n) " << endl;
		cin >> again;
		if (again == 'y')
		{
			minBorder1 =  number;
			++tries;
			if (minBorder1 == secretNumber)
				cout << "Vashe chislo " << minBorder1 << " ugadanno with " << tries << " popitok" << endl;
		}


		if (again == 'n')
		{
			maxBorder1 =  number;
			++tries;
			if (maxBorder1 == secretNumber)
				cout << "Vashe chislo " << number << " ugadanno with " << tries << " popitok" << endl;
		}

	} while (number != secretNumber);



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
