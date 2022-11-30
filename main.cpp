/*
	Patrick Ging
	Professor Zamanksy
	Lab 14
	main.cpp
*/
#include <iostream>
#include "myvector.h"

int main() {
	std::cout << "Initializing array" << std::endl;
	MyVector mv;	
	mv.push_back(5);
	mv.push_back(15);
	mv.push_back(225);
	mv.push_back(25);
	mv.push_back(22);	

	std::cout << "Pushing in 5, 15, 225,25,22" << std::endl;
	std::cout << mv.to_string() << std::endl;
	std::cout << "Size is " << mv.size() << std::endl;

	std::cout << "Item at 0 " << mv[0] << std::endl;
	std::cout << "Item at 1 " << mv[1] << std::endl;
	std::cout << "Item at 2 " << mv[2] << std::endl;

	mv.pop_back();
	std::cout << "Popping the first item" << std::endl;
	std::cout << mv.to_string() << std::endl;

	mv.pop_back(3);
	std::cout << "Popping 3 items" << std::endl;
	std::cout << mv.to_string() << std::endl;

	mv.clear();
	std::cout << "Clear items" << std::endl;
	std::cout << mv.to_string() << std::endl;	
	
	return 0;
}