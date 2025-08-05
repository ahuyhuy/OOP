trans: transform.cpp transform_main.cpp
	g++ transform_main.cpp transform.cpp -o transform
	./transform

.PHONY: trans

arith: transform.cpp arithmetic.cpp arithmetic-main.cpp
	g++ transform.cpp arithmetic.cpp arithmetic-main.cpp -o arith
	./arith

.PHONY: arith