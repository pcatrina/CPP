#include <iostream>
#include "Span.hpp"

int main()
{
	Span sp = Span(10000);
	sp.addNumber(1);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(100);
	sp.addNumber(2);
	std::cout <<"Shortest span - "<< sp.shortestSpan() << std::endl;
	std::cout <<"Longest span - "<< sp.longestSpan() << std::endl;
}
