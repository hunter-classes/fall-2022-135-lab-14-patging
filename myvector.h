/*
	Patrick Ging
	Professor Zamanksy
	Lab 14
	myvector.h
*/

/*
	MyVector Class

	Is like the arraylist in Java
	atm just for integer
	has info on size, can empty, push
	pop, clear
*/
class MyVector {
	private:
		int * internal_list; // we will get this list and add new ones
		int size;
		int capacity = 0;

		void increase_capacity(int n);

	public:

		MyVector(int size);
		
		int size();
		int capacity();
		void empty();
		void push_back(int n);
		void pop_back(int n);
		void pop_back();
		void clear();
}