#include "Phone.h"


Phone::Human::Human(std::string name, std::string number) {
	_name = name;
	_number = number;
}

void Phone::add(std::string name, std::string number) {
	_human.push_back(Human(name, number));
}

std::string Phone::getName(int index) {
	return _human[index]._name;
}

std::string Phone::getNumber(int index) {
	return _human[index]._number;
}

