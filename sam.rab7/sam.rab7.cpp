#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	setlocale(0, "");
	cout << "\"Геометрические фигуры\"\n\nВыберите фигуру: \n1.Линия\n2.Квадрат\n3.Выход\n";
	int menu; 
	int size; 
	char texture; 
	int place; 
	int a = 0; 
	int a1 = 0; 
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
			cout << "Введите размер лини\n"; cin >> size;
				
			while(cin.fail() || size < 1){
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
			break;
		case 2:
			system("cls");
			cout << "Укажите размер линии\n";
			cin >> size;
			while (cin.fail() || size < 1) {
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
			break;

		default:
			cout << "Такорго варианта нет перезапусти программу\n";
			break;
		}
		break;
	case 2:
		system("cls");
		cout << "Введите размер лини\n"; cin >> size;
		while (cin.fail() || size < 1) {
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