/*
 * Contact.h
 *
 *  Created on: Oct 2, 2017
 *      Author: Kevin Tran
 *      Header class of Contact files that include method
 *      declarations and class variable declarations.
 */

#ifndef CONTACT_H_
#define CONTACT_H_
#include <string>
using namespace std;


class Contact {
	//private fields of contact are the name and phone number
	string name;
	string phoneNumber;
	//public methods include, constructor, destructor, getters, setters, required functions
	//including friend function from instructions, and over-rided operator+ function.
	public:
		//this constructor will have default empty string parameters.
		Contact(string="", string="");
		~Contact(){};
		void setPhoneNumber(string);
		void setName(string);
		string getName();
		string getPhoneNumber();
		friend void printInformation(Contact);
		Contact operator+(Contact);
};

#endif /* CONTACT_H_ */
