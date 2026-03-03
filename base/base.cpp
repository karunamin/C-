
#define SQUARE(x)((x)*(x))

#include <iostream>

int main(void) {
	
	
	int num = 20;
	//printf("num: %d", num);
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	int val1;
	std::cout << "첫 번째 숫자입력: ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;
	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;;
	





	return 0;
}


