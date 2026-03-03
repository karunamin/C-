// C++ 클래스
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>



class Human {
private:
	char name[20];
	int age;
	char job[20];

public:
	Human(const char* aname, int aage, const char* ajob) {
		strcpy(name, aname);	// name = aname;
		age = aage;
		strcpy(job, ajob);		// job = ajob;
	}
	void show()
	{
		std::cout << "이름: " << name << ", 나이: " << age << ", 직업: " << job << std::endl;
	}
};

int main()
{
	Human h("hong", 30, "student");

	h.show();


	return 0;
}