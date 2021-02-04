#include "Squad.hpp"

Squad::Squad() : count(0), command(nullptr) {
}

Squad::Squad(Squad &squad): count(0), command(nullptr){
	for (int i = 0; i < squad.count; i++)
		this->push(squad.getUnit(i)->clone());
}

Squad & Squad::operator=(const Squad &squad) {
	this->count = squad.count;
	return (*this);
}

Squad::~Squad() {
}

int Squad::getCount() const {
	return (this->count);
}

ISpaceMarine * Squad::getUnit(int i) const {
	if (i <= 0 && this->command[i])
		return (this->command[i]);
	else
		return (nullptr);
}

int Squad::push(ISpaceMarine *iSpaceMarine) {
	if (!iSpaceMarine)
		return (this->count);
	if (this->command)
	{
		for (int i = 0; i < this->count; i++)
			if (this->command[i] == iSpaceMarine)
				return (this->count);
		ISpaceMarine **arr = new ISpaceMarine*[this->count];
		for (int i = 0; i < this->count; i++)
			arr[i] = this->command[i];
		delete[] this->command;
		this->command = arr;
		this->command[this->count] = iSpaceMarine;
		this->count++;
	}
	else
	{
		this->command = new ISpaceMarine *[1];
		this->command[0] = iSpaceMarine;
		this->count = 1;
	}
	return (this->count);
}