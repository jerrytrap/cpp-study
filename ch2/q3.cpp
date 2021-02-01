#include <iostream>

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* p3 = new Point;
	p3->xpos = p1.xpos + p2.xpos;
	p3->ypos = p1.ypos + p2.ypos;
	return *p3;
}

int main(void)
{
	Point* p1 = new Point{ 1, 2 };
	Point* p2 = new Point{ 3, 4 };

	Point &p3 = PntAdder(*p1, *p2);
	std::cout << "[" << p3.xpos << ", " << p3.ypos << "]" << std::endl;
	delete p1;
	delete p2;
	delete &p3;
	return 0;
}