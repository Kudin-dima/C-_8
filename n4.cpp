#include <iostream>
using namespace std;
#define M 30
#define N 8


struct MARSH
{
	char StartWay[M];
	char EndWay[M];
	int NumWay;
};

int main()
{
	setlocale(LC_ALL, "RUS");
	MARSH Way[N];

	
	for (int i = 0; i < N; i++)
	{
		cout << "Ввевдите название начального пункта маршрута:\n";
		cin >> Way[i].StartWay;
		cout << "Ведите название конечного пункта маршрута:\n";
		cin >> Way[i].EndWay;
		cout << "Введите номер маршрута:\n";
		cin >> Way[i].NumWay;
		cout << "\n\n";
	}

	
	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
			if (Way[i].NumWay > Way[j].NumWay)
				swap(Way[i], Way[j]);

	
	cout << "\n\tНомер\tНачальный пункт\t\tКонечный пункт\n\n";
	for (int i = 0; i < N; i++)
	{
		cout << "\t" << Way[i].NumWay << "\t\t" << Way[i].StartWay << "\t\t" << Way[i].EndWay << "\n";
	}

	int count, num;
	while (true)
	{
		cout << "\n\nВведите номер маршрута:  ";
		cin >> num;
		count = 0;

		while ((Way[count].NumWay != num) && count != N)
			count++;

		if (count == N)
			cout << "\nнет такого маршрута\n";
		else
		{
			cout << "\tНачало\t\tКонец \n";
			cout << "\n\t" << Way[count].StartWay << "\t\t";
			cout << Way[count].EndWay << "\n\n";
		}

		cout << "\nЕсли хотите закончить введите 0 или 1 чтобы продолжить: ";
		int exit;
		cin >> exit;
		if (exit == 0)
			break;
	}
}