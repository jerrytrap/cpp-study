//���� 4
#include <iostream>
using namespace std;

int main(void) {
	int base = 50;
	int sell_price;

	while (1)
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> sell_price;

		if (sell_price == -1)
		{
			cout << "���α׷��� �����մϴ�.";
			break;
		}

		cout << "�̹� �� �޿�: " << base + sell_price * 0.12 << "����" << endl;
	}
	return 0;
}