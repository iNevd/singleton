#include <iostream>
#include "singleton.h"

class Test : public Singleton<Test> {
public:
	Test() {
		std::cout << "default constructor" << std::endl;
	}
	Test(int i) {
		std::cout << "constructor with int: " << i << std::endl;
	}
public:
	static const Test& getInstance() {
		return Singleton<Test>::getInstance();
	}

	static const Test& getInstance(int i) {
		return Singleton<Test, int>::getInstance(i);
	}
};

int main()
{
	auto& a1 = Test::getInstance();
	auto& b1 = Test::getInstance(0);
	auto& a2 = Test::getInstance();
	auto& b2 = Test::getInstance(1);
	std::cout << "a: " << &a1 << std::endl;
	std::cout << "b: " << &b1 << std::endl;
	std::cout << "a2: " << &a2 << std::endl;
	std::cout << "b2: " << &b2 << std::endl;
    return 0;
}
