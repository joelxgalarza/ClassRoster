//
//  roster.cpp
//  ClassRoster
//
//  Created by Joel Galarza on 4/22/24.
//

#include "roster.hpp"
#include "student.hpp"
#include <string>
#include <iostream>

using std::string;

void Roster::add(string studentID, string firstName, string lastName, string email, int age, int class1, int class2, int class3, DegreeProgram degreePlan){
    for (int i = 0; i < classRosterArrayLength; i++) {
        if(classRosterArray[i] == nullptr){
            classRosterArray[i] = new Student(studentID, firstName, lastName, email, age, class1, class2, class3, degreePlan);
        }
    }
}
void Roster::remove(string studentID){
    for (int i = 0; i < sizeof(**classRosterArray) / sizeof(*classRosterArray[i]); i++) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            delete classRosterArray[i];
            classRosterArray[i] = classRosterArray[classRosterArrayLength - 1];
            classRosterArrayLength--;
        }
    }
}
void Roster::parseStudentData(const string *studentData){
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int class1;
    int class2;
    int class3;
    DegreeProgram degreeType;
    
    int index = 0;
    unsigned long leftPointer = 0;
    unsigned long rightPointer = 0;
    string str;
    
    char delimeter = ',';
    for (int i = 0; i < studentData[i].length(); i++) {
        rightPointer = studentData[i].find(delimeter);
        str = studentData[i].substr(leftPointer, rightPointer);
        switch (index) {
            case 0:     //string studentID
                studentID = str;
                std::cout << str << std::endl;
                break;
            case 1:     //string firstName
                firstName = str;
                std::cout << str << std::endl;
                break;
            case 2:     //string lastName
                lastName = str;
                std::cout << str << std::endl;

                break;
            case 3:     //string email
                std::cout << "before email: " << str << std::endl;
                email = str;
                std::cout << "after email: " << str << std::endl;

                break;
            case 4:     //int age
                age = std::stoi(str);
                break;
            case 5:     //int class1
                class1 = std::stoi(str);
                break;
            case 6:     //int class2
                class2 = std::stoi(str);
                break;
            case 7:     //int class3
                class3 = std::stoi(str);
                break;
            case 8:     //degreeType
                degreeType = convertToEnum(str);
                break;
            default:
                break;
        }
        leftPointer = rightPointer;
        rightPointer = studentData[i].find(delimeter);
        index++;
    }
}
void Roster::printAll(){
    for (int i = 0; i < classRosterArrayLength; i++) {
        classRosterArray[i]->print();
    }
}
void Roster::printAverageDaysInCourse(string studentID){
    int sum = 0;
    int courses = classRosterArrayLength * 3;
    for (int i = 0; i < classRosterArrayLength; i++) {
        for (int j = 0; j < 3; j++) {
            sum += classRosterArray[i]->getDaysToComplete(j);
        }
    }
    std::cout << static_cast<double>(sum) / courses;
}
void Roster::printInvalidEmails(){
    for (int i = 0; i < classRosterArrayLength; i++) {
        if((classRosterArray[i]->getEmail().find("@") != -1) &&
           (classRosterArray[i]->getEmail().find(" ") == -1) &&
           (classRosterArray[i]->getEmail().find(".") != -1)){
            std::cout << classRosterArray[i]->getEmail();
        }
    }
}
void Roster::printByDegreeProgram(DegreeProgram degreeProgram){
    std::cout << "Security Degrees: " <<std::endl;
    for (int i = 0; i < classRosterArrayLength; i++) {
        if (classRosterArray[i]->getDegreePlan() == SECURITY) {
            classRosterArray[i]->print();
            
        }
    }
}

DegreeProgram Roster::convertToEnum(string str){
    if(str == "SOFTWARE") {
        return SOFTWARE;
    }
    else if(str == "NETWORK"){
        return NETWORK;
    }
    else{
        return SECURITY;
    }
    
}


