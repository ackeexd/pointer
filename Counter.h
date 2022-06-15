#pragma once
class Counter
{
private:
	int current;
	int min;
	int max;
	int scale;
public:
	Counter();
	Counter(int c);
	Counter(int c, int mi);
	Counter(int c, int mi, int ma);
	Counter(int c, int mi, int ma, int s);
	void SetCurrent(int c);
	void SetMin(int mi);
	void SetMax(int ma);
	void SetScale(int s);
	int GetCurrent() const;
	int GetMin() const;
	int GetMax() const;
	int GetScale() const;
	void AddCounter();
	void ScaleCounter(int s);
	void ResetCounter();
	void MinCounter();
	void MaxCounter();
};

