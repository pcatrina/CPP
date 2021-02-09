#include <iostream>
#include <fstream>

class data
{
public:
	void setS1(const std::string &s1)
	{
		data::s1 = s1;
	}

	void setN(int n)
	{
		data::n = n;
	}

	void setS2(const std::string &s2)
	{
		data::s2 = s2;
	}

	const std::string &getS1() const
	{
		return s1;
	}

	int getN() const
	{
		return n;
	}

	const std::string &getS2() const
	{
		return s2;
	}
private:
	std::string s1;
	int n;
	std::string s2;
};

//void *serialize(void)
//{
//
//}


int main()
{
	data *m = new data;
	srand(time(nullptr));

	m->setS1("a4a4a4a4");
	m->setN(rand());
	m->setS2("aasd1997");

	std::cout << m->getS1().size() * sizeof(std::string::value_type)<<std::endl;
	std::cout<< sizeof(m->getN())<<std::endl;
	std::cout << m->getS2().size() * sizeof(std::string::value_type)<<std::endl;

	return 0;
}