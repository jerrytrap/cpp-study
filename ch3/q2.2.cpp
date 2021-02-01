#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
private:
	char str[20];
public:
	void SetString(const char setStr[20]);
	void ShowString();
};

void Printer::SetString(const char setStr[20])
{
	strcpy_s(str, setStr);
}

void Printer::ShowString()
{
	cout << str << endl;
}

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}