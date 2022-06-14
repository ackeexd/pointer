#include "Student.h"

Student::Student()
{
	name = "Vasya Pupkin";
	age = 30;
}
Student::Student(const Student& original)
{
	// � ����� � ������� ���� Student
	// � ���� name ������� ����� �������� ���� name �� ���������
	name = original.name;
	age = original.age; // � ���� ����� ������� age ������� �������� ���� age ��������� �������
	hometasks_count = original.hometasks_count;

	// � ����� �������� ����� ���� ���������� ������ ������
	hometasks = new int[hometasks_count];

	// ������� ������ �� ������� ������ ��������� �� ������ ������ (� �����) ������ ����� ��������
	for (int i = 0; i < hometasks_count; i++)
	{
		hometasks[i] = original.hometasks[i];
	}
}
void Student::AddRate(int rate)
{
	int* temp = new int[hometasks_count + 1];
	for (int i = 0; i < hometasks_count; i++)
	{
		temp[i] = hometasks[i];
	}
	temp[hometasks_count] = rate;
	delete[] hometasks;
	hometasks = temp;
	hometasks_count++;
}

void Student::PrintHomeTaskRates() const
{
	for (int i = 0; i < hometasks_count; i++)
	{
		cout << hometasks[i] << ", ";
	}
	cout << "\n";
}
Student::~Student()
{
	cout << "Student DESTRUCTOR!\n";
	if (hometasks != nullptr)
	{
		delete[] hometasks;
		hometasks = nullptr;
	}
}





