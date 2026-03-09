
#include <iostream>
using namespace std;

class A {
public:
	int x;
	A(int value) {
		x = value;
		cout << "일반생성자" << endl;
	}
	A(const A& other) {
		x = other.x;
		cout << "복사생성자" << endl;
	}
};

int main() {
	A a1(10);
	A a2 = a1;
	cout << "a1 value: " << a1.x << endl;
	cout << "a2 value: " << a2.x << endl;
	cout << "a1 address: " << &a1.x << endl;
	cout << "a1 address: " << &a2.x << endl;
}