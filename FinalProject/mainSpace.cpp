/*******************************************************************
** Filename: mainSpace.cpp
** Author: Keisha Arnold
** Description: Final Project. Client code for the Space classes.
** Input:
** Output:
********************************************************************/
#include "Player.hpp"
#include "Zee.hpp"
#include "Pairadice.hpp"
#include "Tesseract.hpp"
#include "Ixchel.hpp"
#include "Camazotz.hpp"
#include "PlayGame.hpp"

//#include "Item.hpp"
//#include "Backpack.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* Menu function prototypes */
//void displayMenu();
//int getChoice();

int main() {

   //Player *player1;
   //BuildWorld *world1;
   PlayGame play;
   

   // Seed needed for rand
   unsigned seed;
   seed = time(0);
   srand(seed);

   //play.printIntro();
   cout << "current location: " << play.getPlayerLoc() << endl;
   play.play();
   //cout << "current location: " << play.getPlayerLoc() << endl;

/*
   // test for item and backpack classes
   Item key("key");
   Item dream("dream");
   Item juice("juice");
   Item body("body");
   Item light("light");

   Backpack bkpk;
   
   bkpk.addItem(&key);
   bkpk.addItem(&dream);
   bkpk.addItem(&juice);
   bkpk.addItem(&body);
   bkpk.removeItem(&juice);
   bkpk.addItem(&light);
   bkpk.removeItem(&dream);
   bkpk.printList();
*/   
   return 0;
}

/*********************************************************************************
*		displayMenu
* This function displays the menu choices.
*********************************************************************************/
/*
void displayMenu() {
   cout << "\n\n		MENU\n\n";
   cout << "1) Reptile People\n";
   cout << "2) Medusa\n";
   cout << "3) Gollum\n";
   cout << "4) Blue Men\n";
   cout << "5) Harry Potter\n";
   cout << "6) Quit the Game\n\n";
   //cout << "Enter your choice: ";
}
*/
/*********************************************************************************
*		getChoice
* This function inputs, validates, and returns the user's menu choice.
*********************************************************************************/
/*
int getChoice() {
   int choice;
   cin >> choice;
  
   while(choice < 1 || choice > 6) {
      cout << "The only valid choices are 1 - 6.";
      cout << "Please re-enter your choice" << endl;
      cin >> choice;
   }
   return choice;
}
*/
