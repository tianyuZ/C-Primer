#ifndef _EX_7_05_H_
#define _EX_7_05_H_


#include <string>
#include <iostream>
using namespace std;
class Person {
public:
  const	string get_name() const { return name; };
  const string get_address()const { return address; };


public:
	string name;
	string address;

};


istream& read(istream& is,Person& person) {
	return is >> person.name >> person.address;
}

ostream& print(ostream& os,const Person& person) {
	return os << person.get_name() << person.get_address() << endl;
}


#endif