/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  The Vampire class inherits from Character class, and contains
		 all information of Vampire. 
******************************************************************************/



#include "Vampire.hpp"
#include "Character.hpp"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;



/******************************************************************************
** Constructor that initializes all data members when a Vampire object is
** created.
******************************************************************************/
Vampire::Vampire()
{
    type="Vampire";
    attackPoint=0;
    defensePoint=0;
    armor=1;
    strength=18;
}



/******************************************************************************
** Overrided attack() function that takes no parameter, calculates and returns 
** Vampire's attack point.
******************************************************************************/
int Vampire::attack()
{
    attackPoint=rand()%12+1;
    cout << "    " << type << " Attacks!" << endl;
    cout << "        The 12-sided dice rolled: " << attackPoint << endl;
    cout << "        Attack point: " << attackPoint << endl;
    return attackPoint;
}



/******************************************************************************
** Overrided defense() function that takes in the attacker's attack point, 
** calculates and prints Vampire's defense point and strength.
******************************************************************************/
void Vampire::defense(int damage)
{
    defensePoint=rand()%6+1;
    cout << "    " << type << " Defenses! [Armor 1; Strength " << strength 
	 << "]" << endl; 
    cout << "        The 6-sided dice rolled: " << defensePoint << endl;
    cout << "        Defense point: " << defensePoint << endl;

    //Implement Vampire's special ability.
    //charm is either 0 or 1.
    int charm=rand()%2;

    //So there is a 50% chance that the damage is 0.
    if (charm==1){
	damage=0;
	cout << "        Charm! The opponent does not actually attack!" 
	     << endl;
    }

    else{
	damage=damage-defensePoint-armor;
	if (damage<0){
	    damage=0;
	}
    }

    cout << "        Total inflicted damage: " << damage << endl;
    strength=strength-damage;
    cout << "        Updated strength point after subtracting damage: " 
	 << strength << endl;
}



/******************************************************************************
** Overrided die() function that takes no parameter, determins whether Vampire 
** is dead or not. If Vampire is dead, return true. Otherwise, return false.
******************************************************************************/
bool Vampire::die()
{
    if (strength<=0){
	cout << type << " died! Combat ends!" << endl;
	return true;
    }

    else{
	return false;
    }
}
