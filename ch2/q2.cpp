#include <iostream>

int main(void)
{
	const int num = 12;
	const int* ptr = &num;
	const int*& ref = ptr;

	std::cout << "num에 저장된 값: " << num << std::endl;
	std::cout << "ptr이 가리키는 값: " << *ptr << std::endl;
	std::cout << "ref이 가리키는 값: " << *ref << std::endl;
	return 0;
}