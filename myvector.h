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
		int * _internal_list; // we will get this list and add new ones
		int _size = 0;

		void increase_capacity(int n);
		void decrease_capacity(int n);

	public:

		MyVector();

		int size();
		void empty();
		void push_back(int n);
		void pop_back(int n);
		void pop_back();
		void clear();

		// debugging methods

		std::string to_string();
};