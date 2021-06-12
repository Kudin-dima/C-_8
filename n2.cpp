#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#define M 15
#define N 2 
using namespace std;


struct AEROFLOT
{
    char FlyghtName[M];
    int FlyghtNum;
    char PlaneType[M];
};

int main()
{
    setlocale(LC_ALL, "Russian");
    AEROFLOT FlyghtInfo[N];

    
    for (int i = 0; i < N; i++)
    {
        cout << "\n������� ����� ����������: ";
        cin >> FlyghtInfo[i].FlyghtName;

        cout << "������� ����� �����: ";
        cin >> FlyghtInfo[i].FlyghtNum;

        cout << "������� ��� �������: ";
        cin >> FlyghtInfo[i].PlaneType;
    }

   
    char cur[M];
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (strcmp(FlyghtInfo[i].FlyghtName, FlyghtInfo[j].FlyghtName) > 0)
            {
                strcpy(cur, FlyghtInfo[i].FlyghtName);
                strcpy(FlyghtInfo[i].FlyghtName, FlyghtInfo[j].FlyghtName);
                strcpy(FlyghtInfo[j].FlyghtName, cur);
            }
    cout << "\n\n";

   
    cout << "\t �����\t����\t�������\n\n";
    for (int i = 0; i < N; i++)
    {
        cout << "\t" << FlyghtInfo[i].FlyghtName << "\t" << FlyghtInfo[i].FlyghtNum << "\t" << FlyghtInfo[i].PlaneType << "\n";

    }
    cout << "\n\n";

   
    char temp[M];
    int count;
    while (strcmp(temp, "exit"))
        cout << "\n������� ��� ������� ��� exit ����� �����: ";
        cin >> temp;
        count = 0;

        for (int i = 0; i < N; i++)
        {
            if (strcmp(FlyghtInfo[i].PlaneType, temp) == 0)
            {
                cout << "\t �����\t\t����\n";
                cout << "\t" << FlyghtInfo[i].FlyghtName << "\t\t" << FlyghtInfo[i].FlyghtNum << "\n\n";
                count++;
            }
        }

        if (count == 0)
            cout << "\n��� ����� ������\n";
    }
}
