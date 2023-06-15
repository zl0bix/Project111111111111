#pragma once
#include <iostream>
#include <string>
#include <vector>


class Phone {
private:
	class Human {
	public:
		std::string _name;
		std::string _number;
		Human(std::string name, std::string number);
	};
	std::vector<Human> _human;
public:
	void add(std::string name, std::string number);
	std::string getName(int index);
	std::string getNumber(int index);
};