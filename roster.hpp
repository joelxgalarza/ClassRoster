//
//  roster.hpp
//  ClassRoster
//
//  Created by Joel Galarza on 4/22/24.
//

#ifndef roster_hpp
#define roster_hpp

#include <iostream>
#include <string>
#include "student.hpp"
#include "degree.h"

class Roster{
private:
    Student *classRosterArray[5];
    int classRosterArrayLength;
public:
    //Accessors
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string studentID);
    void parseStudentData(const string *studentData);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    DegreeProgram convertToEnum(string str);
};
#endif /* roster_hpp */
