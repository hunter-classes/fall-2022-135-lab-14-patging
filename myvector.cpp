/*
	Patrick Ging
	Professor Zamanksy
	Lab 14
	myvector.cpp
*/
#include <algorithm>
#include <string>
#include "myvector.h"

//////// Constructor


// default constructor inits with no size
MyVector::MyVector() {
	_internal_list = new int[0];
}

/////// private methods

/*
	Increases the capacity of the vector by n
*/
void MyVector::increase_capacity(int n) {
	int * tmp = new int[_size+n];

	std::copy(_internal_list,_internal_list + _size,tmp);

	delete[] _internal_list;
	_internal_list = tmp;
}

/*
	Decreases the capacity by n

	will throw an error if n > the size of the vec
*/
void MyVector::decrease_capacity(int n) {

	if(_size - n < 0) {
		// if n is greater than the size of size
		//throw std::invalid_argument("Can't decrease by more than the size of the vector"); 
		return;
	}

	int * tmp = new int[_size-n];

	std::copy(_internal_list,_internal_list - n,tmp);

	delete[] _internal_list;
	_internal_list = tmp;
	_size -= n;
}

////// public methods

/*
	Returns the size of the vector 
	num of items in vector
*/
int MyVector::size() {
	return _size;
}

/*
	Empties the vector
*/
void MyVector::empty() {
	_size = 0;
	delete[] _internal_list;
}

/*
	pushback

	adds n to the back of the vector
*/
void MyVector::push_back(int n) {
	increase_capacity(1); // updating internal array and capacity

	_internal_list[_size] = n;
	// b/c the last item of the old list is size-1
	// therefore in this newly expanded one it's size

	_size += 1; //updating size
}

/*
	Pop the last item of the vector
*/
void MyVector::pop_back(int n) {
	decrease_capacity(n);
	_size -= n;
}

/*
	Pops the last item 
*/
void MyVector::pop_back() {
	decrease_capacity(1);
	_size -= 1;
}

void MyVector::clear() {
	delete[] _internal_list;
	_size = 0;
}

// debugging methods

/*
	to_string()

	prints out the items in a vector
	eg < 1 2 3 4 >
*/
std::string MyVector::to_string() {
	std::string str = "< ";

	for(int i=0; i <_size;i++) {
		str = str + std::to_string(_internal_list[i]) + " ";
	}

	return str + ">";
}