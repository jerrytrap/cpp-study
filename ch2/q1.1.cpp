#include <iostream>

void IncOne(int& num)
{
	num++;
}

void SwapSign(int& num)
{
	num *= -1;
}

int main(void)
{
	int num = 3;
	IncOne(num);
	std::cout << "IncOne�Լ� ���� ���: " << num << std::endl;
	SwapSign(num);
	std::cout << "SwapSign�Լ� ���� ���: " << num << std::endl;
	return 0;
}