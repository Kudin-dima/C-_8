#include <iostream>
using namespace std;

struct MARSH
{
	string StartWay;
	string EndWay;
	int NumWay;
}way;

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "�������� �������� ���������� ������ ��������:\n";
	cin >> way.StartWay;
	cout << "\n������ �������� ��������� ������ ��������:\n";
	cin >> way.EndWay;
	cout << "\n������� ����� ��������:\n";
	cin >> way.NumWay;

	cout << "\n\n���� ����������:"
		<< "\n�������� ���������� ������ ��������:\t" << way.StartWay
		<< "\n�������� ��������� ������ ��������:\t" << way.EndWay
		<< "\n����� ��������:\t" << way.NumWay << "\n\n";

	return 0;
}