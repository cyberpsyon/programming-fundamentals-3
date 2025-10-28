// Author: Ben Mickens
// Date: 10-26-2025
// Purpose: Implementation of the Student class
#include "Student.h"
#include <iostream>
using namespace std;

// TODO: Implement the constructor to initialize the student object

Student::Student(string firstname, string lastname, string BannerID, double gpa) {
	this->firstname = firstname;
	this->lastname = lastname;
	this->BannerID = BannerID;
	this->gpa = gpa;
}
// TODO: Implement the getter methods
string Student::getFirstname() const {
	return firstname;
}
string Student::getLastname() const {
	return lastname;
}
string Student::getBannerID() const {
	return BannerID;
}
double Student::getGPA() const {
	return gpa;
}

// TODO: Implement the setter methods

void Student::setFirstname(const string& firstname) {
	firstname = firstname;
}
void Student::setLastname(const string& lastname) {
	lastname = lastname;
}
void Student::setBannerID(const string& BannerID) {
	BannerID = BannerID;
}
void Student::setGPA(double gpa) {
	gpa = gpa;
}

// TODO: Implement the method to display student information

void Student::display() const {
	cout << "Name: " << firstname << " " << lastname << ", "
		 << "BannerID: " << BannerID << ", "
		 << "GPA: " << gpa << endl;
}
// Complete for you: Implementation of the << operator overload to print student details
ostream& operator<<(ostream& os, const Student& student) {
    os << "Name: " << student.firstname << " " << student.lastname << ", "
        << "BannerID: " << student.BannerID << ", "
        << "GPA: " << student.gpa << endl;
    return os;
}