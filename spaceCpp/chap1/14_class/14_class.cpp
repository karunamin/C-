
#include <iostream>
using namespace std;

class Singleton {
private:
    Singleton() {}   // 생성자를 private으로 숨김

public:
    // 복사 생성자 삭제
    Singleton(const Singleton& extra) = delete;

    // 대입 연산자 삭제
    Singleton& operator=(const Singleton& extra) = delete;

    // 객체를 반환하는 static 함수
    static Singleton& getInstance() {
        static Singleton instance;  // 프로그램 전체에서 하나만 생성
        return instance;
    }
};

int main() {
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();

    cout << "s1 주소: " << &s1 << endl;
    cout << "s2 주소: " << &s2 << endl;

    return 0;
}