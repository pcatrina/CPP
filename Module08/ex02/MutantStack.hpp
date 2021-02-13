#ifndef MODULE08_MUTANTSTACK_HPP
#define MODULE08_MUTANTSTACK_HPP

#include <stack>
#include <string>
#include <queue>
#include <iostream>

template<typename T> class MutantStack : public std::stack<T> {
public:
	MutantStack() : std::stack<T>() {};
	MutantStack(MutantStack const &mutantStack);
	MutantStack &operator=(const MutantStack<T> &mutantStack);
	~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(){
		return (this->c.begin());
	};

	iterator end(){
		return (this->c.end());
	};
};

template<typename T> MutantStack<T>::MutantStack(const MutantStack<T>
        &mutantStack) {
	*this = mutantStack;
}

template<typename T> MutantStack<T> & MutantStack<T>::operator=(
		const MutantStack<T> &mutantStack) {
	if (this == &mutantStack)
		return (*this);
	std::stack<T>::operator=(mutantStack);
	return (*this);
}


#endif //MODULE08_MUTANTSTACK_HPP
