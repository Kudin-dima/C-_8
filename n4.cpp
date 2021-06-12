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
		cout << "�������� �������� ���������� ������ ��������:\n";
		cin >> Way[i].StartWay;
		cout << "������ �������� ��������� ������ ��������:\n";
		cin >> Way[i].EndWay;
		cout << "������� ����� ��������:\n";
		cin >> Way[i].NumWay;
		cout << "\n\n";
	}

	
	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
			if (Way[i].NumWay > Way[j].NumWay)
				swap(Way[i], Way[j]);

	
	cout << "\n\t�����\t��������� �����\t\t�������� �����\n\n";
	for (int i = 0; i < N; i++)
	{
		cout << "\t" << Way[i].NumWay << "\t\t" << Way[i].StartWay << "\t\t" << Way[i].EndWay << "\n";
	}

	int count, num;
	while (true)
	{
		cout << "\n\n������� ����� ��������:  ";
		cin >> num;
		count = 0;

		while ((Way[count].NumWay != num) && count != N)
			count++;

		if (count == N)
			cout << "\n��� ������ ��������\n";
		else
		{
			cout << "\t������\t\t����� \n";
			cout << "\n\t" << Way[count].StartWay << "\t\t";
			cout << Way[count].EndWay << "\n\n";
		}

		cout << "\n���� ������ ��������� ������� 0 ��� 1 ����� ����������: ";
		int exit;
		cin >> exit;
		if (exit == 0)
			break;
	}
}