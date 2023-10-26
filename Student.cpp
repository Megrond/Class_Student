#include "Student.h"
#include<iostream>

void Student::createName(const char* new_name)
{
	int sszz = strlen(new_name) + 1;
	name = new char[sszz];
	strcpy_s(name, sszz, new_name);
}

double Student::getAver()
	{
		double tmp{};
		for (int i{}; i < 3; i++)
		{
			tmp += ball[i];
		}
		return tmp / 3;
	}

void Student::setName(const char* new_name)
{
	delete[]name;
	createName(new_name);
}

void Student::setBall(int index, int value)
{
	if (index < 0 || index > ballCount)
	{
		return;
	}
	if (value < 1 || value > 12)
	{
		ball[index] = 0;
	}
	else
	{
		ball[index] = value;
	}
}

Student::Student(const char* new_name, int new_ball_count, int* new_ball)
{
	createName(new_name);

	ball = new int[new_ball_count];
	ballCount = new_ball_count;
	for (int i{}; i < new_ball_count; i++)
	{
		setBall(i, new_ball[i]);
	}
}

Student::Student(const char* new_name, int new_ball_count)
{
	createName(new_name);

	ball = new int[new_ball_count];
	ballCount = new_ball_count;
	for (int i{}; i < new_ball_count; i++)
	{
		setBall(i, 0);
	}
}




