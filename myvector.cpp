/*
	Patrick Ging
	Professor Zamanksy
	Lab 14
	myvector.cpp
*/

#include "myvector.h"

//////// Constructor

/*
	MyVector constructor

	takes a size and will intialize the list and the size
*/
MyVector::MyVector(int s) {
	internal_list = new int[s];
	capacity = s;
}

/////// private methods

/*
	Increases the capacity of the vector by n
*/
void MyVector::increase_capacity(int n) {
	int * tmp = new int[n];

	for(int i=0;i<internal_list.length;i++) {
		tmp[i] = n[i];
	}
	internal_list = tmp;
	delete tmp;
	capacity = size + n;
}

////// public methods

/*
	Returns the size of the vector 
	num of items in vector
*/
int MyVector::size() {
	return size;
}

/*
	Returns capacity of vector
*/
int MyVector::capacity() {
	return capacity;
}

/*
	Empties the vector
*/
void MyVector::empty() {
	size = 0;
	capacity = 0;
	delete internal_list;
}

/*
	pushback

	adds n to the back of the vector
*/
void MyVector::push_back(int n) {
	increase_capacity(1); // updating internal array and capacity

	internal_list[size] = n;
	// b/c the last item of the old list is size-1
	// therefore in this newly expanded one it's size

	size += 1; //updating size
}

/*
	Pop the last item of the vector
*/
void pop_back(int n) {
	
}

void pop_back();

void clear();