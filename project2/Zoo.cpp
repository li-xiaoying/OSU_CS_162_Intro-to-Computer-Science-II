/******************************************************************************
** Program name: Project2 Zoo Tycoon
** Author:       Xiaoying Li
** Date:         7/20/2019
** Description:  The Zoo class has a dynamic array for each type of animal and
		 defines all events in the zoo. 
******************************************************************************/


#include "Zoo.hpp"
#include "Animal.hpp"
#include "Penguin.hpp"
#include "Tiger.hpp"
#include "Turtle.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;


/******************************************************************************
** Constructor that initializes data members when a Zoo object is created.
******************************************************************************/
Zoo::Zoo()
{
    tigerNumber=0;
    penguinNumber=0;
    turtleNumber=0;
    //Dynamic array for each type of animal.
    //Each dynamic array starts with a capacity of 10 animals.
    tigerSize=10;
    penguinSize=10;
    turtleSize=10;
    tigerArray= new Tiger[tigerSize];
    penguinArray= new Penguin[penguinSize];
    turtleArray= new Turtle[turtleSize];
    day=0;
    //The player begins with $100,000 dollars in the bank.
    money=100000;
    bonus=0;
}


/******************************************************************************
** Function that takes in an integer parameter as a tiger's age, and uses it 
** to initialize a tiger's age when a Tiger object is created. Then add the 
** tiger to tiger's dynamic array.
******************************************************************************/
void Zoo::addTiger(int age)
{
    //If the tiger can fit in the current tiger array, 
    //add the tiger to tiger's dynamic array.
    if (tigerNumber<tigerSize){
	Tiger tiger(age);
	tigerArray[tigerNumber]=tiger;
	tigerNumber++;
    }

    //Else, double the size of the current tiger array to hold more tigers.
    else{
	tigerSize*=2;
	Tiger* temporary= new Tiger[tigerSize];
	for (int i=0; i<tigerNumber; i++){
	    temporary[i]=tigerArray[i];
	}
	delete [] tigerArray;

	//Add the tiger to the new tiger's dynamic array.
	tigerArray=temporary;
	Tiger tiger(age);
	tigerArray[tigerNumber]=tiger;
	tigerNumber++;
    }
}


/******************************************************************************
** Function that takes in an integer parameter as a penguin's age, and uses it 
** to initialize a penguin's age when a Penguin object is created. Then add 
** the penguin to penguin's dynamic array.
******************************************************************************/
void Zoo::addPenguin(int age)
{
    //If the penguin can fit in the current penguin array, 
    //add the penguin to penguin's dynamic array.
    if (penguinNumber<penguinSize){
	Penguin penguin(age);
	penguinArray[penguinNumber]=penguin;
	penguinNumber++;
    }

    //Else, double the size of the current penguin array to hold more penguins.
    else{
	penguinSize*=2;
	Penguin* temporary= new Penguin[penguinSize];
	for (int i=0; i<penguinNumber; i++){
	    temporary[i]=penguinArray[i];
	}
	delete [] penguinArray;

	//Add the penguin to the new penguin's dynamic array.
	penguinArray=temporary;
	Penguin penguin(age);
	penguinArray[penguinNumber]=penguin;
	penguinNumber++;
    }
}


/******************************************************************************
** Function that takes in an integer parameter as a turtle's age, and uses it 
** to initialize a turtle's age when a Turtle object is created. Then add the
** turtle to turtle's dynamic array.
******************************************************************************/
void Zoo::addTurtle(int age)
{
    //If the turtle can fit in the current turtle array, 
    //add the turtle to turtle's dynamic array.
    if (turtleNumber<turtleSize){
	Turtle turtle(age);
	turtleArray[turtleNumber]=turtle;
	turtleNumber++;
    }

    //Else, double the size of the current turtle array to hold more turtles.
    else{
	turtleSize*=2;
	Turtle* temporary= new Turtle[turtleSize];
	for (int i=0; i<turtleNumber; i++){
	    temporary[i]=turtleArray[i];
	}
	delete [] turtleArray;

	//Add the turtle to the new turtle's dynamic array.
	turtleArray=temporary;
	Turtle turtle(age);
	turtleArray[turtleNumber]=turtle;
	turtleNumber++;
    }
}


/******************************************************************************
** Function that outputs some information of the game at the start of the 
** game, and asks the player to buy animals to start the business.
******************************************************************************/
void Zoo::menu()
{
    std::string tigerNumString;
    std::string penguinNumString;
    std::string turtleNumString;
    int tigerNum;
    int penguinNum;
    int turtleNum;

    cout << "Welcome to Zoo Tycoon Game!" << endl;
    cout << "In this game, you will be the proud owner of a virtual zoo that " 
	 << "has spaces to house tigers, penguins and turtles." << endl;
    cout << "You have $100,000 in your bank account." << endl;
    cout << "The animals you can buy and their prices are listed below:" 
	 << endl;
    cout << "    1. Tiger: $10,000" << endl;
    cout << "    2. Penguin: $1,000" << endl;
    cout << "    3. Turtle: $100" << endl;
    cout << "Now you needs to buy these three types of animals to start your "
	 << "business." << endl;
    cout << "Each type should have a quantity of either 1 or 2." << endl;
    cout << "For each animal bought, the cost will be subtracted from your "
	 << "bank account." << endl;
    cout << "All newly bought animals are 1 day old." << endl;

    //Get the number of tigers the player would like to buy.
    cout << "How many tigers would you like to buy? (enter 1 or 2)" << endl;
    tigerNum=validateInt(tigerNumString);
    while (tigerNum!=1 && tigerNum!=2){
	cout << "Your enter is invalid. Please enter again." << endl;
	tigerNum=validateInt(tigerNumString);
    }
    //Add that many tigers to tiger's array, 
    //and subtract the cost from the bank.
    for (int i=0; i<tigerNum; i++){
	addTiger(1);
	money=money-10000;
    }

    //Get the number of penguins the player would like to buy.
    cout << "How many penguins would you like to buy? (enter 1 or 2)" << endl;
    penguinNum=validateInt(penguinNumString);
    while (penguinNum!=1 && penguinNum!=2){
	cout << "Your enter is invalid. Please enter again." << endl;
	penguinNum=validateInt(penguinNumString);
    }
    //Add that many penguins to penguin's array,
    //and subtract the cost from the bank.
    for (int i=0; i<penguinNum; i++){
	addPenguin(1);
	money=money-1000;
    }

    //Get the number of turtle the player would like to buy.
    cout << "How many turtles would you like to buy? (enter 1 or 2)" << endl;
    turtleNum=validateInt(turtleNumString);
    while (turtleNum!=1 && turtleNum!=2){
	cout << "Your enter is invalid. Please enter again." << endl;
	turtleNum=validateInt(turtleNumString);
    }
    //Add that many turtles to turtle's array,
    //and subtract the cost from the bank.
    for (int i=0; i<turtleNum; i++){
	addTurtle(1);
	money=money-100;
    }
}


/******************************************************************************
** Function that increases all animals' age by 1 day, and subtracts the
** feeding cost of all animals from the bank at the beginning of the day. 
******************************************************************************/
void Zoo::dayBegin()
{
    day++;
    cout << endl;
    cout << "Day " << day << " begins!" << endl;
    cout << "Your zoo now has " << tigerNumber << " tigers, " 
				<< penguinNumber << " penguins, and "
				<< turtleNumber << " turtles. Listed below:" 
				<< endl;

    //Increases all animals' age by 1 day.
    for (int i=0; i<tigerNumber; i++){
	tigerArray[i].ageIncrease();
	cout << "    tiger" << i+1 << ": " << tigerArray[i].getAge() 
	     << " days old" << endl;
    }
    for (int i=0; i<penguinNumber; i++){
	penguinArray[i].ageIncrease();
	cout << "    penguin" << i+1 << ": " << penguinArray[i].getAge() 
	     << " days old" << endl;
    }
    for (int i=0; i<turtleNumber; i++){
	turtleArray[i].ageIncrease();
	cout << "    turtle" << i+1 << ": " << turtleArray[i].getAge() 
	     << " days old" << endl;
    }

    //Subtracte the feeding cost of all animals from the bank.
    int feedCost=tigerNumber*50+penguinNumber*10+turtleNumber*5;
    money=money-feedCost;
    cout << "Your feeding cost for all animals in the zoo is $" << feedCost 
	 << " today." << endl;
    cout << "After the feeding cost subtracted from the bank, you now have $"
	 << money << " in your bank account." << endl;
}


/******************************************************************************
** Function that determines what event takes place during the day. 
******************************************************************************/
void Zoo::randomEvent()
{
    int event=rand()%4+1;
    if (event==1){
	sick();
    }
    else if (event==2){
	boom();
    }
    else if (event==3){
	baby();
    }
    else if (event==4){
	cout << "Nothing special happened today!" << endl;
    }
}


/******************************************************************************
** Function that implements the random event that a sickness occurs to an 
** animal in the zoo.
******************************************************************************/
void Zoo::sick()
{
    int randomAnimal=rand()%3+1;
    int count=0;
    bool noAnimal=true;

    //Loop until a sick animal is found or there is no animal in the zoo. 
    while (noAnimal && count<3){

	//If the animal type picked at random is tiger,
	if (randomAnimal==1){
	    //Check if there is a tiger in the zoo.
	    //If there is at least one tiger in the zoo, 
	    //remove one tiger from tiger's dynamic array.
	    if (tigerNumber>0){
		cout << "A tiger was sick and died today!" << endl;
		tigerNumber--;
		noAnimal=false;
	    }
	    //Else, let the animal type picked at random be penguin.
	    else{
		randomAnimal=2;
		count++;
	    }
	}

	//If the animal type picked at random is penguin,
	if (randomAnimal==2){
	    //Check if there is a penguin in the zoo.
	    //If there is at least one penguin in the zoo, 
	    //remove one penguin from penguin's dynamic array.
	    if (penguinNumber>0){
		cout << "A penguin was sick and died today!" << endl;
		penguinNumber--;
		noAnimal=false;
	    }
	    //Else, let the animal type picked at random be turtle.
	    else{
		randomAnimal=3;
		count++;
	    }
	}

	//If the animal type picked at random is turtle,
	if (randomAnimal==3){
	    //Check if there is a turtle in the zoo.
	    //If there is at least one turtle in the zoo, 
	    //remove one turtle from turtle's dynamic array.
	    if (turtleNumber>0){
		cout << "A turtle was sick and died today!" << endl;
		turtleNumber--;
		noAnimal=false;
	    }
	    //Else, let the animal type picked at random be tiger.
	    else{
		randomAnimal=1;
		count++;
	    }
	}
    }

    //If all three types of animals are checked and there is 
    //no animal in the zoo, output the message to the player.
    if (count>=3){
	cout << "Your zoo has no animal! Of course nothing happened today!" 
	     << endl;
    }
}


/******************************************************************************
** Function that implements the random event that a boom in zoo attendance 
** occurs.
******************************************************************************/
void Zoo::boom()
{
    //Generate a random bonus between 250 and 500 dollars 
    //for each tiger in the zoo for the day.
    //Adapted from http://www.cplusplus.com/reference/cstdlib/rand/
    bonus=rand()%250+250;
    cout << "A boom in zoo attendance occured today! Every tiger made an "
	 << "extra $" << bonus << " today!" << endl;
}


/******************************************************************************
** Function that implements the random event that a baby animal is born.
******************************************************************************/
void Zoo::baby()
{
    int randomAnimal=rand()%3+1;
    int animalCount=0;
    bool noBaby=true;
    bool noParent=true;

    //Loop until a parent animal is found or 
    //there is no animal odd enough to be a parent in the zoo.
    while (noParent && animalCount<3){

	//If the animal type picked at random is tiger,
	if (randomAnimal==1){
	    animalCount++;
	    int tigerCount=0;
	    //Check if there is a tiger in the zoo.
	    //If there is at least one tiger in the zoo, 
	    //check if there is a tiger odd enough to be a parent.
	    if (tigerNumber>0){
		for(int i=0; i<tigerNumber; i++){
		    //If a tiger odd enough to be a parent is found,
		    //add a baby tiger of age 0 to tiger's dynamic array.
		    if (tigerArray[i].getAge()>=3 && noBaby){
			noParent=false;
			noBaby=false;
			addTiger(0);
			cout << "A mother tiger had a baby today!" << endl;
		    }
		    else{
			tigerCount++;
		    }
		}
		//If there is no tiger odd enough to be a parent,
		//let the animal type picked at random be penguin.
		if (tigerCount>=tigerNumber){
		    randomAnimal=2;
		}
	    }
	    //If there is no tiger in the zoo,
	    //let the animal type picked at random be penguin. 
	    else{
		randomAnimal=2;
	    }
	}

	//If the animal type picked at random is penguin,
	if (randomAnimal==2){
	    animalCount++;
	    int penguinCount=0;
	    //Check if there is a penguin in the zoo.
	    //If there is at least one penguin in the zoo, 
	    //check if there is a penguin odd enough to be a parent.
	    if (penguinNumber>0){
		for(int i=0; i<penguinNumber; i++){
		    //If a penguin odd enough to be a parent is found,
		    //add 5 baby penguins of age 0 to penguin's dynamic array.
		    if (penguinArray[i].getAge()>=3 && noBaby){
			noParent=false;
			noBaby=false;
			for (int j=0; j<5; j++){
			    addPenguin(0);
			}
			cout << "A mother Penguin had 5 babies today!" << endl;
		    }
		    else{
			penguinCount++;
		    }
		}
		//If there is no penguin odd enough to be a parent,
		//let the animal type picked at random be turtle.
		if (penguinCount>=penguinNumber){
		    randomAnimal=3;
		}
	    }
	    //If there is no penguin in the zoo,
	    //let the animal type picked at random be penguin.
	    else{
		randomAnimal=3;
	    } 
	}

	//If the animal type picked at random is turtle,
	if (randomAnimal==3){
	    animalCount++;
	    int turtleCount=0;
	    //Check if there is a turtle in the zoo.
	    //If there is at least one turtle in the zoo, 
	    //check if there is a turtle odd enough to be a parent.
	    if (turtleNumber>0){
		for(int i=0; i<turtleNumber; i++){
		    //If a turtle odd enough to be a parent is found,
		    //add 10 baby turtles of age 0 to turtle's dynamic array.
		    if (turtleArray[i].getAge()>=3 && noBaby){
			noParent=false;
			noBaby=false;
			for (int j=0; j<10; j++){
			    addTurtle(0);
			}
			cout << "A mother turtle had 10 babies today!" << endl;
		    }
		    else{
			turtleCount++;
		    }
		}
		//If there is no turtle odd enough to be a parent,
		//let the animal type picked at random be tiger.
		if (turtleCount>=turtleNumber){
		    randomAnimal=1;
		}
	    }
	    //If there is no turtle in the zoo,
	    //let the animal type picked at random be penguin.
	    else{
		randomAnimal=1;
	    }
	}
    }

    //If all three types of animals are checked and there is no animal 
    //odd enough to be a parent, output the message to the player.
    if (noParent){
    cout << "All animals in your zoo are too young to have babies! "
	 << "Then nothing special happened today!" << endl;
    }
}


/******************************************************************************
** Function that calculates the profit for the day and ask the player if they 
** would like to buy an adult animal before the day ends. 
******************************************************************************/
void Zoo::dayEnd()
{
    //Calculate the profit for the day based on the number of 
    //each animal and their payoff, including tiger's bonus.
    int profit=tigerNumber*(2000+bonus)+penguinNumber*100+turtleNumber*5;
    //Reset bonus to 0 for tomorrow.
    bonus=0;
    money=money+profit;
    cout << "Your zoo's profit today is S" << profit << "." << endl;
    cout << "You now have $" << money << " in your bank account." << endl;

    //Ask the player if they would like to buy 
    //an adult animal before the day ends.
    std::string buyOptionString;
    int buyOption;
    cout << "Before the day ends, would like to buy an adult animal?" << endl;
    cout << "Enter 1 if you want to buy;" << endl;
    cout << "enter 0 if you don't want to buy." << endl;
    buyOption=validateInt(buyOptionString);
    while (buyOption!=1 && buyOption!=0){
	cout << "Your enter is invalid. Please enter again." << endl;
	buyOption=validateInt(buyOptionString);
    }

    //If they do, ask for the type of animal they would like. 
    if (buyOption==1){
	std::string animalOptionString;
	int animalOption;
	cout << "Which type of animal would you like to buy?" << endl;
	cout << "The animals you can buy and their prices are listed below:" 
	     << endl;
	cout << "    1. Tiger: $10,000   Enter 1 if you want to buy a tiger."
	     << endl;
	cout << "    2. Penguin: $1,000  Enter 2 if you want to buy a penguin."
	     << endl;
	cout << "    3. Turtle: $100     Enter 3 if you want to buy a turtle." 
	     << endl;
	animalOption=validateInt(animalOptionString);
	while (animalOption!=1 && animalOption!=2 && animalOption!=3){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    animalOption=validateInt(animalOptionString);
	}

	//Then add the animal to the zoo and subtract that cost from the bank.
	if (animalOption==1){
	    addTiger(3);
	    money=money-10000;
	    cout << "You bought a tiger!" << endl;
	}
	else if (animalOption==2){
	    addPenguin(3);
	    money=money-1000;
	    cout << "You bought a penguin!" << endl;
	}
	else if (animalOption==3){
	    addTurtle(3);
	    money=money-100;
	    cout << "You bought a turtle!" << endl;
	}
	cout << "You now have $" << money << " in your bank account." << endl;
    }
}


/******************************************************************************
** Function that check the player's bank account, if the player has no money, 
** return false to end the game; else, return true to continue the game.
******************************************************************************/
bool Zoo::checkMoney()
{
    //If the player has no money, print a message to tell the player 
    //the game is over, and return false to end the game.
    if (money<=0){
	cout << "Sorry you have no money. Game Over!" << endl;
	return false;
    }

    else{
	return true;
    }
}


/******************************************************************************
** Function that prompts the player whether to keep playing or end the game. If 
** the player decides to keep playing, return true; if not, return false.
******************************************************************************/
bool Zoo::keepPlay()
{
    //When the player still has money, prompt the player 
    //whether to keep playing or end the game.
    if (checkMoney()){
	std::string keepPlayOptionString;
	int keepPlayOption;
	cout << "Would you like to keep playing?" << endl;
	cout << "Enter 1 if you want to keep playing;" << endl;
	cout << "enter 0 if you want to quit." << endl;
	keepPlayOption=validateInt(keepPlayOptionString);
	while (keepPlayOption!=1 && keepPlayOption!=0){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    keepPlayOption=validateInt(keepPlayOptionString);
	}
	if (keepPlayOption==1){
	    return true;
	}
	if (keepPlayOption==0){
	    return false;
	}
	cout << endl;
    }

    //If the player has no money, end the game immediately.
    else{
	return false;
    }
}


/******************************************************************************
** Destructor.
******************************************************************************/
Zoo::~Zoo()
{
    delete [] tigerArray;
    delete [] penguinArray;
    delete [] turtleArray;
}
