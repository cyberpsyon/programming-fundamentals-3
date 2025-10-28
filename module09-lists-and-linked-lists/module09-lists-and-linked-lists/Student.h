// Author:
// Date:
// Purpose: 
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student {
private:
    // TODO: create instance variables for the student class, firstname, 
    //      lastname, BannerID, and gpa;
public:
    // TODO: Define a constructor to initialize the student object   
    // TODO: Define getter methods for each attribute
    // TODO: Define setter methods for each attribute
    // Method to display the student's information
    void display() const;
    // Completed for you - Overload the << operator to print student details
    friend ostream& operator<<(ostream& os, const Student& student);
};
#endif /* STUDENT_H */
