#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	if (argc != 3)
	{
		cout << "Ошибка: укажите два файла" << endl;
		return 0;
	}

	ifstream in(argv[1]); // Читаем первый файл
	ofstream out(argv[2]); // Записываем во второй

	if (!in.is_open())
	{
		cout << "Ошибка открытия файла для чтения" << endl;
		return 0;
	}

	if (!out.is_open())
	{
		cout << "Ошибка открытия файла для записи" << endl;
		return 0;
	}

	char symbol;

	while (in.get(symbol))
	{
		out << symbol;
	}

	in.close();
	out.close();

	cout << "Копирование завершено!" << endl;
	return 0;
	
}