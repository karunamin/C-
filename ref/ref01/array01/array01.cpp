
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char name[20] = "홍길동";
	char name1[20];
	//cp_name = name1;
	//name1 = "김영희";
	strcpy(name1, "김영희");



	cout << "name1: " << name1 << endl;
	//cout << "cp_name " << endl;

	char name2[20];
	cout << "이름을 입력하세요: ";
	cin >> name2;
	cout << "당신의 이름은 " << name2 << "입니다" << endl;



	return 0;

}