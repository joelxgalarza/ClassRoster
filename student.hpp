//
//  student.hpp
//  ClassRoster
//
//  Created by Joel Galarza on 4/22/24.
//

#ifndef student_hpp
#define student_hpp

#include "degree.h"
#include <stdio.h>
#include <string>
using std::string;

class Student{
private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int daysToComplete[3];
    DegreeProgram degreePlan;
    
public:
    //Accessors
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int getDaysToComplete(int index);
    DegreeProgram getDegreePlan();
    
    //Mutators
    
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDaysToComplete(int index, int value);
    void setDegreePlan(DegreeProgram degreePlan);
    
    //Constructors
    Student(string studentID, string firstName, string lastName, string email, int age, int class1, int class2, int class3, DegreeProgram degreePlan);
    
    //toString
    void print();
};
#endif /* student_hpp */
