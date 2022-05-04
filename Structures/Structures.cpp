#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct car {

	string name = "no";
	int length = 0;
	int clirens = 0;
	double volume = 0;
	double power = 0;
	int d = 0;
	string color = "no";
	string transmission = "space engine";

}audi, bmw, rr, usersCar1, usersCar2, usersCar3;

car initiate()
{
	car element;

	cout << "Введите название: ";
	cin >> element.name;
	cout << endl;

	cout << "Длинну автомобиля (мм): ";
	cin >> element.length;
	cout << endl;

	cout << "Клиренс (мм): ";
	cin >> element.clirens;
	cout << endl;

	cout << "Объем двигателя (см куб.): ";
	cin >> element.volume;
	cout << endl;

	cout << "Мощность двигателя (л.с.): ";
	cin >> element.power;
	cout << endl;

	cout << "Диаметр колес (дюйм): ";
	cin >> element.d;
	cout << endl;

	cout << "Цвет автообиля: ";
	cin >> element.color;
	cout << endl;

	cout << "Тип коробки передач:" << endl;
	cout << "1.Механическая коробка переключения передач" << endl;
	cout << "2.Автоматическая коробка переключения передач" << endl;
	cout << "3.Роботизированная коробка переключения передач" << endl;
	cout << "4.Вариативная(бесступенчатая) коробка переключения передач" << endl;
	int a, z;
	z = 1;
	while (z)
	{
		cout << "Введите номер пункта: ";
		cin >> a;
		switch (a)
		{
		case 1:
			element.transmission = "Механика";
			z = 0;
			break;
		case 2:
			element.transmission = "Автомат";
			z = 0;
			break;
		case 3:
			element.transmission = "Робот";
			z = 0;
			break;
		case 4:
			element.transmission = "Вариативная";
			z = 0;
			break;
		default:
			cout << "Ошибка ввода данных" << endl;
			break;
		}
	}

	return element;
}

void show(car audi)
{
	cout << "Название: ";
	cout << audi.name;
	cout << endl;

	cout << "Длинна автомобиля (мм): ";
	cout << audi.length << endl;

	cout << "Клиренс (мм): ";
	cout << audi.clirens << endl;

	cout << "Объем двигателя (см куб.): ";
	cout << audi.volume << endl;

	cout << "Мощность двигателя (л.с.): ";
	cout << audi.power << endl;

	cout << "Диаметр колес (дюйм): ";
	cout << audi.d << endl;

	cout << "Цвет автообиля: ";
	cout << audi.color << endl;

	cout << "Тип коробки передач: ";
	cout << audi.transmission << endl;


}

int main()
{
	setlocale(LC_ALL, "Russian");

	audi.name = "Audi R8";
	audi.length = 4429;
	audi.clirens = 100;
	audi.volume = 5204;
	audi.power = 540;
	audi.d = 19;
	audi.color = "Silver grey";
	audi.transmission = "Робот";

	bmw.name = "BMW i8";
	bmw.length = 4689;
	bmw.clirens = 117;
	bmw.volume = 1499;
	bmw.power = 231;
	bmw.d = 20;
	bmw.color = "Blue";
	bmw.transmission = "Автомат";

	rr.name = "Rolls-Royce Cullinan";
	rr.length = 5341;
	rr.clirens = 250;
	rr.volume = 6749;
	rr.power = 600;
	rr.d = 21;
	rr.color = "Red";
	rr.transmission = "Автомат";

	vector<string> names;

	names.push_back(audi.name);
	names.push_back(bmw.name);
	names.push_back(rr.name);

	

	int b = 1, c = 1;;

	do
	{
		cout << "\nВыберите действие:" << endl;
		int x;

		cout << "1.Добавить автомобиль" << endl;
		cout << "2.Показать характеристики" << endl;
		cout << "3.Поиск по характеристикам" << endl;
		cout << "0.Выход" << endl;
		cout << endl;

		cout << "Ваш выбор: ";

		cin >> x;
		cout << endl;

		if (x == 0)
			b = x;

		switch (x)
		{
		case 1:			

			switch (c)
			{
			case 1:

				usersCar1 = initiate();
				names.push_back(usersCar1.name);
				c++;

				break;
			case 2:

				usersCar2 = initiate();
				names.push_back(usersCar2.name);
				c++;

				break;
			case 3:

				usersCar3 = initiate();
				names.push_back(usersCar3.name);
				c++;

				break;
			default:
				cout << "Память заполнена" << endl;
				break;
			}

			break;
		case 2:

			cout << "Выберите автомобиль" << endl;

			for (int i = 0; i < names.size(); i++)
				cout << i + 1 << '.' << names[i] << endl;

			cout << endl;

			int d;

			cin >> d;

			switch (d)
			{
			case 1:
				show(audi);
				break;
			case 2:
				show(bmw);
				break;
			case 3:
				show(rr);
				break;
			case 4:
				show(usersCar1);
				break;
			case 5:
				show(usersCar2);
				break;
			case 6:
				show(usersCar3);
				break;
			default:
				cout << "Ошибка ввода" << endl;
				b = 0;
				break;
			}

			break;
		case 3:
			int v;
			cout << "Выберите характеристику:" << endl;
			cout << endl;
			cout << "1.Название" << endl;
			cout << "2.Длинна автомобиля" << endl;
			cout << "3.Клиренс" << endl;
			cout << "4.Объем двигателя" << endl;
			cout << "5.Мощность двигателя" << endl;
			cout << "6.Диаметр колес" << endl;
			cout << "7.Цвет автообиля" << endl;
			cout << "8.Тип коробки передач" << endl;
			cout << endl << endl;

			cin >> v;
			string enter, c1, trans;


			switch (v)
			{
			case 1:

				cout << "Введите название: ";
				cin >> enter;
				cout << endl << endl;

				q = 0;

				if (enter == audi.name)
				{
					show(audi);
					q = 1;
				}

				if (enter == bmw.name)
				{
					show(bmw);
					q = 1;
				}

				if (enter == rr.name)
				{
					show(rr);
					q = 1;
				}

				if (enter == usersCar1.name)
				{
					show(usersCar1);
					q = 1;
				}

				if (enter == usersCar2.name)
				{
					show(usersCar2);
					q = 1;
				}

				if (enter == usersCar3.name)
				{
					show(usersCar3);
					q = 1;
				}

				if (q == 0)
					cout << "Ничего не найдено" << endl;

				break;
			case 2:

				int l1;
				cout << "Длинну автомобиля: ";
				cin >> l1;
				cout << endl << endl;

				q = 0;

				if (l1 == audi.length)
				{
					show(audi);
					q = 1;
				}

				if (l1 == bmw.length)
				{
					show(bmw);
					q = 1;
				}

				if (l1 == rr.length)
				{
					show(rr);
					q = 1;
				}

				if (l1 == usersCar1.length)
				{
					show(usersCar1);
					q = 1;
				}

				if (l1 == usersCar2.length)
				{
					show(usersCar2);
					q = 1;
				}

				if (l1 == usersCar3.length)
				{
					show(usersCar3);
					q = 1;
				}

				if (q == 0)
					cout << "Ничего не найдено" << endl;

				break;
			case 3:

				int cl1;
				cout << "Введите высоту автомобиля: ";
				cin >> cl1;
				cout << endl << endl;

				q = 0;

				if (cl1 == audi.clirens)
				{
					show(audi);
					q = 1;
				}

				if (cl1 == bmw.clirens)
				{
					show(bmw);
					q = 1;
				}

				if (cl1 == rr.clirens)
				{
					show(rr);
					q = 1;
				}

				if (cl1 == usersCar1.clirens)
				{
					show(usersCar1);
					q = 1;
				}

				if (cl1 == usersCar2.clirens)
				{
					show(usersCar2);
					q = 1;
				}

				if (cl1 == usersCar3.clirens)
				{
					show(usersCar3);
					q = 1;
				}

				if (q == 0)
					cout << "Ничего не найдено" << endl;

				break;
			case 4:

				int v1;
				cout << "Введите объем двигателя: ";
				cin >> v1;
				cout << endl << endl;

				q = 0;

				if (v1 == audi.volume)
				{
					show(audi);
					q = 1;
				}

				if (v1 == bmw.volume)
				{
					show(bmw);
					q = 1;
				}

				if (v1 == rr.volume)
				{
					show(rr);
					q = 1;
				}

				if (v1 == usersCar1.volume)
				{
					show(usersCar1);
					q = 1;
				}

				if (v1 == usersCar2.volume)
				{
					show(usersCar2);
					q = 1;
				}

				if (v1 == usersCar3.volume)
				{
					show(usersCar3);
					q = 1;
				}

				if (q == 0)
					cout << "Ничего не найдено" << endl;

				break;
			case 5:

				int p1;
				cout << "Введите мощность двигателя: ";
				cin >> p1;
				cout << endl << endl;

				q = 0;

				if (p1 == audi.power)
				{
					show(audi);
					q = 1;
				}

				if (p1 == bmw.power)
				{
					show(bmw);
					q = 1;
				}

				if (p1 == rr.power)
				{
					show(rr);
					q = 1;
				}

				if (p1 == usersCar1.power)
				{
					show(usersCar1);
					q = 1;
				}

				if (p1 == usersCar2.power)
				{
					show(usersCar2);
					q = 1;
				}

				if (p1 == usersCar3.power)
				{
					show(usersCar3);
					q = 1;
				}

				if (q == 0)
					cout << "Ничего не найдено" << endl;

				break;
			case 6:

				int d1;
				cout << "Введите диаметр колес: ";
				cin >> d1;
				cout << endl << endl;

				q = 0;

				if (d1 == audi.d)
				{
					show(audi);
					q = 1;
				}

				if (d1 == bmw.d)
				{
					show(bmw);
					q = 1;
				}

				if (d1 == rr.d)
				{
					show(rr);
					q = 1;
				}

				if (d1 == usersCar1.d)
				{
					show(usersCar1);
					q = 1;
				}

				if (d1 == usersCar2.d)
				{
					show(usersCar2);
					q = 1;
				}

				if (d1 == usersCar3.d)
				{
					show(usersCar3);
					q = 1;
				}

				if (q == 0)
					cout << "Ничего не найдено" << endl;

				break;
			case 7:

				cout << "Введите цвет автомобиля: ";
				cin >> c1;
				cout << endl << endl;

				q = 0;

				if (c1 == audi.color)
				{
					show(audi);
					q = 1;
				}

				if (c1 == bmw.color)
				{
					show(bmw);
					q = 1;
				}

				if (c1 == rr.color)
				{
					show(rr);
					q = 1;
				}

				if (c1 == usersCar1.color)
				{
					show(usersCar1);
					q = 1;
				}

				if (c1 == usersCar2.color)
				{
					show(usersCar2);
					q = 1;
				}

				if (c1 == usersCar3.color)
				{
					show(usersCar3);
					q = 1;
				}

				if (q == 0)
					cout << "Ничего не найдено" << endl;

				break;
			case 8:

				cout << "Выберите тип коробки передач: " << endl;
				cout << "1.Механическая коробка переключения передач" << endl;
				cout << "2.Автоматическая коробка переключения передач" << endl;
				cout << "3.Роботизированная коробка переключения передач" << endl;
				cout << "4.Вариативная(бесступенчатая) коробка переключения передач" << endl;
				int a, z;
				z = 1;
				while (z)
				{
					cout << "Введите номер пункта: ";
					cin >> a;
					cout << endl << endl;

					switch (a)
					{
					case 1:
						trans = "Механика";
						z = 0;
						break;
					case 2:
						trans = "Автомат";
						z = 0;
						break;
					case 3:
						trans = "Робот";
						z = 0;
						break;
					case 4:
						trans = "Вариативная";
						z = 0;
						break;
					default:
						cout << "Ошибка ввода данных" << endl;
						break;
					}


				}

				q = 0;

				if (trans == audi.transmission)
				{
					show(audi);
					q = 1;
				}

				if (trans == bmw.transmission)
				{
					show(bmw);
					q = 1;
				}

				if (trans == rr.transmission)
				{
					show(rr);
					q = 1;
				}

				if (trans == usersCar1.transmission)
				{
					show(usersCar1);
					q = 1;
				}

				if (trans == usersCar2.transmission)
				{
					show(usersCar2);
					q = 1;
				}

				if (trans == usersCar3.transmission)
				{
					show(usersCar3);
					q = 1;
				}

				if (q == 0)
					cout << "Ничего не найдено" << endl;

				break;


			case 0:
				break;
			default:
				cout << "Ошибка ввода" << endl;
				break;
			}
		}



	} while (b);


	return 0;
}
