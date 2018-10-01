#include <iostream>
#include "Person.hpp"

int main() {
    Person* person = new Person();
    std::cout << person->getName() << std::endl;
    delete(person);
	return 0;
}
