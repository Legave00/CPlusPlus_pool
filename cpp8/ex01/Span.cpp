#include "Span.hpp"

Span::Span()
{
	
}

Span::Span(unsigned int N)
{
	if (N < 1)
		throw WrongArgs();
	_N = N;
	_index = 0;
	_array = new int[_N];
}

Span::~Span()
{
	delete[] _array;
}

int		*Span::getArray() const
{
	return(_array);
}

Span::Span(const Span &obj)
{
	_N = obj._N;
	_index = obj._index;
	_array = new int[_N];
	std::copy(obj.getArray(), obj.getArray() + _N, _array);
}

Span	&Span::operator=(const Span &obj)
{
	_N = obj._N;
	_index = obj._index;
	if (_array)	
		delete[] _array;
	_array = new int[_N];
	std::copy(obj.getArray(), obj.getArray() + _N, _array);
	return (*this);
}

void	Span::addNumber(int Number)
{
	if (_index < _N)
	{
		_array[_index] = Number;
		_index++;
	}
	else
		throw ArrayIsFull();
}

void	Span::addNumbers(int begin, int end)
{
	int i = _N - _index;
	int	b = std::abs(end - begin);
	std::cout << "b : " << b << " i : " << i << std::endl;
	if (begin > end || (begin < 0 && end > 0 && (b + 1) > i))
		throw WrongArgs();
	for (int i = 0; i <= b; i++)
	{
		addNumber(begin + i);
	}
}

int		Span::longestSpan()
{
	if (_index > 1)
	{
		int	i = 0;
		int	*array = new int[_N];
		std::copy(_array, _array + _N, array);
		std::sort(array, array + _N);
		i = array[_N - 1] - array[0];
		delete[] array;
		return (i);
	}
	else
		throw ArrayIsEmpty();
	return (-1);
}

int		Span::shortestSpan()
{
	int min = 2147483647;
	if (_index > 1)
	{
		int	*array = new int[_N];
		std::copy(_array, _array + _N, array);
		std::sort(array, array + _N);
		for (unsigned int i = 1; i < _N; i++)
			if (array[i] - array[i-1] < min)
				min = array[i] - array[i-1];
		delete[] array;
		return (min);
	}
	else
		throw ArrayIsEmpty();
	return (-1);
}

unsigned int	Span::getLength() const
{
	return (_N);
}

unsigned int	Span::getIndex() const
{
	return (_index);
}

const char * Span::ArrayIsEmpty::what() const throw()
{
	return ("There are no numbers stored, or only one");
}

const char * Span::ArrayIsFull::what() const throw()
{
	return ("Array is full");
}

const char * Span::WrongArgs::what() const throw()
{
	return ("Wrong args");
}
