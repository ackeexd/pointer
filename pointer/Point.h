#pragma once
#include <iostream>
#include "Student.h"
#include <windows.h>
using namespace std;

class Point
{
private:
	string name;
	string color;
	double width;
	double height;
public:
	Point(); // poboch
	Point(string n); // poboch
	Point(string n, string c);// poboch
	Point(string n, string c, double x);// poboch
	Point(string n, string c, double x, double y);// glav
	void SetName(string n);
	void SetColor(string c);
	void SetX(double x);
	void SetY(double y);
	string GetName() const;
	string GetColor() const;
	double GetX() const;
	double GetY() const;
	void MovePointUp(int e);
	void MovePointDown(int e);
	void MovePointRight(int e);
	void MovePointLeft(int e);
};
