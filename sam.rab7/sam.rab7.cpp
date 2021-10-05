#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "\"Геометрические фигуры\"\n\nВыберите фигуру: \n1.Линия\n2.Квадрат\n3.Выход\n";
	int menu; int size; char texture; int place; int a = 0; int a1 = 0;
	cin >> menu;
	switch (menu)
	{
	case 1:
		system("cls");
		cout << "Укажите параметры линии\n1.Горизонтальная\n2.Вертикальная\n";
		cin >> place;
		switch (place)
		{
		case 1:
			system("cls");
			cout << "Укажите по порядку ее размер и тот символ из которого будет линия\n";
			cin >> size >> texture;
			while (size < 0)
			{
				cout << "Попробуй ввести поло-ое число, друг\n";
				cin >> size;
			}
			system("cls");
			cout << "\n";
			while (a != size)
			{
				a++;
				cout << texture;
			}
			break;
		case 2:
			system("cls");
			cout << "Укажите по порядку ее размер и тот символ из которого будет линия\n";
			cin >> size >> texture;
			while (size < 0)
			{
				cout << "Попробуй ввести поло-ое число, друг\n";
				cin >> size;
			}
			system("cls");
			cout << "\n";
			while (a != size)
			{
				a++;
				cout << texture << "\n";
			}
			break;

		default:
			cout << "Такорго варианта нет\n";
			break;
		}
		break;
	case 2:
		system("cls");
		cout << "Укажите размер стороны квадрата и символ из которого он состоит\n";
		cin >> size >> texture;
		system("cls");
		cout << "\n";
		while (size < 0)
		{
			cout << "Попробуй ввести поло-ое число, друг\n";
			cin >> size;
			system("cls");
		}
		a = size;
		while (a != 0)
		{
			a1 = size;
			while (a1 != 0) {
				cout << texture << " ";
				a1--;
			}
			cout << "\n";
			a--;
		}
		break;
	case  3:
		system("cls");
		cout << "Вы вышли из программы";
		break;
	default:
		cout << "Такого варианта не существует";
		break;
	}
	int _; cin >> _;
	return 0;

}