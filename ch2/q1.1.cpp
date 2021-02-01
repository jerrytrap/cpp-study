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
	std::cout << "IncOne함수 실행 결과: " << num << std::endl;
	SwapSign(num);
	std::cout << "SwapSign함수 실행 결과: " << num << std::endl;
	return 0;
}