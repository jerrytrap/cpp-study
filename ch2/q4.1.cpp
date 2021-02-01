#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	const char* str1 = "abc";
	const char* str2 = "def";
	char str3[20];

	cout << strlen(str1) << endl;
	strcpy_s(str3, str1);
	strcat_s(str3, str2);
	cout << str3 << endl;
	if (strcmp(str3, str1) == 0)
		cout << "같은 문자열" << endl;
	else
		cout << "다른 문자열" << endl;
	return 0;
}