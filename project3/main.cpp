/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  The main() function controls the program flow. 
******************************************************************************/



#include "Character.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"
#include "menu.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;



void combat();


int main()
{
    srand (time(NULL));
    if (startMenu()){
	combat();
	while(endMenu()){
	    combat();
	}
    }
    return 0;
}



/******************************************************************************
** The combat() function display five characters by their names, and prompt 
** user to select two characters to fight one another. It then creates two 
** characters correspondingly and implements the combat between them.
******************************************************************************/
void combat()
{
    cout << "The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Please select two characters to fight one another: (enter the number before the two characters)" << endl;
    cout << "    1.  Vampire       vs  Vampire" << endl;
    cout << "    2.  Barbarian     vs  Barbarian" << endl;
    cout << "    3.  Blue Men      vs  Blue Men" << endl;
    cout << "    4.  Medusa        vs  Medusa" << endl;
    cout << "    5.  Harry Potter  vs  Harry Potter" << endl;
    cout << "    6.  Vampire       vs  Barbarian" << endl;
    cout << "    7.  Vampire       vs  Blue Men" << endl;
    cout << "    8.  Vampire       vs  Medusa" << endl;
    cout << "    9.  Vampire       vs  Harry Potter" << endl;
    cout << "    10. Barbarian     vs  Blue Men" << endl;
    cout << "    11. Barbarian     vs  Medusa" << endl;
    cout << "    12. Barbarian     vs  Harry Potter" << endl;
    cout << "    13. Blue Men      vs  Medusa" << endl;
    cout << "    14. Blue Men      vs  Harry Potter" << endl;
    cout << "    15. Medusa        vs  Harry Potter" << endl;

    //Get user's option of two characters to fight one another.
    std::string optionString;
    int option;
    option=validateInt(optionString);

    while (option<1 || option>15){
	cout << "Your enter is invalid. Please enter again." << endl;
	option=validateInt(optionString);
    }

    //Create two pointers to Character.
    Character* character1;
    Character* character2;
    std::string startCharacterString;
    int startCharacter;
 
    //Allocate memory of two pointers to Character 
    //for the two corresponding characters.
    //For option 1-5, user chose two same characters to fight each other, 
    //so that which character starts attacking don't effect result, 
    //so the program don't ask user to choose a character to start attacking.
    if (option==1){
	character1=new Vampire;
	character2=new Vampire;
	character1->setType("Vampire1");
	character2->setType("Vampire2");
	cout << "You selected two Vampires! Vampire1 will start attacking!" 
	     << endl;
    }


    if (option==2){
	character1=new Barbarian;
	character2=new Barbarian;
	character1->setType("Barbarian1");
	character2->setType("Barbarian2");
	cout << "You selected two Barbarians! Barbarian1 will start attacking!" 
	     << endl;
    }


    if (option==3){
	character1=new BlueMen;
	character2=new BlueMen;
	character1->setType("Blue Men1");
	character2->setType("Blue Men2");
	cout << "You selected two Blue Men! Blue Men1 will start attacking!" 
	     << endl;
    }


    if (option==4){
	character1=new Medusa;
	character2=new Medusa;
	character1->setType("Medusa1");
	character2->setType("Medusa2");
	cout << "You selected two Medusa! Medusa1 will start attacking!" 
	<< endl;
    }


    if (option==5){
	character1=new HarryPotter;
	character2=new HarryPotter;
	character1->setType("Harry Potter1");
	character2->setType("Harry Potter2");
	cout << "You selected two Harry Potter! Harry Potter1 will start attacking!" 
	     << endl;
    }


    //For option 6-15, user chose two different characters to fight each other,
    //so that which character starts attacking effects result,
    //so the program asks user to choose a character to start attacking.
    if (option==6){
	cout << "You selected Vampire and Barbarian! Which character would you like to start attacking? [Vampire starts: enter 1; Barbarian starts: enter 2]" << endl;
	startCharacter=validateInt(startCharacterString);

	while (startCharacter!=1 && startCharacter!=2){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    startCharacter=validateInt(startCharacterString);
	}

	if (startCharacter==1){
	    character1=new Vampire;
	    character2=new Barbarian;
	    cout << "You selected Vampire to start attacking!" << endl;
	}

	else{
	    character1=new Barbarian;
	    character2=new Vampire;
	    cout << "You selected Baebarian to start attacking!" << endl;
	}
    }


    if (option==7){
	cout << "You selected Vampire and Blue Men! Which character would you like to start attacking? [Vampire starts: enter 1; Blue Men starts: enter 2]" << endl;
	startCharacter=validateInt(startCharacterString);

	while (startCharacter!=1 && startCharacter!=2){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    startCharacter=validateInt(startCharacterString);
	}

	if (startCharacter==1){
	    character1=new Vampire;
	    character2=new BlueMen;
	    cout << "You selected Vampire to start attacking!" << endl;
	}

	else{
	    character1=new BlueMen;
	    character2=new Vampire;
	    cout << "You selected Blue Men to start attacking!" << endl;
	}
    }


    if (option==8){
	cout << "You selected Vampire and Medusa! Which character would you like to start attacking? [Vampire starts: enter 1; Medusa starts: enter 2]" << endl;
	startCharacter=validateInt(startCharacterString);

	while (startCharacter!=1 && startCharacter!=2){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    startCharacter=validateInt(startCharacterString);
	}

	if (startCharacter==1){
	    character1=new Vampire;
	    character2=new Medusa;
	    cout << "You selected Vampire to start attacking!" << endl;
	}

	else{
	    character1=new Medusa;
	    character2=new Vampire;
	    cout << "You selected Medusa to start attacking!" << endl;
	}
    }


    if (option==9){
	cout << "You selected Vampire and Harry Potter! Which character would you like to start attacking? [Vampire starts: enter 1; Harry Potter starts: enter 2]" << endl;
	startCharacter=validateInt(startCharacterString);

	while (startCharacter!=1 && startCharacter!=2){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    startCharacter=validateInt(startCharacterString);
	}

	if (startCharacter==1){
	    character1=new Vampire;
	    character2=new HarryPotter;
	    cout << "You selected Vampire to start attacking!" << endl;
	}

	else{
	    character1=new HarryPotter;
	    character2=new Vampire;
	    cout << "You selected Harry Potter to start attacking!" << endl;
	}
    }

    if (option==10){
	cout << "You selected Barbarian and Blue Men! Which character would you like to start attacking? [Barbarian starts: enter 1; Blue Men starts: enter 2]" << endl;
	startCharacter=validateInt(startCharacterString);

	while (startCharacter!=1 && startCharacter!=2){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    startCharacter=validateInt(startCharacterString);
	}

	if (startCharacter==1){
	    character1=new Barbarian;
	    character2=new BlueMen;
	    cout << "You selected Barbarian to start attacking!" << endl;
	}

	else{
	    character1=new BlueMen;
	    character2=new Barbarian;
	    cout << "You selected Blue Men to start attacking!" << endl;
	}
    }


    if (option==11){
	cout << "You selected Barbarian and Medusa! Which character would you like to start attacking? [Barbarian starts: enter 1; Medusa starts: enter 2]" << endl;
	startCharacter=validateInt(startCharacterString);

	while (startCharacter!=1 && startCharacter!=2){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    startCharacter=validateInt(startCharacterString);
	}

	if (startCharacter==1){
	    character1=new Barbarian;
	    character2=new Medusa;
	    cout << "You selected Barbarian to start attacking!" << endl;
	}

	else{
	    character1=new Medusa;
	    character2=new Barbarian;
	    cout << "You selected Medusa to start attacking!" << endl;
	}
    }


    if (option==12){
	cout << "You selected Barbarian and Harry Potter! Which character would you like to start attacking? [Barbarian starts: enter 1; Harry Potter starts: enter 2]" << endl;
	startCharacter=validateInt(startCharacterString);

	while (startCharacter!=1 && startCharacter!=2){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    startCharacter=validateInt(startCharacterString);
	}

	if (startCharacter==1){
	    character1=new Barbarian;
	    character2=new HarryPotter;
	    cout << "You selected Barbarian to start attacking!" << endl;
	}

	else{
	    character1=new HarryPotter;
	    character2=new Barbarian;
	    cout << "You selected Harry Potter to start attacking!" << endl;
	}
    }


    if (option==13){
	cout << "You selected Blue Men and Medusa! Which character would you like to start attacking? [Blue Men starts: enter 1; Medusa starts: enter 2]" << endl;
	startCharacter=validateInt(startCharacterString);

	while (startCharacter!=1 && startCharacter!=2){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    startCharacter=validateInt(startCharacterString);
	}

	if (startCharacter==1){
	    character1=new BlueMen;
	    character2=new Medusa;
	    cout << "You selected Blue Men to start attacking!" << endl;
	}

	else{
	    character1=new Medusa;
	    character2=new BlueMen;
	    cout << "You selected Medusa to start attacking!" << endl;
	}
    }


    if (option==14){
	cout << "You selected Blue Men and Harry Potter! Which character would you like to start attacking? [Blue Men starts: enter 1; Harry Potter starts: enter 2]" << endl;
	startCharacter=validateInt(startCharacterString);

	while (startCharacter!=1 && startCharacter!=2){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    startCharacter=validateInt(startCharacterString);
	}

	if (startCharacter==1){
	    character1=new BlueMen;
	    character2=new HarryPotter;
	    cout << "You selected Blue Men to start attacking!" << endl;
	}

	else{
	    character1=new HarryPotter;
	    character2=new BlueMen;
	    cout << "You selected Harry Potter to start attacking!" << endl;
	}
    }


    if (option==15){
	cout << "You selected Medusa and Harry Potter! Which character would you like to start attacking? [Medusa starts: enter 1; Harry Potter starts: enter 2]" << endl;
	startCharacter=validateInt(startCharacterString);

	while (startCharacter!=1 && startCharacter!=2){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    startCharacter=validateInt(startCharacterString);
	}

	if (startCharacter==1){
	    character1=new Medusa;
	    character2=new HarryPotter;
	    cout << "You selected Medusa to start attacking!" << endl;
	}

	else{
	    character1=new HarryPotter;
	    character2=new Medusa;
	    cout << "You selected Harry Potter to start attacking!" << endl;
	}
    }

    //Implement the combat between the two characters.
    int round=1;
    bool character1Die=false;
    bool character2Die=false;
    cout << "Round 1! " << endl;

    //Loop until one character is dead.
    while (!character1Die && !character2Die){
	//Character1 attacks, character2 defenses.
	character2->defense(character1->attack());
	
	//If character2 is not dead, character2 attacks, character1 defense.
	if (!character2->die()){
	    character1->defense(character2->attack());
	    
	    //If character1 is not dead, start the next round.
	    if (!character1->die()){
		round++;
		cout << "Round " << round << "! " << endl;
	    }
	    
	    //If character1 is dead, end the combat.
	    else{
		character1Die=true;
	    }
	}

	//If character2 is dead, end the combat.
	else{
	    character2Die=true;
	}
    }

    delete character1;
    delete character2;
}
