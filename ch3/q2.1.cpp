#include <iostream>
using namespace std;

class Calculator
{
private:
	int addCount;
	int minCount;
	int mulCount;
	int divCount;
public:
	void Init();
	double Add(double a, double b);
	double Min(double a, double b);
	double Mul(double a, double b);
	double Div(double a, double b);
	void ShowOpCount();
};

void Calculator::Init()
{
	addCount = 0;
	minCount = 0;
	mulCount = 0;
	divCount = 0;
}

double Calculator::Add(double a, double b)
{
	addCount++;
	return a + b;
}

double Calculator::Min(double a, double b)
{
	minCount++;
	return a - b;
}

double Calculator::Mul(double a, double b)
{
	mulCount++;
	return a * b;
}

double Calculator::Div(double a, double b)
{
	if (b == 0)
		cout << "0À¸·Î ³ª´­ ¼ö ¾ø½À´Ï´Ù." << endl;
	else
	{
		divCount++;
		return a / b;
	}
}

void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << addCount << " »¬¼À: " << minCount << " °ö¼À: " << mulCount << " ³ª´°¼À: " << divCount << endl;
}

int main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}