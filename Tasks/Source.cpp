#include <iostream>
using namespace std;

#define delimiter "\n-------------------------\n"

void main()
{
	setlocale(LC_ALL, "Russian");
	
	// Задача 1
	double money, b;
	int a;
	cout << "Введите денежную сумму" << endl;
	cin >> money;
	money += .00001;
	a = money;
	b = (money - a) * 100;
	cout << a << " грн. " << b << " коп. " << endl;
	cout << delimiter << endl;

	// Задача 2

	double copybook_p, pencil_p;
	int copybook_n, pencil_n;
	cout << "Цена тетради (грн.): " << endl;
	cin >> copybook_p;
	cout << "Количество тетрадей: " << endl;
	cin >> copybook_n;
	cout << "Цена карандаша (грн.): " << endl;
	cin >> pencil_p;
	cout << "Количество карандашей: " << endl;
	cin >> pencil_n;
	cout << "Стоимость покупки: " << copybook_p * copybook_n + pencil_p * pencil_n << "руб.";
	cout << delimiter << endl;

	// Задача 3

	cout << "Цена тетради (грн.): " << endl;
	double workbook_pr;
	cin >> workbook_pr;

	cout << "Цена обложки (грн.): " << endl;
	double wrapper_pr;
	cin >> wrapper_pr;

	cout << "Количество комплектов (штук): " << endl;
	int n;
	cin >> n;

	cout << "Стоимость покупки: " << (workbook_pr + wrapper_pr) * n << "грн." << endl;
	cout << delimiter << endl;

	// Задача 4

		float dist, fuel_c, fuel_pr;
	cout << "Вычисление стоимости поездки на дачу и обратно " << endl;
	cout << "Расстояние до дачи (км): " << endl;
	cin >> dist;
	cout << "Расход бензина (литров на 100 км пробега): " << endl;
	cin >> fuel_c;
	cout << "Цена литра бензина (грн.) " << endl;
	cin >> fuel_pr;
	cout << "Поездка на дачу и обратно обойдется в " << (((fuel_pr / 100) * dist) * fuel_c)*2 << "грн." << endl;

}






