#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double pizza;
	double pizza1;
	double zakuski;
	double zakuski1;
	double napitki;
	double napitki1;
	int choice;
	double result;
	double answer = 1;
	while (answer == 1)
	{
		for (int i = 0; i < 20; i++)
		{
			std::cout << "--";
			Sleep(20);
		}
		std::cout << std::endl;
		std::cout << "����� ���������� � �������� �������!\n";
		std::cout << "1.�����  2.�������  3.�������  ";
		std::cin >> choice;
			std::cout << "1.���������\n2.�������\n3.������������\n4.��������� ����\n5.������  ";
			std::cin >> pizza;
			if (pizza == 1)
			{
				pizza1 = 90;
			}
			if (pizza == 2)
			{
				pizza1 = 60;
			}
			if (pizza == 3)
			{
				pizza1 = 50;
			}
			if (pizza == 4)
			{
				pizza1 = 100;
			}
			if (pizza == 5)
			{
				pizza1 = 70;
			}
		
		
		
			std::cout << "1.�������\n2.�������\n3.��������  ";
			std::cin >> zakuski;
			if (zakuski == 1)
			{
				zakuski1 = 80;
			}
			if (zakuski == 2)
			{
				zakuski1 = 120;
			}
			if (zakuski == 3)
			{
				zakuski1 = 100;
			}
			
		
			std::cout << "1.����\n2.������\n3.�������\n4.���  ";
			std::cin >> napitki;
			if (napitki == 1)
			{
				napitki1 = 70;
			}
			if (napitki == 1)
			{
				napitki1 = 60;
			}
			if (napitki == 3)
			{
				napitki1 = 60;
			}
			if (napitki == 4)
			{
				napitki1 = 20;
			}
		
		
		std::cout << "\n��������� � ����? 1 - ��";
		if (answer != 0)
		{
			std::cin >> answer;
		}
		result = pizza1 + zakuski1 + napitki1;
		std::cout << "�� �������� ��� �" << result << "������";
	}





















}