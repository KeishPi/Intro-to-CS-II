/********************************************************************
** Filename: Player.hpp
** Author: Keisha Arnold
** Description: Final Project. Class specification/header file for the 
** Player class. 
** Input:
** Output:
*********************************************************************/
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Space.hpp"
//#include "Backpack.hpp"
//#include "Item.hpp"
#include "Dice.hpp"	// needed to create Dice objects & roll Die
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Player {
public:
   // constructor 
   Player(string, int, int);
  
   // default constructor
   Player();

   // destructor
   ~Player(); 

   // attack is a pure virtual function  
   int attack();
   
   // defense is a virtual function
   int defense(int);

   // Player backpack functions
   void addItem(string);
   int removeItem(string);
   void printInv();

   // getters and setters
   void setName(string);
   void setArmor(int);
   void setStrength(int);
   //void setCurrent(Space*);
   
   string getName();
   int getArmor();
   int getStrength();
   int getDamage();
   //Space getCurrent;

   string name;

protected:

private:
   //string name;
   int armor;
   int strength;
   int damage;
   //Space *current;
/*
   bool key;
   bool glasses;
   bool shoes;
   bool antidote;
   bool alarmClock;
   bool coin;
*/
   //int bkpkSize;
   string bkpk[5];
   int bkpkIndex;
};
#endif // PLAYER_HPP

