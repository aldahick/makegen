#include <string>
#include "Person.hpp"

std::string Person::getName() {
    return this->firstName + " " + this->lastName;
}
