

#include <iostream>
using namespace std;

int main() {


	//int& ref = 4;
	const int& ref = 4;	// 상수레퍼런스로 선언하면 리터럴도 참조할 수 있다.

	cout << "ref: " << ref << endl;


	return 0;
}