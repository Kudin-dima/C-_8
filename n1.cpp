#include <iostream>
using namespace std;

struct aeroflot
{
	char FlyghtName;
	int FlyghtNum;
	char PlaneType;
}plane;

int main()
{
	cout << "enter flyght name:\n";
	cin >> plane.FlyghtName;

	cout << "enter flyght number:\n";
	cin >> plane.FlyghtNum;

	cout << "enter plane type:\n";
	cin >> plane.PlaneType;


	cout << "\nYour info about flyght:\nFlyght name: " << plane.FlyghtName
		<< "\nFlyght number: " << plane.FlyghtNum
		<< "\nPlane type: " << plane.PlaneType << "\n\n";

	return 0;
}