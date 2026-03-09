

#include <iostream>
using namespace std;

class Circle {
private:
	static double radius;
public:
	double getRadius() const { return radius; } // Getter: 값을 읽기만 하므로 const 가능
	void setRadius(double r) { radius = r; } // Setter: 값을 수정해야 하므로 const 제거
	// 일반 멤버 함수: radius에 접근해야 하므로 static 제거(static은 같은 static끼리)
	static double getAreaOfCircle() { return radius* radius * 3.14; }
};
double Circle::radius = 0.0;

int main() {
	Circle c1;
	c1.setRadius(10.0);
	cout << "반지름: " << c1.getRadius() << endl;
	// 함수 호출 시 반드시 ()를 붙여야 함
	cout << "넓이: " << c1.getAreaOfCircle() << endl;
}




/*
class Player {
public:
	static int totalPlayers;	//선언
	Player() { totalPlayers++; }
};

// static은 클래스 외부에서 반드시 초기화
int Player::totalPlayers = 1;

int main() {
	Player p1, p2, p3;
	cout << "플레이어 수: " << p1.totalPlayers << endl;
	return 0;
}
*/