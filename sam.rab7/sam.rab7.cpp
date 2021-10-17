#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	setlocale(0, "");
	cout <<"\"Геометрические фигуры\"\n\nВыберите фигуру: \n1.Линия\n2.Квадрат\n3.Прямоугольник\n4.Треугольник\n5.Крест\n6.Выход\n";
	int menu;
	int size;
	char texture;
	int place;
	int a = 0;
	int a1 = 0;
	int size2;
	int cursed;
	int cursed2;
	int cursed3;
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
		cout << "Выберие тип квадрата\n\n1.Пустой\n2.Закрашенный\n3.Рекурсивный\n";
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
		case 3:
		{
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
			if (size % 2 == 0) {
				size += 1;
			}
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++)
				{
					if (i == 0 || j == 0 || i == size - 1 || j == size - 1  /*<БАЗА*/ || (i % 2 == 0 && j >= i && j <= size - i - 1) || (i % 2 == 0 && j <= i && j >= size - i - 1) || (j % 2 == 0 && i >= j && i <= size - j - 1) || (j % 2 == 0 && i <= j && i >= size - j - 1)) {
						cout << texture << " ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << "\n";
			}
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
		cout << "Выберите треугольник\n\n1.Пустой\n2.Проклятый(cursed?)\n3.Закрашенный"<<"\n";
		cin >> cursed3;
		switch (cursed3) {
		case 1:
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
					if (i == height - 1 || j == size / 2 + i || j == size / 2 - i) {
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
		case 2: {
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
			system("cls");
			for (int i = 0; i < height; i++) {
				for (int j = 0; j < size; j++) {
					if (i == height - 1 || j == size / 2 + i || j == size / 2 - i || j > size/2 + i || j < size/2 - i) {
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
		case 3: {
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
			system("cls");
			for (int i = 1; i < height+1; i++) {
				for (int j = 0; j < size; j++) {
					if (i == height + 1 || j == size / 2 + i || j == size / 2 - i || j > size / 2 + i || j < size / 2 - i) {
						cout << "  ";
					}
					else {
						cout << texture << " ";
					}
				}
				cout << "\n";
			}
			break;
		}
		default:
		{
			cout << "Такого варианта нет\n";
			break;
		}
		break;
		}
		break;
		//КРЕСТ
	case 5: {
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
		 if (size % 2 == 0)
		 {
			 size += 1;
		 }
		 for (int i = 0; i < size; i++) {
			 for (int j = 0; j < size; j++)
			 {
				
				 if (j == size / 2 || i == size / 2 ) {
					 cout << texture << " ";
				 }
				 else {
					 cout << "  ";
				 }
			 }
			 cout<<"\n";
		 }
		break;
	}
	case  6:
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
}