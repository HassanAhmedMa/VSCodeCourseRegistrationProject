#ifndef PERSON_H
#define PERSON_H
using namespace std;
#include <string>;

class Person {
private:
    string name;
    int id;
    string username;
    string password;
    int nationalEgyptianID;
    int  phoneNumber;
    string DateOfBirth;

public: 
    Person();
    void setName(string& n);
    void setId(int i);
    void setUsername(string& u);
    void setPassword(string& p);
    void setNationalEgyptianID(int nid);
    void setPhoneNumber(int phone);
    string getName();
    int getId();
    string getUsername();
    string getPassword();
    int getNationalEgyptianID();
    int getPhoneNumber();
    void changeUsername(string& newUsername);
    void changePassword(string& newPassword);
    virtual void displayInformation();
    void setDateOfBirth(string& dateofbirth);
    string getDateOfBirth();

};

#endif