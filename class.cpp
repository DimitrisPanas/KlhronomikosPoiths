#include <iostream>
#include "class.hpp"

using namespace std;

Person::Person(string nm, string lnm, int age, string gendr)
{
	firstName = nm;
	lastName = lnm;
	this->age = age;
	gender = gendr;

}

Person::Person()
{

}

float Person::getBalance()
{
	return balance;
}

void Person::works()
{
	cout << "The Person doesn't have a job\n";
}

void Person::getsPaid()
{
	cout << firstName << " doesn't get paid\n";
}

void Person::status()
{
	cout << "Name: " << firstName << ' ' << lastName << endl;
	cout << "Age: " << age << " Gender: " << gender << endl;
}

Artist::Artist(string nm, string lnm, int age, string gendr, string genre, bool famous) : Person( nm , lnm, age, gendr)
{
	this->genre = genre;
	this->famous = famous;

}