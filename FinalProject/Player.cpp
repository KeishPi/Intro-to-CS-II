/*******************************************************************
** Filename: Player.cpp
** Author: Keisha Arnold
** Description: Final Project. Class implementation file for the 
** Player class.
** Input:
** Output:
********************************************************************/
#include "Player.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;

/******************************************************************
*			Player::Player()
* Player class constructor.
******************************************************************/
Player::Player(string nm, int armr, int str) {
   setName(nm);
   setArmor(armr);
   setStrength(str);
   
   // set up backpack
   //bkpkSize = 5;   	// backpack can hold up to 5 items
   bkpkIndex = 0;	// backpack is empty, so index = 0
   //for(int i = 0; i < 5; i++) {
     // bkpk[i] = "";
   //}  
   // set items to false
/*
   bool key = false;
   bool glasses = false;
   bool shoes = false;
   bool antidote = false;
   bool alarmClock = false;
   bool coin = false;
*/
}

/******************************************************************
*			Player::Player()
* Player class default constructor.
******************************************************************/
Player::Player() {
   //setName("Player");
   name = "player";
   setArmor(10);
   setStrength(8);
   
   // set up backpack
   //bkpkSize = 5;   	// backpack can hold up to 5 items
   bkpkIndex = 0;	// backpack is empty, so index = 0
   //for(int i = 0; i < 5; i++) {
     // bkpk[i] = "";
   //}  
   // set items to false
/*
   bool key = false;
   bool glasses = false;
   bool shoes = false;
   bool antidote = false;
   bool alarmClock = false;
   bool coin = false;
*/
}

/*******************************************************************
*			Player::~Player()
* The Player class destructor frees memory.
*******************************************************************/
Player::~Player() {

}

/*******************************************************************
*			Player::attack()
* This redefines/overrides the pure virtual attack function in the 
* parent Character class. It creates dice objects, rolls the dice 
* and returns the total number rolled (attack roll).
*******************************************************************/
int Player::attack() {
   int rollResult;      // roll result
   int attackRoll = 0;  // roll accumulator
   Dice dDice(6);       // create Dice object with 6 sides

   // Roll Die 3x and accumulate the running total
   for(int i = 0; i < 3; i++) {
      rollResult = dDice.rollDie();
      attackRoll += rollResult;
   }
   return attackRoll;
}

/*******************************************************************
*			Player::defense(int)
* This virtual function takes an int as an argument, creates a Dice
* object, rolls the dice and returns an int.
*******************************************************************/
int Player::defense(int attack) {
   int hits = attack;
   int defenseRoll;
   //int damage;

   // create Dice object with 6 sides
   Dice dDice(6); 
   // roll Die 1x
   defenseRoll = dDice.rollDie();  
   // calculate damage
   damage = ((hits - defenseRoll) - armor);
   if(damage <= 0) {
      damage = 0;
   }
   // calculate strength 
   setStrength(strength - damage);
 
   return defenseRoll;
}
   
/*******************************************************************
*			Player::setName(string)
* This virtual function copies the argument passed into the 
* parameter to the protected member variable name.
*******************************************************************/
void Player::setName(string nm) {
   name = nm;
}

/*******************************************************************
*			Player::setArmor(int)
* This virtual function copies the argument passed into the 
* parameter to the protected member variable armor.
*******************************************************************/
void Player::setArmor(int armr) {
   armor = armr;
}

/*******************************************************************
*			Player::setStrength(int)
* This virtual function copies the argument passed into the 
* parameter to the protected member variable strength.
*******************************************************************/
void Player::setStrength(int str) {
   strength = str;
}

/*******************************************************************
*			Player::setCurrent(Space*)
* This virtual function copies the argument passed into the 
* parameter to the private member variable current.
*******************************************************************/
/*
void Player::setCurrent(Space *c) {
   current = c;
}
*/

/*******************************************************************
*			Player::getName()
* This virtual function returns the value in protected member 
* variable name.
*******************************************************************/
string Player::getName() {
   return name;
}

/*******************************************************************
*			Player::getArmor()
* This virtual function returns the value in protected member 
* variable armor.
*******************************************************************/
int Player::getArmor() {
   return armor;
}

/*******************************************************************
*			Player::getStrength()
* This virtual function returns the value in protected member 
* variable strength.
*******************************************************************/
int Player::getStrength() {
   return strength;
}

/*******************************************************************
*			Player::getDamage()
* This virtual function returns the value in protected member 
* variable damage.
*******************************************************************/
int Player::getDamage() {
   return damage;
}

/*******************************************************************
*			Player::getCurrent()
* This virtual function returns the value in private member 
* variable current.
*******************************************************************/
/*
int Player::getCurrent() {
   return current;
}
*/

/*******************************************************************
*			Player::addItem(string)
* This function adds an item to the backpack.
*******************************************************************/
void Player::addItem(string itm) {
   //string item = itm;
   // item already in backpack
   for(int i = 0; i < bkpkIndex; i++) {
      if(itm == bkpk[i]) {
         cout << "This item is already in your backpack" << endl;
         return;
      }
   }

   // backpack is full
   if(bkpkIndex == 5) {
      cout << "You can't add more items- backpack is full." << endl;
   }
   else { // add item if backpack isn't full
      bkpk[bkpkIndex] = itm;
      bkpkIndex++;
   }
}

/*******************************************************************
*			Player::removeItem(string)
* This function removes an item from the backpack.
*******************************************************************/
int Player::removeItem(string itm) {
   //string item = itm;
   int index = 0;
   int found = 0;
   
   // item found
   for(int i = 0; i < bkpkIndex; i++) {
      if(itm == bkpk[i]) {
         index = i;
         found = 1;
      }
   }
   // item not found
   if(found == 0) {
      cout << "Item not found" << endl;
   }
 
   // if found at the end of the array, set back to NULL
   if(index == (bkpkIndex - 1)) {
      bkpk[index] = "";
    }
   else { // if in the middle, move items over 
      for(; index < (bkpkIndex - 1); index++) {
         bkpk[index] = bkpk[index+1];
      }
      bkpk[index] = "";
   }
   // update backpack index
   bkpkIndex = bkpkIndex - 1;

   return found;
}

/*******************************************************************
*			Player::printInv()
* This function adds an item to the backpack.
*******************************************************************/
void Player::printInv() {
   string currentItem;
  
   cout << "\n	Backpack Inventory\n";
      
   for(int i = 0; i < bkpkIndex; i++) {
      currentItem = bkpk[i];
      cout << currentItem << endl;
   }
}      






