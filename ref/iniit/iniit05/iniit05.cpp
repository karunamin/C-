
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person {
private:
	char name[20];
	int age;
public:
	Person(const char* name, int age) {
		printf("생성자 호출\n");
		strcpy(this->name, name);
		this->age = age;
	}
	void viewPerson() {
		printf("이름: %s, 나이: %d\n", this->name, this->age);
	}
};


int main() 
{
	Person p("홍길동", 100);
	p.viewPerson();

	Person p1 = p;			// 객체를 복사해서 생성한다.(복사생성자)
	p1.viewPerson();

	Person p2(p);			// 복사생성자 호출
	p2.viewPerson();

	return 0;
}