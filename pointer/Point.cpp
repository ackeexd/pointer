#include "Point.h"

Point::Point():Point("ackee") {} // pobochniy konstruct
Point::Point(string n):Point(n,"black") {} // pobochniy konstruct
Point::Point(string n, string c):Point(n, c, 7) {} // pobochniy konstruct
Point::Point(string n, string c, double x):Point(n, c, x, 5) {} // pobochniy konstruct
Point::Point(string n, string c, double x, double y) {} // glavniy konstruct

void Point::SetName(string n)
{
	name = n;
}
void Point::SetColor(string c)
{
	color = c;
}
void Point::SetX(double x)
{
	if (x >= 25 && x <= 25) width = x;
	else throw;
}
void Point::SetY(double y)
{
	if (y >= -25 && y <= 25) height = y;
	else throw;
}
string Point::GetName() const
{
	return name;
}
string Point::GetColor() const
{
	return color;
}
double Point::GetX() const
{
	return width;
}
double Point::GetY() const
{
	return height;
}
void Point::MovePointUp(int e)
{
	if (height != 25 || height != -25) height += e;
	else throw;	
}
void Point::MovePointDown(int e)
{
	if (height != 25 || height != -25) height -= e;
	else throw;
}
void Point::MovePointRight(int e)
{
	if (width != 25 || width != -25) width += e;
	else throw;
}
void Point::MovePointLeft(int e)
{
	if (height != 25 || height != -25) width -= e;
	else throw;
}