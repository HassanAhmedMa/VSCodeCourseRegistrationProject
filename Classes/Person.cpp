#include "Person.h"
#include <iostream>


Person::Person() {
}


void Person::setName(string& n){
    name == n ;
}

void Person::setId(int id) {
    id = id;
}

void Person::setUsername(string& u) {
    username = u;
}

void Person::setPassword(string& p) {
    password = p;
}
void Person::setNationalEgyptianID(int nid) {
    nationalEgyptianID = nid;
}

void Person::setPhoneNumber(int phone) {
    phoneNumber = phone;
}


string Person::getName() {
    return name;
}

int Person::getId()  {
    return id;
}

string Person::getUsername()  {
    return username;
}

string Person::getPassword()  {
    return password;
}

int Person::getNationalEgyptianID()  {
    return nationalEgyptianID;
}

int Person::getPhoneNumber() {
    return phoneNumber;
}
void Person::changeUsername(string& newUsername) {
    username = newUsername;
}


void Person::changePassword(string& newPassword) {
    password = newPassword;
}
void Person::displayInformation()
{
}
void Person::setDateOfBirth(string &dateofbirth)
{
    DateOfBirth = dateofbirth;
}

string Person::getDateOfBirth() {
    return DateOfBirth;
}