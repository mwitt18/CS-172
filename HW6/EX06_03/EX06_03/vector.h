#ifndef vector_h
#define vector_h

template <typename T>
class vector
{
//Only user can access these variables
private:
	int size1 = 0;
	T *buffer;
	int count = 0;
//Everyone can access these variables
public:
	vector();
	vector(int);
	vector(int, T);
	void push_back(T);
	void pop_back();
	unsigned const size();
	T const at(int);
	bool const empty();
	void clear();
	void swap(vector);
};

#endif
