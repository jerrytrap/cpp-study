#include <iostream>

int main(void)
{
	const int num = 12;
	const int* ptr = &num;
	const int*& ref = ptr;

	std::cout << "num�� ����� ��: " << num << std::endl;
	std::cout << "ptr�� ����Ű�� ��: " << *ptr << std::endl;
	std::cout << "ref�� ����Ű�� ��: " << *ref << std::endl;
	return 0;
}