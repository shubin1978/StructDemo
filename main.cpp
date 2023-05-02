#include <iostream>
#include <map>

#include "Person.h"

using namespace std;

void PrintPerson(Person person);
int main() {

    Person person;
    person.first_name = "Yury";
    person.last_name = "Shubin";
    person.date_of_birth.day = 13;
    person.date_of_birth.month = 11;
    person.date_of_birth.year = 1978;

    Date date = CreateDate(1982,10,30);
    Person person2 = CreatePerson("Sveta", "Shubina",date );

    PrintPerson(person);
    PrintPerson(person2);

    return 0;
}

void PrintPerson(Person person){
    cout << person.last_name << " " << person.first_name << ", " << person.date_of_birth.ToString(DateFormat::ReversSpecialNormal) << endl;
}
