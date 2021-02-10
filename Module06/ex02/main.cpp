#include "iostream"

class Base{
public:
	virtual ~Base() {};
};

class A : public Base{
public:
	virtual ~A() {};
};

class B : public Base{
public:
	virtual ~B() {};
};

class C : public Base{
public:
	virtual ~C() {};
};


Base * generate(void)
{
	int i = rand()% (4 - 1) + 1;

	if (i == 1)
		return new A;
	else if (i == 2)
		return new B;
	return new C;
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout <<"A";
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout <<"B";
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout<<"C";
	else
		std::cout<<"Error!"<<std::endl;
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}


int main (void)
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		Base *base;
		base = generate();
		identify_from_pointer(base);
		std::cout << " - ";
		identify_from_reference(*base);
		std::cout << std::endl;
		std::cout << "---" << std::endl;
		delete base;
	}
	return 0;
}