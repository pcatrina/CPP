#include "Span.hpp"

Span::Span() : arr() {}

Span::Span(unsigned int N) : arr() {
	this->N = N;
}

Span::Span(const Span &span1) : arr(span1.arr){}

Span & Span::operator=(const Span &span1) {
	if (this == &span1)
		return (*this);
	this->arr = span1.arr;
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int i) {
	try {
		(this->arr.size() >= N) ? throw (std::string("Can't add")) : this->arr
		.push_back(i);
	}
	catch (std::string &e) {
		std::cout<<e<<" - "<<i<<std::endl;
	}
}

int Span::shortestSpan() {
	if (this->arr.size() == 1 || this->arr.empty())
		throw (std::string("nothing to span"));
	std::vector<int>::iterator it_1;
	std::vector<int>::iterator it_2;
	int res;
	std::sort(arr.begin(), arr.end());
	it_1 = arr.begin();
	it_2 = it_1 + 1;
	res = *it_2 - *it_1;
	for (unsigned int i = 0; i < this->N; i++)
	{
		it_1 = it_2;
		it_2++;
		if (res < (*it_2 - *it_1))
			res = *it_2 - *it_1;
	}
	return (res);
}

