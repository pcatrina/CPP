#ifndef MODULE08_EASYFIND_HPP
#define MODULE08_EASYFIND_HPP

#include <exception>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>

template<typename T> typename T::iterator easyfind(T&vector, int i) {
	typename T::iterator it = std::find(std::begin(vector), std::end(vector),i);
	if (*it == i)
		return (it);
	throw (std::string("No contain"));
}

#endif //MODULE08_EASYFIND_HPP
