#ifndef CMAKE_DEMO_4_PERSON_H_
#define CMAKE_DEMO_4_PERSON_H_
#include <string>
class Person {
public:
    Person();
    ~Person();
    int Calc(int a, int b);

private:
    int age;
    std::string name;
};

#endif // CMAKE_DEMO_4_PERSON_H_