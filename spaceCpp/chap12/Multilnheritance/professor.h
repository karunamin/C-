
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person.h"

class Professor :virtual public Person
{
protected:
	double salary;
public:
	Professor(string name, double aslary);
	~Professor();
	void print();

};
#endif