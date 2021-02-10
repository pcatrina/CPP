#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

std::string random(std::string str)
{
	char tmp[9];
	for (int i = 0; i < 8; i++)
	{
		while (true)
		{
			int j = rand() % (126 - 30) + 30;
			char c = static_cast<char>(j);
			if (isalnum(c))
			{
				tmp[i] = c;
				break;
			}
		}
	}
	tmp[8] = '\0';
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
