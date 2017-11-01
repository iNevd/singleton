#ifndef SINGLETON_H
#define SINGLETON_H

template <class T, class... Args>
class Singleton {
public:
	static T& getInstance(Args... args) {
		static T t(std::forward<Args>(args)...);			// multithread safe in c++11
		return t;
	}
public:
	Singleton& operator =(const Singleton) = delete;
	Singleton(const Singleton&) = delete;
	Singleton() = default;
};

#endif//SINGLETON_H
