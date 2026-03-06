

#include <iostream>
using namespace std;

int main() {

	//for (int i = 2; i < 10; i++) {
	//	for (int j = 1; j < 10; j++) {
	//		cout << i << "X" << j << "=" << i * j << endl;
	//	}
	//	cout << " " << endl;
	//}
	
	for (int j = 2; j < 10; j+=3) {
		for (int i = 1; i < 10; i++) {

			for (int k = j; k < j+3; k++) {
				if (k < 10) {
					cout << k << "X" << i << "=" << i * k << "	";
				}
			}
			cout << endl;
		}
		cout << "\n";
	}


	int num;
	int total = 0;
	// 입력이 끝날 때까지 반복 (EOF)
	while (cin >> num) { total += num; }
	cout << "총합 : " << total << endl;



	return 0;
}
