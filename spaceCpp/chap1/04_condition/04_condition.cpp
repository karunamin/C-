
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {

	int mon;
	
	cout << "월을 입력하세요 : " << endl;
	cin >> mon;

	if (3 <= mon && mon < 6) {
		cout << "봄입니다" << endl;
	}
	else if (6 <= mon && mon < 9) {
		cout << "여름입니다" << endl;
	}
	else if (9 <= mon && mon < 12) {
		cout << "가을입니다" << endl;
	}
	else if (1 <= mon && mon <= 2 || mon == 12)	{
		cout << "겨울입니다" << endl;
	}
	else {
		cout << "잘못된 월입니다" << endl;
	}
	
	

		return 0;
}