#include "Counter.h"

Counter::Counter():Counter(1){} // pobochniy konstruct
Counter::Counter(int c):Counter(c, 0){} // pobochniy konstruct
Counter::Counter(int c, int mi):Counter(c, mi, 99999){} // pobochniy konstruct
Counter::Counter(int c, int mi, int ma):Counter(c, mi, ma, 10){} // pobochniy konstruct
Counter::Counter(int c, int mi, int ma, int s){} // glavniy konstruct

void Counter::SetCurrent(int c)
{
	if (c >= min && c <= max) current = c;
	else throw;
}
void Counter::SetMin(int mi)
{
	if (mi >= 0 && mi <= 99998) min = mi;
	else throw;
}
void Counter::SetMax(int ma)
{
	if (ma > min && ma <= 99999) max = ma;
	else throw;
}
void Counter::SetScale(int s)
{
	if (s >= 1 && s <= 100) scale = s;
	else throw;
}
int Counter::GetCurrent() const
{
	return current;
}
int Counter::GetMin() const
{
	return min;
}
int Counter::GetMax() const
{
	return max;
}
int Counter::GetScale() const
{
	return scale;
}
void Counter::AddCounter()
{
	if (current != max) current++;
	else current = min;
}
void Counter::ScaleCounter(int s)
{
	if (s >= 1 && s <= 100 && current + s != max) current += s;
	else current = min;
}
void Counter::ResetCounter()
{
	SetCurrent(0);
	SetMin(0);
	SetMax(1);
	SetScale(1);
}
void Counter::MinCounter()
{
	current = min;
}
void Counter::MaxCounter()
{
	current = max;
}
