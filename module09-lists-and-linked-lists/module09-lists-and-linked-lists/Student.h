// Author: Ben Mickens
// Date: 10-26-2025
// Purpose: Definition of the Student class

#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
private:
    // TODO: create instance variables for the student class, firstname, 
    //      lastname, BannerID, and gpa;
    string firstname;
    string lastname;
    string BannerID;
    double gpa;
public:
    // TODO: Define a constructor to initialize the student object   
    Student(string firstname, string lastname, string BannerID, double gpa);
    
    // TODO: Define getter methods for each attribute
    string getFirstname() const;
	string getLastname() const;
	string getBannerID() const;
	double getGPA() const;

    // TODO: Define setter methods for each attribute
	void setFirstname(const string& firstname);
	void setLastname(const string& lastname);
	void setBannerID(const string& BannerID);
	void setGPA(double gpa);

    // Method to display the student's information
    void display() const;

    // Completed for you - Overload the << operator to print student details
    friend ostream& operator<<(ostream& os, const Student& student);
};
#endif /* STUDENT_H */
