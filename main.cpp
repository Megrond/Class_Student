#include<iostream>
#include<Windows.h>
#include <iomanip>
#include "Student.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "");

	int ball[3]{ 8, 5, 7 };
	Student * student = new Student[2]
	{
		{"odegov a.n.", 3, new int[3]{5,9,2}},
		{"romashov.v.v", 5},
	};

	for (int i{}; i < 2; i++)
	{
		cout << "Студент: " << student[i].getName() << endl;
		cout << "Успеваемость: " << fixed << setprecision(2) << student[i].getAver() << endl << endl;
	}

	return 0;
}
