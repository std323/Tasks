#include <iostream>
using namespace std;

#define delimiter "\n-------------------------\n"

void main()
{
	setlocale(LC_ALL, "Russian");
	
	// ������ 1
	double money, b;
	int a;
	cout << "������� �������� �����" << endl;
	cin >> money;
	money += .00001;
	a = money;
	b = (money - a) * 100;
	cout << a << " ���. " << b << " ���. " << endl;
	cout << delimiter << endl;

	// ������ 2

	double copybook_p, pencil_p;
	int copybook_n, pencil_n;
	cout << "���� ������� (���.): " << endl;
	cin >> copybook_p;
	cout << "���������� ��������: " << endl;
	cin >> copybook_n;
	cout << "���� ��������� (���.): " << endl;
	cin >> pencil_p;
	cout << "���������� ����������: " << endl;
	cin >> pencil_n;
	cout << "��������� �������: " << copybook_p * copybook_n + pencil_p * pencil_n << "���.";
	cout << delimiter << endl;

	// ������ 3

	cout << "���� ������� (���.): " << endl;
	double workbook_pr;
	cin >> workbook_pr;

	cout << "���� ������� (���.): " << endl;
	double wrapper_pr;
	cin >> wrapper_pr;

	cout << "���������� ���������� (����): " << endl;
	int n;
	cin >> n;

	cout << "��������� �������: " << (workbook_pr + wrapper_pr) * n << "���." << endl;
	cout << delimiter << endl;

	// ������ 4

		float dist, fuel_c, fuel_pr;
	cout << "���������� ��������� ������� �� ���� � ������� " << endl;
	cout << "���������� �� ���� (��): " << endl;
	cin >> dist;
	cout << "������ ������� (������ �� 100 �� �������): " << endl;
	cin >> fuel_c;
	cout << "���� ����� ������� (���.) " << endl;
	cin >> fuel_pr;
	cout << "������� �� ���� � ������� ��������� � " << (((fuel_pr / 100) * dist) * fuel_c)*2 << "���." << endl;

}






