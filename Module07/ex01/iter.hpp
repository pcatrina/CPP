#ifndef MODULE07_ITER_HPP
#define MODULE07_ITER_HPP

template<typename T> void display(T &el) {
	std::cout<<el;
}

template<typename T> void iter (T *address, size_t length,  void (*f)(T &elt)) {
	for (int i = 0; i < length; i++)
		(*f)(address[i]);
}

#endif //MODULE07_ITER_HPP