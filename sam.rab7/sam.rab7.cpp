#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	setlocale(0, "");
	cout << "\"Геометрические фигуры\"\n\nВыберите фигуру: \n1.Линия\n2.Квадрат\n3.Прямоугольник\n4.Треугольник\n5.Выход\n";
	int menu; 
	int size; 
	char texture; 
	int place; 
	int a = 0; 
	int a1 = 0; 
	int size2;
	int cursed;
	int cursed2;
	cin >> menu;
	switch (menu)
	{
		//ЛИНИЯ
	case 1:
		system("cls");
		cout << "Укажите параметры линии\n1.Горизонтальная\n2.Вертикальная\n";
		cin >> place;
		switch (place)
		{
		case 1:
			system("cls");
			cout << "Введите размер лини\n"; cin >> size;

			while (cin.fail() || size < 1)
			{
				cin.clear();
				cin.ignore();
				cout << "error/Введите корректные данные(Обычное положительное число)\n";
				cin >> size;
			}

			cout << "Введите текстуру линии\n"; cin >> texture;
			system("cls");
			cout << "\n";
			while (a != size)
			{
				a++;
				cout << texture;
			}
			cout << "\n";
			break;
		case 2:
			system("cls");
			cout << "Укажите размер линии\n";
			cin >> size;
			while (cin.fail() || size < 1)
			{
				cin.clear();
				cin.ignore();
				cout << "error/Введите корректные данные(Обычное положительное число)\n";
				cin >> size;
			}

			cout << "Введите текстуру линии\n"; cin >> texture;
			system("cls");
			cout << "\n";
			while (a != size)
			{
				a++;
				cout << texture << "\n";
			}
			cout << "\n";
			break;

		default:
			cout << "Такорго варианта нет перезапусти программу\n";
			break;
		}
		break;
		//КВАДРАТ
	case 2:
		system("cls");
		cout << "Выберие тип квадрата\n\n1.Пустой\n2.Закрашенный\n";
		cin >> cursed;
		switch (cursed)
		{

		case 1:
			system("cls");
			cout << "Введите размер лини\n"; cin >> size;
			while (cin.fail() || size < 1)
			{
				cin.clear();
				cin.ignore();
				cout << "error/Введите корректные данные(Обычное положительное число)\n";
				cin >> size;
			}
			cout << "Введите текстуру линии\n"; cin >> texture;
			a = size;
			while (a != 0)
			{
				a1 = size;
				while (a1 != 0)
				{
					if (a == 1 || a == size || a1 == 1 || a1 == size)
						cout << texture << " ";
					else
						cout << "  ";
					a1--;
				}
				cout << "\n";
				a--;
			}
			break;
		case 2:
			system("cls");
			cout << "Введите размер лини\n"; cin >> size;
			while (cin.fail() || size < 1)
			{
				cin.clear();
				cin.ignore();
				cout << "error/Введите корректные данные(Обычное положительное число)\n";
				cin >> size;
			}
			cout << "Введите текстуру линии\n"; cin >> texture;
			a = size;
			while (a != 0)
			{
				a1 = size;
				while (a1 != 0)
				{
					cout << texture << " ";
					a1--;
				}
				cout << "\n";
				a--;
			}
			break;
		default:
			cout << "Такого варианта не существует, перезапустите программу\n";
			break;
		}
		break;
		//ПРЯМОУГОЛЬНИК
	case 3:
		system("cls");
		cout << "Выберите прямоугольник\n\n1.Закрашенный.2.Пустой\n";
		cin >> cursed2;
		switch (cursed2)
		{
		case 1:
			system("cls");
			cout << "Введите размер горизонтальной  лини\n";
			cin >> size;
			cout << "Введите размер вертикальной лини\n";
			cin >> size2;

			while (cin.fail() || size < 1) 
			{
				cin.clear();
				cin.ignore();
				cout << "error/Введите корректные данные(Обычное положительное число)\n";
				cin >> size;
			}
			cout << "Введите текстуру линии\n"; cin >> texture;
			a = 0;
			while (a != size2)
			{
				a1 = 0;
				while (a1 != size)
				{
					cout << texture << " ";
					a1++;
				}
				cout << "\n";
				a++;
			}
			break;
		
		case 2:
				system("cls");
				cout << "Введите размер горизонтальной  лини\n";
				cin >> size;
				cout << "Введите размер вертикальной лини\n";
				cin >> size2;

				while (cin.fail() || size < 1) {
					cin.clear();
					cin.ignore();
					cout << "error/Введите корректные данные(Обычное положительное число)\n";
					cin >> size;
				}
				cout << "Введите текстуру линии\n";
				cin >> texture;
				cout << "\n";
				a = size2;
				while (a != 0)
				{
					a1 = size;
					while (a1 != 0)
					{
						if (a == 1 || a == size2 || a1 == 1 || a1 == size)
						{
							cout << texture << " ";
						}
						else {
							cout << "  ";
						}
						a1--;
					}
					cout << "\n";
					a--;
				}
				break;
			default:
				cout << "Такого варианта нет\n";
				break;
		}
		break;
		//ТРЕУГОЛЬНИК
		case 4:
		{
			system("cls");
			int height;
			cout << "Введите высоту треугольника\n";
			cin >> height;
			while (cin.fail() || height < 1) {
				cin.clear();
				cin.ignore();
				cout << "error/Введите корректные данные(Обычное положительное число)\n";
				cin >> height;
			}
			size = height * 2 - 1;
			cout << "Введите текстуру линии\n"; cin >> texture;
			for (int i = 0; i < height; i++) {
				for (int j = 0; j < size; j++) {
					if (i == height -1 || j == size /2+i || j == size /2-i) {
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
				}
				
				cout << "\n";
			}
				break;
		}
	case  5:
		system("cls");
		cout << "Вы вышли из программы\n";
		system("pause");
		exit(0);
		break;
	default:
		cout << "Такого варианта не существует, перезапустите программу\n";
		break;
	}
	int _; cin >> _;
	return 0;

}