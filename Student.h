#pragma once


class Student
{
	char* name;
	int* ball;
	int ballCount;
	void createName(const char* new_name);

public:
	Student(const char* new_name, int new_ball_count, int* new_ball);//�����������
	Student(const char* new_name, int new_ball_count); //���������� ������������

	void setName(const char* new_name);
	void setBall(int index, int value);

	char* getName()
	{
		return name;
	}

	int* getBall()
	{
		return ball;
	}
	double getAver();
};
