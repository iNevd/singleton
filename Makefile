main: singleton.h example.cpp
	gcc -lstdc++ example.cpp -I. -std=c++11 -o main
	./main

clean: main
	rm -f main