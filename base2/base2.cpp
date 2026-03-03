#include <iostream>



int main(void) {
	
	int age;
	std::string name;

	std::cout << "이름: " << std::endl;
	std::cin >> name;

	int val1;
	std::cout << "첫 번째 숫자입력: ";
	std::cin >> val1;

	int val2;
	std::cout << "두번째 숫자입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std:: endl;

	return 0;
}