main:	changeValue.cpp printArray.cpp arrayMax.cpp dynamicArray.cpp main.cpp
			g++ changeValue.cpp printArray.cpp arrayMax.cpp dynamicArray.cpp main.cpp -o all
			./all

.PHONY: main

pt1:	pt1.cpp
	g++ pt1.cpp -o pt1
	./pt1

.PHONY: pt1

all: main pt1

clean:
	rm -f main pt1