
#include <iostream>

using namespace std;

int main(void)
{
	//int num1 = 10;
	//num1 = 20;
	//cout << num1 << endl;

	//const int num2 = 10;
	//cout << num2 << endl;

	int num2 = 20;
	const int* p1 = &num2;
	cout << num2 << endl;
	cout << *p1 << endl;

	//*p1 = 10;

	int n3 = 22;
	p1 = &n3;

	cout << *p1 << endl;

	int n2 = 40;
	int* const p2 = &n2;

	*p2 = 50;
	//p2 = &n3;
	cout << *p2 << endl;
	
	return 0;
}
