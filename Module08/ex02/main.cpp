#include <iostream>
#include "MutantStack.hpp"

int main()
{

	std::cout << std::endl << std::string(15, ' ') << "Basic test" <<
	std::endl;
	MutantStack<int> mstack;
	MutantStack<int> pipe(mstack);
	pipe.empty();
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl << std::string(15, ' ') << "Copy test" <<
	std::endl
	<< std::endl;
	std::stack<int> s(mstack);
	std::cout<<s.size()<<std::endl;
	std::cout<<mstack.size()<<std::endl;

	std::cout << std::endl << std::string(15, ' ') << "std::string test"
	<<std::endl;

	MutantStack<std::string> stack_1;

	stack_1.push("testString1");
	stack_1.push("testString2");
	stack_1.push("testString3");
	stack_1.push("testString4");
	stack_1.push("testString5");

	for (MutantStack<std::string>::iterator it = stack_1.begin(); it != stack_1.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	std::cout << std::endl << std::string(15, ' ') << "float of tests" <<
	std::endl;

	MutantStack<float> stack_2;

	stack_2.push(17.3);
	stack_2.push(10.5);
	stack_2.push(14.2);
	stack_2.push(8.9);
	stack_2.push(9.8);

	for (MutantStack<float>::iterator it = stack_2.begin(); it != stack_2.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return 0;
}
