### C++11 singleton class template

C++11 单例类模板 (thread safe for c++11)



#### Usage

```c++
class Test : public Singleton<Test> {
public:
	Test() {
		std::cout << "default constructor" << std::endl;
	}
}

Test* test = Test::getInstance();
```

```c++
class Test2 : public Singleton<Test2, int> {
public:
	Test(int) {
		std::cout << "constructor with args" << std::endl;
	}
}

Test2* test2 = Test2::getInstance(100);
```
