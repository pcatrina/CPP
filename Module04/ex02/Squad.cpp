#include "Squad.hpp"

Squad::Squad() {
}

Squad::Squad(Squad &squad){
	count = squad.getCount();
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
	if (i < 0 && this->command[i])
		return (this->command[i]);
	else
		return (NULL);
}

int Squad::push(ISpaceMarine *iSpaceMarine) {
	if (iSpaceMarine == NULL)
		return (0);
	else {
		this->command[getCount() + 1] = iSpaceMarine;
		count++;
	}
	return (getCount());
}