

//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int num = 10;
//	int& ref = num;
//	int* pnum = &num;
//
//	num++;
//	ref++;
//	(*pnum)++;
//
//	cout << "num: " << num << endl;
//	cout << "ref: " << ref << endl;
//	cout << "*pnum: " << *pnum << endl;
//
//	cout << "&num: " << &num << endl;
//	cout << "&ref: " << &ref << endl;
//
//	return 0;
//}


#include <iostream>
using namespace std;


int funt(int n) {
	n++;
	return n;
}

int& funt1 (int r){
r++;
return r;

}

int main() {

	int num = 10;

	int ret = funt(num);
	cout << ret << endl;

	int res = funt1(num);
	cout << res << endl;
	int& ref = funt1(num);
	cout << ref << endl;



	return 0;
}