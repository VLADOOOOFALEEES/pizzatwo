#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int vibor{};
	double pizza{};
	double pizza1{};
	double zakuski{};
	double zakuski1{};
	double napitki{};
	double napitok{};
	double kolvpizza{};
	double kolvzakuski{};
	double kolvnapitki{};
	int choice{};
	double result{};
	double resultpizza{};
	double resultzakuski{};
	double resultnapitok{};
	double answer = 1;
	double answer1 = 1;
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
		if (choice == 1)
		{
			while (true)
			{
				if (pizza == 6)
				{
					break;
				}
				else
				{

					std::cout << "1.���������\n2.�������\n3.������������\n4.��������� ����\n5.������\n6.������  ";
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
					if (pizza != 6)
					{
						std::cout << "�������? ";
						std::cin >> kolvpizza;
					}
					resultpizza = kolvpizza * pizza1;
				}
			}
		}
		while (true)
		{
			if (zakuski == 4)
			{
				break;
			}
			else
			{
				std::cout << "1.�������\n2.�������\n3.��������\n4.������ ";
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
				if (zakuski != 4)
				{
					std::cout << "�������? ";
					std::cin >> kolvzakuski;
				}
				resultzakuski = kolvzakuski * zakuski1;
			}
		}
		while (true)
		{
			if (napitki == 5)
			{
				break;
			}
			else {
				std::cout << "1.����\n2.������\n3.�������\n4.���\n5.������ ";
				std::cin >> napitki;
				if (napitki == 1)
				{
					napitok = 70;
				}
				if (napitki == 1)
				{
					napitok = 60;
				}
				if (napitki == 3)
				{
					napitok = 60;
				}
				if (napitki == 4)
				{
					napitok = 20;
				}
				if (napitki != 5)
				{
					std::cout << "�������? ";
					std::cin >> kolvnapitki;
				}
				resultnapitok = kolvnapitki * napitok;
			}
		}
			result = resultpizza + resultzakuski + resultnapitok;
			std::cout << "�� �������� ��� � " << result << " ������";
			if (result >= 1500)
			{
				std::cout << "\n���� ������� ��������� ����� ��� 1500� �� ������ ��� ������ � 15%!\n";
				result = result * 85 / 100;
				std::cout << "\n�� �������� ��� � " << result << " ������";
			}
		if (kolvpizza == 4)
		{
			std::cout << "\n�� �������� 4 ������� �����, �� ����� ��� 5!";
		}

		if (kolvnapitki > 4)
		{
			std::cout << "\n���� ������� �� ����� ��� ���������!";
		}
		std::cout << "\n��������� � ����? 1 - ��";
		if (answer != 0)
		{
			std::cin >> answer;
		}
	}





















}