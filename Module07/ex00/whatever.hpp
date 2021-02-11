#ifndef MODULE07_WHATEVER_HPP
#define MODULE07_WHATEVER_HPP

template<typename T> void swap (T & first, T & second) {
	T temp = static_cast<T>(first);
	first = second;
	second = temp;
}

template<typename T> T min (T & first, T & second) {
	if (first > second)
		return second;
	else if (first == second)
		return second;
	return first;
}

template<typename T> T max (T & first, T & second) {
	if (first > second)
		return first;
	else if (first == second)
		return second;
	return second;
}

#endif
