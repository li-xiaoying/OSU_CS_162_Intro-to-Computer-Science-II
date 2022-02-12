/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  The BlueMen class inherits from Character class, and contains
		 all information of Blue Men. 
******************************************************************************/



#include "BlueMen.hpp"
#include "Character.hpp"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;



/******************************************************************************
** Constructor that initializes all data members when a BlueMen object is 
** created.
******************************************************************************/
BlueMen::BlueMen()
{
    type="Blue Men";
    attackPoint=0;
    defensePoint=0;
    armor=3;
    strength=12;
}



/******************************************************************************
** Overrided attack() function that takes no parameter, calculates and returns 
** Blue Men's attack point.
******************************************************************************/
int BlueMen::attack()
{
    int dice1=rand()%10+1;
    int dice2=rand()%10+1;
    cout << "    " << type << " Attacks!" << endl;
    cout << "        First 10-sided dice rolled: " << dice1 
	 << "; Second 10-sided dice rolled: " << dice2 << endl;
    attackPoint=dice1+dice2;
    cout << "        Attack point: " << attackPoint << endl;
    return attackPoint;
}



/******************************************************************************
** Overrided defense() function that takes in the attacker's attack point, 
** calculates and prints Blue Men's defense point and strength.
******************************************************************************/
void BlueMen::defense(int damage)
{
    int dice1=rand()%6+1;
    int dice2=rand()%6+1;
    int dice3=rand()%6+1;
    cout << "    " << type << " Defenses! [Armor 3; Strength " << strength 
	 << "]" << endl;

    //Implement Blue Men's special ability.
    //Determin whether Blue Men lose defense dice.
    if (strength>8){
	cout << "        First 6-sided dice rolled: " << dice1 
	     << "; Second 6-sided dice rolled: " << dice2 
	     << "; Third 6-sided dice rolled: " << dice3 << endl;
    }

    //If Blue Men lost 4-7 points of strength, they lost one defense dice. 
    else if (strength>4 && strength<=8){
	cout << "        Mob! One defense dice lost!" << endl;
	cout << "        First 6-sided dice rolled: " << dice1 
	     << "; Second 6-sided dice rolled: " << dice2 << endl;
	dice3=0;
    }

    //If Blue Men lost 8-11 points of strength, they lost two defense dices.
    else if (strength>0 && strength<=4){
	cout << "        Mob! Mob! Two defense dices lost!" << endl;
	cout << "        The 6-sided dice rolled: " << dice1 << endl;
	dice2=0;
	dice3=0;
    }

    defensePoint=dice1+dice2+dice3;
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
** Overrided die() function that takes no parameter, determins whether Blue 
** Men are dead or not. If Blue Men are dead, return true. Otherwise, return
** false.
******************************************************************************/
bool BlueMen::die()
{
    if (strength<=0){
	cout << type << " died! Combat ends!" << endl;
	return true;
    }

    else{
	return false;
    }
}
