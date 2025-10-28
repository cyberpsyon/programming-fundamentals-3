// Author:
// Date:
// Purpose: 
#include "Student.h"
#include <iostream>
using namespace std;
// TODO: Implement the constructor to initialize the student object
// TODO: Implement the getter methods
// TODO: Implement the setter methods
// TODO: Implement the method to display student information
// Complete for you: Implementation of the << operator overload to print student details
ostream& operator<<(ostream& os, const Student& student) {
    os << "Name: " << student.firstname << " " << student.lastname << ", "
        << "BannerID: " << student.BannerID << ", "
        << "GPA: " << student.gpa << endl;
    return os;
}