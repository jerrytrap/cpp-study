//문제 4
#include <iostream>
using namespace std;

int main(void) {
	int base = 50;
	int sell_price;

	while (1)
	{
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> sell_price;

		if (sell_price == -1)
		{
			cout << "프로그램을 종료합니다.";
			break;
		}

		cout << "이번 달 급여: " << base + sell_price * 0.12 << "만원" << endl;
	}
	return 0;
}