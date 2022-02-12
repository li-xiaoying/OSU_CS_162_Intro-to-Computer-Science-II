/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  The Medusa class inherits from Character class, and contains 
		 all information of Medusa. 
******************************************************************************/



#include "Medusa.hpp"
#include "Character.hpp"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;



/******************************************************************************
** Constructor that initializes all data members when a Medusa object is 
** created.
******************************************************************************/
Medusa::Medusa()
{
    type="Medusa";
    attackPoint=0;
    defensePoint=0;
    armor=3;
    strength=8;
}



/******************************************************************************
** Overrided attack() function that takes no parameter, calculates and returns 
** Medusa's attack point.
******************************************************************************/
int Medusa::attack()
{
    int dice1=rand()%6+1;
    int dice2=rand()%6+1;
    cout << "    " << type << " Attacks!" << endl;
    cout << "        First 6-sided dice rolled: " << dice1 
	 << "; Second 6-sided dice rolled: " << dice2 << endl;
    attackPoint=dice1+dice2;
    cout << "        Attack point: " << attackPoint << endl;

    //Implement Medusa's special ability.
    //If Medusa's attack dices roll 12, set her attack point to 50, which is 
    //big enough to let all other characters' strength less than 0, which 
    //means they are dead instantly.
    if (attackPoint==12){
	cout << "        Glare! The target instantly gets turned into stone!" 
	     << endl;
	attackPoint=50;
    }

    return attackPoint;
}



/******************************************************************************
** Overrided defense() function that takes in the attacker's attack point, 
** calculates and prints Medusa's defense point and strength.
******************************************************************************/
void Medusa::defense(int damage)
{
    defensePoint=rand()%6+1;
    cout << "    " << type << " Defenses! [Armor 3; Strength " << strength 
	 << "]" << endl;
    cout << "        The 6-sided dice rolled " << defensePoint << endl;
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
** Overrided die() function that takes no parameter, determins whether Medusa 
** is dead or not. If Medusa is dead, return true. Otherwise, return false.
******************************************************************************/
bool Medusa::die()
{
    if (strength<=0){
	cout << type << " died! Combat ends!" << endl;
	return true;
    }

    else{
	return false;
    }
}
