#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int choose;
	do
	{
		std::cout << "1) ����� ����\n";
		std::cout << "2) ���������� ����\n";
		std::cout << "3) ��������� ����\n";
		std::cout << "4) ���������\n";
		std::cout << "0) �����\n";
		std::cin >> choose;
	}  
	while (choose <0 || choose >4);


    return 0;

}









