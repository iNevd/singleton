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

auto& test = Singleton<Test>::getInstance();
```
