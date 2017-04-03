/********************************************************************
** Filename: PlayGame.hpp
** Author: Keisha Arnold
** Description: Final Project. Class specification/header file for the 
** PlayGame class. 
** Input:
** Output:
*********************************************************************/
#ifndef PLAYGAME_HPP
#define PLAYGAME_HPP
//#include "Dice.hpp"	// needed to create Dice objects & roll Die
#include "Space.hpp"
#include "Zee.hpp"
#include "Pairadice.hpp"
#include "Camazotz.hpp"
#include "Tesseract.hpp"
#include "Ixchel.hpp"
#include "Wormhole.hpp"
#include "Player.hpp"
//#include "Item.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class PlayGame {
public:
   // constructor 
   PlayGame();

   // destructor
   ~PlayGame(); 

   // create space objects
   void createWorld();

   // create linked structure
   void linkWorld();

   // intros for the game and each world
   void intro();
   void zeeIntro();
   void pairadiceIntro();
   void tesseractIntro();
   void ixchelIntro();
   void camazotzIntro();
   void wormholeIntro();
   
   // menus for each world
   void zeeMenu();
   void pairadiceMenu();
   void tesseractMenu();
   void ixchelMenu();
   void camazotzMenu();
   void wormholeMenu();

   // gets users choice after each menu display
   int getChoice();

   // does something based on user's choice
   void doZeeChoice(int);
   void doPairadiceChoice(int);
   void doTesseractChoice(int);
   void doIxchelChoice(int);
   void doCamazotzChoice(int);
   void doWormholeChoice(int);

   // getters
   string getPlayerLoc();

   // plays the game
   void play();

   //string playerLoc;

protected:

private:
   Player player1;
   int choice;
   Space *current;
   string playerLoc;
   int gameOver;
   int win;
   int chance;
   Space *zee1,
 	 *pairadice1,
	 *tesseract1,
	 *camazotz1,
	 *ixchel1,
         *wormhole1;
};
#endif // PLAYGAME_HPP

