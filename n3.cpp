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

	cout << "Ввевдите название начального пункта маршрута:\n";
	cin >> way.StartWay;
	cout << "\nВедите название конечного пункта маршрута:\n";
	cin >> way.EndWay;
	cout << "\nВведите номер маршрута:\n";
	cin >> way.NumWay;

	cout << "\n\nВаша информация:"
		<< "\nНазвание начального пункта маршрута:\t" << way.StartWay
		<< "\nНазвание конечного пункта маршрута:\t" << way.EndWay
		<< "\nНомер маршрута:\t" << way.NumWay << "\n\n";

	return 0;
}