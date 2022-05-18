//
// Created by unkno on 5/11/2022.
//

#ifndef PHONEBOOK_PERSON_H
#define PHONEBOOK_PERSON_H
#include <string>
#include <sstream>
#include <fstream>
using std::string;
using std::stringstream;
using std::ostream;
using std::istream;

class Person {
public:
    Person (const char* name, const char* phone, int level = 0);
    Person(const Person& person);
    const Person& operator=(const Person& rhs);
    string ToString() const;
    string TOJSON() const;
    string GetName() const;
    string GetPhone() const;
    int GetLevel() const;
    bool Equals(const Person& person) const;
    istream Read(istream& input);
    ostream Write(ostream& Output);
    ~Person();

private:
    char* _name;
    char _phone[11];
    int _level;

};


#endif //PHONEBOOK_PERSON_H
