#include <iostream>
#include "singleton.h"

// constructor without args
class Test : public Singleton<Test> {
	friend SingletonDerived;
public:
	Test() {
		std::cout << "constructor without args" << std::endl;
	}
};

// constructor with args
class Test2 : public Singleton<Test2, int> {
	friend SingletonDerived;
public:
	Test2(const int i){
		std::cout << "constructor with int: " << i << std::endl;
	}
};

int main()
{
	auto pt10 = Test::getInstance();
	auto pt11 = Test::getInstance();
	auto pt20 = Test2::getInstance(100);
	auto pt21 = Test2::getInstance(200);
}
