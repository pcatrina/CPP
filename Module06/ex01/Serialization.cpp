#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

std::string random(std::string str)
{
	char tmp[5];
	for (int i = 0; i < 4; i++)
	{
		int j = rand() % (126 - 30) + 30;
		tmp[i] = static_cast<char>(j);
	}
	tmp[4] = '\0';
	str = std::string(tmp);
	return str;
}

void *serialize(void)
{
	Data *m = new Data;
	m->s1 = random(m->s1);
	m->s2 = random(m->s2);
	m->n = rand();

	return (reinterpret_cast<void *>(m));
}

Data * deserialize(void * raw)
{
	return (reinterpret_cast<Data *>(raw));
}


int main()
{
	srand(time(nullptr));

	void *ptr;
	Data *m;

	ptr = serialize();
	m = deserialize(ptr);


	std::cout<<m->s1<<" " <<m->n<<" "<<m->s2<<std::endl;
	std::cout<<sizeof(m->s1)<<" "<< sizeof(m->n)<<" "<< sizeof(m->s2)<<std::endl;
	std::cout<< sizeof(Data)<<std::endl;

	delete m;
	return 0;
}