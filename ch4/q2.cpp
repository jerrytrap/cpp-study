#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	Point center;
	int radius;
public:
	void Init(int x, int y, int rad)
	{
		center.Init(x, y);
		radius = rad;
	}
	void ShowCircleInfo() const
	{
		cout << "radius: " << radius << endl;
		center.ShowPointInfo();
	}
};

class Ring
{
private:
	Circle inner;
	Circle outter;
public:
	void Init(int x1, int y1, int rad1, int x2, int y2, int rad2)
	{
		inner.Init(x1, y1, rad1);
		outter.Init(x2, y2, rad2);
	}
	void ShowRingInfo() const
	{
		cout << "Inner Circle Info" << endl;
		inner.ShowCircleInfo();
		cout << "Outter Circle Info" << endl;
		outter.ShowCircleInfo();
	}
};
int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}