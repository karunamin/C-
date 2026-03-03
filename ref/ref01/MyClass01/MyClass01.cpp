
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

//setdata
//getdata

class MyClass {
private:
	int id;
	char name[20];
	int age;
	
public:
	MyClass(int aid, const char* aname, int aage);
	void getData();
};

MyClass::MyClass(int aid, const char* aname, int aage) {
	id = aid;
	strcpy(name, aname);
	age = aage;
	
}
void MyClass::getData() {
	std::cout << "id: " << id << " name: " << name << " age: " << age << std::endl;
}

int main() {
	//MyClass obj;		// 디폴트 생성자 호출. MyClass obj(): 함수 호출
	//obj.setData(001, "hong", 22);
	// MyClass obj1(001,"hong",22);

	MyClass obj(001, "hong", 22);

	obj.getData();

	return 0;
}