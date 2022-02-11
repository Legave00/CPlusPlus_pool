#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:

	unsigned int	_size;
	T				*_array;

	public:

	Array();
	Array(unsigned int n);
	Array(Array &obj);
	~Array();

	unsigned int	size();

	Array	&operator =(Array &obj);
	T		&operator[](unsigned int n);
};


template<typename T>
Array<T>::Array()
{
	std::cout << "Def constructor called" << std::endl;
	_size = 0;
	_array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Constructor of int called" << std::endl;
	_size = n;
	_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		_array[i] = T();
}

template<typename T>
Array<T>::Array(Array &obj)
{
	std::cout << "Copy constructor" << std::endl;
	_size = obj.size();
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = obj._array[i];
}

template<typename T>
Array<T>::~Array()
{
	std::cout << "Destructor called" << std::endl;
	if (_array)
		delete[] _array;
}

template<typename T>
unsigned int	Array<T>::size()
{
	return(_size);
}

template<typename T>
Array<T> &Array<T>::operator=(Array &obj)
{
	std::cout << "Assigment constructor" << std::endl;
	_size = obj.size();
	if (_array)
		delete[]	_array;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = obj._array[i];
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int n)
{
	if (n < 0 || n > _size)
		throw std::exception();
	return (_array[n]); 
}

#endif