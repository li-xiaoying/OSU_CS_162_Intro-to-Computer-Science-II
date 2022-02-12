/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  The HarryPotter class inherits from Character class, and 
		 contains all information of Harry Potter. 
******************************************************************************/



#include "HarryPotter.hpp"
#include "Character.hpp"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;



/******************************************************************************
** Constructor that initializes all data members when a HarryPotter object is 
** created.
******************************************************************************/
HarryPotter::HarryPotter()
{
    type="Harry Potter";
    attackPoint=0;
    defensePoint=0;
    armor=0;
    strength=10;
    dieCount=0;
}



/******************************************************************************
** Overrided attack() function that takes no parameter, calculates and returns 
** Harry Potter's attack point.
******************************************************************************/
int HarryPotter::attack()
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
** calculates and prints Harry Potter's defense point and strength.
******************************************************************************/
void HarryPotter::defense(int damage)
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
** Overrided die() function that takes no parameter, determins whether Harry 
** Potter is dead or not. If Harry Potter is dead, return true. Otherwise, 
** return false.
******************************************************************************/
bool HarryPotter::die()
{
    if (strength<=0){
	//Implement Harry Potter's special ability.
	dieCount++;

	//If it's Harry Potter's first death, 
	//he recovers and his total strength becomes 20.
	if (dieCount==1){
	    strength=20;
	    cout << "        Hogwarts! Recover! Total strength becomes 20!" 
		 << endl;
	    return false;
	}

	//If it's Harry Potter's second death, then he is dead.
	else if (dieCount==2){
	    cout << type << " died! Combat ends!" << endl;
	    return true;
	}
    }


    else{
	return false;
    }
}
