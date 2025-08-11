main:	main.cpp
		g++ main.cpp -o main
		./main

.PHONY: main

pt1: pt1.cpp
	g++ pt1.cpp -o pt1
	./pt1

.PHONY: pt1

all: main pt1

clean:
	rm -f main pt1