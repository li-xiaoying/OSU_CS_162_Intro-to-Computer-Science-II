/******************************************************************************
** Program name: Lab4 OSU Information System
** Author:       Xiaoying Li
** Date:         7/21/2019
** Description:  The main() function controls the entire program.
******************************************************************************/


#include "University.hpp"
#include "Building.hpp"
#include "Person.hpp"
#include "Instructor.hpp"
#include "Student.hpp"
#include "menu.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using std::cout;
using std::endl;



int main()
{
    srand (time(NULL));

    //Hard code all infoemation.
    Building b1("Adams Hall", 11168, "606 SW 15TH ST CORVALLIS");
    Building b2("Austin Hall", 107613, "2751 SW JEFFERSON WAY CORVALLIS");
    Building b3("Batcheller Hall", 19953, "1791 SW CAMPUS WAY CORVALLIS");
    Building b4("Bates Hall", 16134, "110 SW 26TH STREET CORVALLIS");
    Building b5("Bexell Hall", 58621, "2251 SW CAMPUS WAY CORVALLIS");
    Person* p1=new Student("Oliver", 18, 3.1, "student");
    Person* p2=new Student("Amelia", 19, 3.3, "student");
    Person* p3=new Student("Harry", 20, 3.5, "student");
    Person* p4=new Student("Jack", 21, 3.7, "student");
    Person* p5=new Student("Emily", 22, 3.9, "student");
    Person* p6=new Instructor("Georege", 30, 4.9, "instructor");
    Person* p7=new Instructor("Lily", 35, 4.4, "instructor");
    Person* p8=new Instructor("Mia", 40, 3.9, "instructor");
    Person* p9=new Instructor("Sophia", 33, 4.1, "instructor");
    Person* p10=new Instructor("Oscar", 38, 4.3, "instructor");

    //Create a University object.
    University OSU("Oregon State University");

    //Add all buildings and people's information to OSU.
    OSU.addBuilding(b1);
    OSU.addBuilding(b2);
    OSU.addBuilding(b3);
    OSU.addBuilding(b4);
    OSU.addBuilding(b5);
    OSU.addPerson(p1);
    OSU.addPerson(p2);
    OSU.addPerson(p3);
    OSU.addPerson(p4);
    OSU.addPerson(p5);
    OSU.addPerson(p6);
    OSU.addPerson(p7);
    OSU.addPerson(p8);
    OSU.addPerson(p9);
    OSU.addPerson(p10);

    OSU.printName();

    if (startMenu()){
	OSU.menu();
	while (endMenu()){
	    OSU.menu();
	}
    }
    return 0;
}
