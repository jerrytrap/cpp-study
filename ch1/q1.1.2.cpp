//문제 2
#include <iostream>
using namespace std;

int main(void) {
	char name[10];
	char phoneNum[15];

	cout << "이름을 입력해주세요: ";
	cin >> name;
	cout << "전화번호를 입력해주세요: ";
	cin >> phoneNum;

	cout << "이름: " << name << endl;
	cout << "전화번호: " << phoneNum;
	
	return 0;
}