
#include <iostream>


class Human {
public:
	char name[30];
	int age;
	char job[30];

	void show_data()
	{
		printf("이름: %s, 나이: %d, 직업: %s", name, age, job);
	}
};

int main()
{
	Human h = { "Hong",30,"student" };	// 구조체 변수 선언
	Human h1("Hong", 30, "student");		// 객체 생성 문법
	
	h.show_data();
	std::cout << std::endl;
	h1.show_data();

	return 0;
}