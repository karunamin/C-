
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
int main() {
	int* arr;
	int size;
	printf("배열크기를 입력하세요: ");
	scanf("%d", &size);
	arr = (int*)malloc(sizeof(int) * size);

	printf("%d 숫자를 입력하세요: ", size);
	for (int i = 0; i < size; i++) {
		printf("%d 번째 숫자: ", i + 1);
		scanf("%d", arr + i);
	}

	for (int i = 0; i < size; i++) {
		if (arr != nullptr) {
			printf("%d\n", arr[i]);

		}

	}
		free();
		return 0;
}
*/



// c++
int main(){

	int size;
	int* arr;
	std::cout << "배열크기: ";
	std::cin >> size;

	arr = new int[size];		// 동적 할당: 포인터 = new 자료형
	
	std::cout << "만든 배열 크기: " << sizeof(int) * size << std::endl;

	delete[]arr;		// 동적 할당 해제

	return 0;
}