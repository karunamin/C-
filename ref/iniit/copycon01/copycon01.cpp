// 깊은 복사

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>


class Person {
private:
	char* m_name;
	int m_age;
public:
	// 생성자
	Person(const char* name, int age) {
		printf("생성자 호출!!\n");
		m_name = new char[strlen(name) + 1];
		strcpy(m_name, name);
		m_age = age;
	}
	// 복사 생성자 (깊은 복사)
	Person(const Person& other) {
		printf("복사생성자 호출!!\n");
		m_name = new char[strlen(other.m_name) + 1];
		strcpy(m_name, other.m_name);
		m_age = other.m_age;
	}
	void showPerson() {
		printf("이름: %s, 나이: %d\n", m_name, m_age);
	}	
	// 소멸자
	~Person() {
		printf("소멸자 호출\n");
		delete[]m_name;
	}
};


int main() {
	Person man("홍길동", 100);
	man.showPerson();

	Person cpman = man;
	cpman.showPerson();


	return 0;
}