//
// Created by unkno on 5/16/2022.
//

#ifndef PHONEBOOK_PHONEBOOK_H
#define PHONEBOOK_PHONEBOOK_H

#include "Person.h"
#include <string>
const int MAX_FRIENDS = 5;
class PhoneBook {
private:
    Person _data[MAX_FRIENDS];
    size_t _size;
public:
    PhoneBook();
    ~PhoneBook();
    PhoneBook(const PhoneBook &pb);
    const PhoneBook& operator=(const PhoneBook& rhs);
    bool AddPerson(const Person& person);
    bool RemovePerson(const char* name);
    Person FindPerson(const char* name)const;
    string ToJSON()const;
    string ToString() const;
    istream& Read(istream& input);
    ostream& Write(ostream& output);
};


#endif //PHONEBOOK_PHONEBOOK_H

