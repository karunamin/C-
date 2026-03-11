
#ifndef COURSEROSTER_H
#define COURSEROSTER_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

// 클래스 정의
class CourseRoster
{
private:
	int size;
	string* stdNames;
public:
	CourseRoster();
	~CourseRoster();
	void addStudent(string studentName);
	void print()const;
};
#endif // ! COURSEROSTER_H
