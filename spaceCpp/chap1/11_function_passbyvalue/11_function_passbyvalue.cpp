//
//#include <iostream>
//using namespace std;
//
//void fun(int y);	// 함수 선언
//
//int main() {
//
//	int x = 10;
//	// x를 arguments fun 함수 호출
//	fun(x);	// x의 값이 변했는지 확인(변하지 않음)
//	cout << "main 함수 내부의 x = " << x << endl;
//	return 0;
//}


/**************************************************************
* 참조로 전달 메커니즘에서 parameter의 변경이                 *
* argument에 영향을 준다는 것을 확인하는 프로그램             *
***************************************************************/
/*
#include <iostream>
using namespace std;

// 함수 선언
void fun(int& y); // & 기호는 y가 참조라는 것을 나타냄

int main()
{
	// 변수 선언
	int x = 10;
	cout << "main 함수 내부의 x = " << x << endl;

	// x를 argument fun 함수 호출
	fun(x);
	// x의 값이 변했는지 확인(변함)
	cout << "main 함수 내부의 x = " << x << endl;
	return 0;
}

void fun(int& y)
{
	y++;
	cout << "fun 함수 내부의 y = " << y << endl;
	return;
}

/**************************************************************
 * fun 함수는 y로 참조를 전달 받음                            *
 * 따라서 y는 함수 호출 때 argument의 별칭이 됨               *
 * parameter를 변경하면                                       *
 * argument가 함께 변화                                       *
 **************************************************************/
//////////////////////////////////////////////////////////////////
 /**************************************************************
  * 참조로 전달 메커니즘을 사용해서                            *
  * 두 값을 스왑(swap)하는 프로그램                            *
  **************************************************************/
#include <iostream>
using namespace std;

void swap(int* first, int* second);   // 함수 선언

int main()
{
	// 선언
	int first = 10;
	int second = 20;
	cout << first << "/" << second << endl;
	swap(&first, &second);  // 함수 호출
	// 스왑 확인
	cout << first << "/" << second << endl;
	return 0;
}
/**************************************************************
 * swap 함수는 참조로 전달 매커니즘으로                       *
 * 2개의 parameter를 받음                                     *
 * temp라는 임시 변수를 사용해서 fst와 snd의 값을 스왑        *
 * 참조로 전달 메커니즘으로 받은 parameter를 변경했으므로     *
 * argument(main 함수의 first와 second)에도 영향을 미침       *
 **************************************************************/
void swap(int* fst, int* snd)
{
	int temp = *fst;
	*fst = *snd;
	*snd = temp;
	cout << *fst << "/" << *snd << endl;

	return;
}