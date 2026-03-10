#include "student.h"

int main() {
	Person person(111111111);
	cout << "Person: " << endl;
	person.print();
	cout << endl;

	Student student(222222222, 3.75);
	cout << "student: " << endl;
	student.print();
	cout << endl;


	return 0;
}