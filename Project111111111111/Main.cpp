#include <iostream>
#include <vector>
#include <string>
#include "Phone.h"

#include <list>


int main() {

	Phone phn;
	phn.add("Tom", "+799999999");
	std::cout << phn.getName(0) << "\n\n";


	std::list<int> mylist(5);
	std::list<int>::iterator iter = mylist.begin();
		
	int i = 0;

	for (auto el = mylist.begin(); el != mylist.end(); ++el, ++i) {
		*el = i;
		std::cout << *el << std::endl;
	}


	return 0;
}