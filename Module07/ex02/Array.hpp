#ifndef MODULE07_ARRAY_HPP
#define MODULE07_ARRAY_HPP

#include <exception>
#include <iostream>

template<typename T> class Array {
public:
	class Error : public std::exception
	{
		virtual const char * what() const throw() {
			return "Error";
		};
	};

	Array();
	Array(unsigned  int n);
	Array(Array<T> const &array);
	~Array();
	Array &operator=(const Array<T> &array);
	T &operator[](unsigned int i);
	unsigned int size();
private:
	unsigned int n;
	T	*arr;
};

template<typename T> Array<T>::Array() : n(0), arr(nullptr) {
}

template<typename T> Array<T>::Array(unsigned int n) : n(0), arr(nullptr) {
	this->arr = new T[n];
	this->n = n;
	std::cout<<*this->arr<<std::endl;
}

template<typename T> Array<T> & Array<T>::operator=(const Array<T> &array) {
	if (this == array)
		return (*this);
	if (this->n > 0)
		delete[] this->arr;
	this->arr = nullptr;
	this->n = array.n;
	if (array.n > 0)
	{
		this->arr = new T[array.n];
		for (int i = 0; i < array.n; i++)
			this->arr[i] = array.arr[i];
	}
	return (*this);
}

template<typename T> Array<T>::Array(const Array<T> &array) : n(array.n), arr(nullptr) {
	if (array.n > 0)
	{
		this->arr = new T[array.n];
		for (unsigned int i = 0; i < array.n; i++)
			this->arr[i] = array.arr[i];
	}
}

template<typename T> Array<T>::~Array<T>() {
	(this->n > 0) ? delete[] this->arr : throw Array<T>::Error();
}

template<typename T> T &Array<T>::operator[](unsigned int i) {
	if (this->n <= i)
		throw Array<T>::Error();
	else
		return (this->arr[i]);
}

template<typename T> unsigned int Array<T>::size(){
	return this->n;
}

#endif //MODULE07_ARRAY_HPP
