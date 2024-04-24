//
//  main.cpp
//  ClassRoster
//
//  Created by Joel Galarza on 4/22/24.
//

#include <iostream>
#include "roster.hpp"
int main(int argc, const char * argv[]) {
/*
 1. Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
 2. CreateaninstanceoftheRosterclasscalledclassRoster.
 3. Add each student to classRoster.
 4. Convert the following pseudo code to complete the rest of the main() function:
 classRoster.printAll();
 */
    
    const string studentData[] =
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
        "A5,Joel,Galarza,swe@joelgalarza.com,18,7,8,9,SOFTWARE"};
 std::cout << "Scripting and Programming - Applications - C867" << "\tC++" << "\t011957034" "\tJoel Galarza" << std::endl;
    Roster classRoster;
    classRoster.parseStudentData(studentData);

    return 0;
}
