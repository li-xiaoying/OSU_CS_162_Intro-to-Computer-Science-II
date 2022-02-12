/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  The Barbarian class inherits from Character class, and 
		 contains all information of Barbarian. 
******************************************************************************/



#include "Barbarian.hpp"
#include "Character.hpp"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;



/******************************************************************************
** Constructor that initializes all data members when a Barbarian object is 
** created.
******************************************************************************/
Barbarian::Barbarian()
{
    type="Barbarian";
    attackPoint=0;
    defensePoint=0;
    armor=0;
    strength=12;
}



/******************************************************************************
** Overrided attack() function that takes no parameter, calculates and returns 
** Barbarian's attack point.
******************************************************************************/
int Barbarian::attack()
{
    int dice1=rand()%6+1;
    int dice2=rand()%6+1;
    cout << "    " << type << " Attacks!" << endl;
    cout << "        First 6-sided dice rolled: " << dice1 
	 << "; Second 6-sided dice rolled: " << dice2 << endl;
    attackPoint=dice1+dice2;
    cout << "        Attack point: " << attackPoint << endl;
    return attackPoint;
}



/******************************************************************************
** Overrided defense() function that takes in the attacker's attack point, 
** calculates and prints Barbarian's defense point and strength.
******************************************************************************/
void Barbarian::defense(int damage)
{
    int dice1=rand()%6+1;
    int dice2=rand()%6+1;
    cout << "    " << type << " Defenses! [Armor 0; Strength " << strength 
	 << "]" << endl;
    cout << "        First 6-sided dice rolled: " << dice1 
	 << "; Second 6-sided dice rolled: " << dice2 << endl;
    defensePoint=dice1+dice2;
    cout << "        Defense point: " << defensePoint << endl;
    damage=damage-defensePoint-armor;

    if (damage<0){
	damage=0;
    }

    cout << "        Total inflicted damage: " << damage << endl;
    strength=strength-damage;
    cout << "        Updated strength point after subtracting damage: " 
	 << strength << endl;
}



/******************************************************************************
** Overrided die() function that takes no parameter, determins whether 
** Barbarian is dead or not. If Barbarian is dead, return true. Otherwise, 
** return false.
******************************************************************************/
bool Barbarian::die()
{
    if (strength<=0){
	cout << type << " died! Combat ends!" << endl;
	return true;
    }

    else{
	return false;
    }
}
