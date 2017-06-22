#ifndef EX_7_15_H
#define EX_7_15_H
#include <string>
#include <iostream>
using namespace std;
class Person {
public:
	Person() = default;
	Person(const string& s1, const string& s2) :name(s1), address(s2) {}
	Person(istream& is);
	const	string get_name() const { return name; };
	const string get_address()const { return address; };


public:
	string name;
	string address;

};


istream& read(istream& is, Person& person) {
	return is >> person.name >> person.address;
}

ostream& print(ostream& os, const Person& person) {
	return os << person.get_name() << person.get_address() << endl;
}


Person::Person(istream& is) {
	read(is, *this);
}
#endif










#endif // !EX_7_15_H

