#include "GreeterLibraryStatic/Greeter.h"

#include <iostream>
#include <Windows.h>


int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "������� ����������� :)\n" << std::endl;

	Greeter greeter;
	std::string name;

	std::cout << "������� ���: ";
	SetConsoleCP(1251);
	std::cin >> name;
	SetConsoleCP(866);

	std::cout << greeter.greet(name) << std::endl;

	system("pause > nul");
	return 0;
}