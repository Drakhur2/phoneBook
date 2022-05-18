//
// Created by unkno on 5/11/2022.
//

#include "Person.h"
#include <cctype>
#include <iostream>
#include <cstring>
#include <sstream>
#include <fstream>
#include <cassert>

using std::getline;
using std::istream;
using std::stringstream;
using std::ostream;
using std::endl;

Person::Person(const char *name, const char *phone, int level) {
    strcpy(_phone, phone);
    _name = new char[strlen(name)+1];
    strcpy(_name, name);
    _level = level;
}
string Person::ToString() const {
    return string(_name);
}
string Person::TOJSON() const {
    stringstream bb;
    bb<<"{\"name\":\""<<_name<<"\", \"phone\":\""<<_phone<<"\", \"level\":\""<<_level<<"}";
    return bb.str();
}

string Person::GetName() const {
    return _name;
}

string Person::GetPhone() const {
    return _phone;
}

int Person::GetLevel() const {
    return _level;
}

bool Person::Equals(const Person &person) const {
    if(strcmp(_phone, person._phone)){
        return true;
    }
    return false;
}

//istream Person::Read(istream &input) {
//    return input;
//}

//ostream Person::Write(ostream &Output) {
//    return Output;
//}

Person::~Person() {
    delete[] _name;

}

Person::Person(const Person &person) {
    _name = new char[strlen(person._name)+1];
    strcpy(_name, person._name);
    strcpy(_phone, person._phone);
    _level = person._level;

}

const Person &Person::operator=(const Person& rhs) {
    if(strlen(_name) != strlen(rhs._name)){
        delete[] _name;
        _name = new char[strlen(rhs._name)+1];
    }
    strcpy(_name, rhs._name);
    strcpy(_phone, rhs._phone);
    _level = rhs._level;

    return *this;
}
