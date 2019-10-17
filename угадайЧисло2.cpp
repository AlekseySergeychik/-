// угадайЧисло2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int secretNumber;
	int number;
	char again;

	cout << "Enter a number from 1 to 100" << endl;
	cin >> secretNumber;
	int tires;
	tires = 0;
	cout << "Vashe chislo bolshe 50? (y/n)" << endl;
	cin >> again;
	srand(static_cast<unsigned int>(time(0)));
	if(again == 'y')
		do
		{
			
			number = rand() % 50 + 50;
			++tires;
			if (number == secretNumber)
				cout << "Vashe chislo " << number << " ugadanno with " << tires << " popitok" << endl;

		} while (number != secretNumber);
    if (again == 'n')
			do
			{
				
				number = rand() % 50 + 1;
				++tires;
				if (number == secretNumber)
					cout << "Vashe chislo " << number << " ugadanno with " << tires << " popitok" << endl;

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
