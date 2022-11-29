/*
	Patrick Ging
	Professor Zamanksy
	Lab 14
	main.cpp
*/
#include <iostream>
#include "myvector.h"

int main() {
	std::cout
	MyVector mv;
	mv.push_back(5);
	mv.push_back(15);
	mv.push_back(225);

	std::cout << mv.to_string() << std::endl;

	mv.empty();
	std::cout << mv.to_string();
	return 0;
}