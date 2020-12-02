#include "person.h"
#include "add.h"

Person::Person() {}
Person::~Person() {}

int Person::Calc(int a, int b)
{
    return Add(a, b);
}