#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int choose;
	do
	{
		std::cout << "1) новая игра\n";
		std::cout << "2) продолжить игру\n";
		std::cout << "3) загрузить игру\n";
		std::cout << "4) настройки\n";
		std::cout << "0) выйти\n";
		std::cin >> choose;
	}  
	while (choose <0 || choose >4);


    return 0;

}









