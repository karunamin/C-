#include <iostream>

namespace BestComImpl {
	void SimpleFunc(void);
}
namespace BestComImpl {
	void PrettyFunc(void);
}
namespace ProgComImpl {
	void SimpleFunc(void);
}

int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}
namespace BestComImpl {
	void BestComImpl::SimpleFunc(void) {
		std::cout << "BestCom이 정의한 함수" << std::endl;
		PrettyFunc();
		ProgComImpl::SimpleFunc();
	}

	void BestComImpl::PrettyFunc(void) {
		std::cout << "So Pretty!!" << std::endl;
	}
}
namespace ProgComImpl {
	void SimpleFunc(void) {
		std::cout << "ProgCom이 정의한함수" << std::endl;
	}
}