

#include <iostream>
using namespace std;

class P {
public:
	//void f() { cout << "P::f" << endl; }	// 인스턴스 생성시 
	void f() { cout << "P::f" << endl; }
};

class C :public P {
public:
	void f() { cout << "C::f" << endl; }
};

int main() {
	// 내부 클래스 (inner Class) 변수처럼 사용가능한 클래스
	class A {
	public:
		virtual void f() { cout << "a::f" << endl; }	// 조상의 함수에 virtual을 붙이면 각각의 인스턴스별로 f()가 호출됨
	};
	class B : public A {
	public:
		void f() override { cout << "B::f" << endl; }
	};

	A* a = new B();
	a->f();	// Output: B::f (because B::f is virtual)
	delete a;
	
	C c;
	c.f();
	
	P p;
	p.f();	// Output: P::f

	P* p2 = new C();
	p2->f();	// Output: P::f (because P::f is virtual)

	P* p3 = new C;

	// C* c1 = new P(); 

	return 0;
}
