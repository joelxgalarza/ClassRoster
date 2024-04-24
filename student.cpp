//
//  student.cpp
//  ClassRoster
//
//  Created by Joel Galarza on 4/22/24.
//

#include "student.hpp"
#include "student.hpp"
#include <iostream>

//Accessors
string Student::getStudentID(){
    return studentID;
}
string Student::getFirstName(){
    return firstName;
}
string Student::getLastName(){
    return lastName;
}
string Student::getEmail(){
    return email;
}
int Student::getAge(){
    return age;
}
int Student::getDaysToComplete(int index){
    return daysToComplete[index];
}
DegreeProgram Student::getDegreePlan(){
    return degreePlan;
}

//Mutators

void Student::setStudentID(string studentID){
    this->studentID = studentID;
}
void Student::setFirstName(string firstName){
    this->firstName = firstName;
}
void Student::setLastName(string lastName){
    this-> lastName = lastName;
}
void Student::setEmail(string email){
    this-> email = email;
}
void Student::setAge(int age){
    this-> age = age;
}
void Student::setDaysToComplete(int index, int value){
    daysToComplete[index] = value;
}
void Student::setDegreePlan(DegreeProgram degreePlan){
    this-> degreePlan = degreePlan;
}

//toString
void Student::print(){
    std::cout << "Student ID: " << getStudentID() << "\t" << "Name: " << getFirstName() << getLastName() << "\t" << getAge() << "\t" << "Days to complete each course: {" << getDaysToComplete(0) << "," << getDaysToComplete(1) << "," <<getDaysToComplete(2) << "}" << "\t" << "Degree Plan: " << getDegreePlan() << std::endl;
}

//Constructors

Student::Student(string studentID, string firstName, string lastName, string email, int age, int class1, int class2, int class3, DegreeProgram degreePlan){
    setStudentID(studentID);
    setFirstName(firstName);
    setLastName(lastName);
    setEmail(email);
    setAge(age);
    setDaysToComplete(0, class1);
    setDaysToComplete(1, class2);
    setDaysToComplete(2 ,class3);
    setDegreePlan(degreePlan);
}
