/*
	Patrick Ging
	Professor Zamansky
	Lab 14
	tests.cpp
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "myvector.h"

TEST_CASE("MyVector Tests") {

	MyVector mv; 

	// pushback and size
	mv.push_back(5);
	CHECK(mv.size() == 1);
	
	mv.push_back(225);
	CHECK(mv.size() == 2);	

	mv.push_back(25);
	CHECK(mv.size() == 3);
	
	mv.push_back(15);
	CHECK(mv.size() == 4);

	// pop_back

	mv.pop_back();
	CHECK(mv.size() == 3);

	mv.pop_back(2);
	CHECK(mv.size() == 1);

	//empty
	for(int i=0;i<20;i++){
		mv.push_back(i);
	}

	mv.empty();
	CHECK(mv.size() == 0);
	CHECK(mv.to_string() == "< >" );

}