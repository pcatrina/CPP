#ifndef MODULE08_SPAN_HPP
#define MODULE08_SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <exception>
#include <string>

class Span
{
private:
	std::vector<int>	arr;
	unsigned int		N;
	Span();
public:
	Span(unsigned int N);
	Span(Span const &span1);
	Span &operator=(Span const &span1);
	~Span();

	void addNumber(int);
	int shortestSpan();
	int longestSpan();
};


#endif //MODULE08_SPAN_HPP
