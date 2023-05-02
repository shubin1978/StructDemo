#ifndef INC_1_STRUCT_DEMO_PERSON_H
#define INC_1_STRUCT_DEMO_PERSON_H

#include "Date.h"
#include <string>

using namespace std;

struct Person{
    string first_name;
    string last_name;
    Date date_of_birth;
};

Person CreatePerson(string first_name, string last_name, Date date_of_birth){
    Person person;
    person.first_name = first_name;
    person.last_name = last_name;
    person.date_of_birth = date_of_birth;
    return person;
}

#endif //INC_1_STRUCT_DEMO_PERSON_H
