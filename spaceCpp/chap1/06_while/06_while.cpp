

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	int ans;
	int count = 0;
		//srand(time(0));
		//cout << showpoint << rand() % 100 + 1 << endl;
		//int num = rand() % 100 + 1;
		//cout << num << endl;

	srand(time(0));
	int num = rand() % 100 + 1;
	while (true) {

	cout << "숫자를 입력하세요 : (1~100)" << endl;
	cin >> ans;
	count++;
		if (num == ans) {
			cout << "정답입니다" << endl;
			cout << "시도횟수" << count << endl;
			break;	// 반복문만 해당
		}
		else if (num < ans)
		{
			cout << "값이 더 작은 숫자 입니다" << endl;
		}
		else if (num > ans) {
			cout << "값이 더 큰 숫자 입니다" << endl;
		}
	}
	return 0;
}