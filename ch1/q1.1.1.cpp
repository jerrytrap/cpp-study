//문제 1
#include <iostream>
using namespace std;

int main(void) {
	int num[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 정수 입력: " ;
		cin >> num[i];
		sum = sum + num[i];
	}
	cout << "합계: " << sum;

	return 0;
}