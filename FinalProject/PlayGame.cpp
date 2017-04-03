/*******************************************************************
** Filename: PlayGame.cpp
** Author: Keisha Arnold
** Description: Final Project. Class implementation file for the 
** PlayGame class.
** Input:
** Output:
********************************************************************/
#include "PlayGame.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/******************************************************************
*			PlayGame::PlayGame()
* PlayGame class constructor.
******************************************************************/
PlayGame::PlayGame() {
   // starts the game
   // creates a player object
   //Player *player1;

   // creates the "world" and then links them
   linkWorld();
   // initializes players current location to Zee world
   current = zee1;
   // keeps track of players location
   playerLoc = current->getLocation();
   // Flag
   gameOver = 0;
}

/*******************************************************************
*			PlayGame::~PlayGame()
* The PlayGame class destructor frees memory.
*******************************************************************/
PlayGame::~PlayGame() {
}

/******************************************************************
*			PlayGame::createWorld()
* This function creates objects of the different "space" classes.
******************************************************************/
void PlayGame::createWorld() {
   zee1 = new Zee();
   pairadice1 = new Pairadice();
   tesseract1 = new Tesseract();
   camazotz1 = new Camazotz();
   ixchel1 = new Ixchel();
   wormhole1 = new Wormhole();
}

/******************************************************************
*			PlayGame::linkWorld()
* This function links different "worlds" together.
******************************************************************/
void PlayGame::linkWorld() {
   // create worlds first
   createWorld();
   
   // set Zee links
   zee1->setRight(tesseract1);
   zee1->setLeft(camazotz1);
   zee1->setUp(pairadice1);
   zee1->setDown(ixchel1);

   // set Pairadice links
   pairadice1->setRight(tesseract1);
   pairadice1->setLeft(camazotz1);
   pairadice1->setUp(NULL);
   pairadice1->setDown(zee1);  
   
   // set Tesseract links
   tesseract1->setRight(NULL);
   tesseract1->setLeft(zee1);
   tesseract1->setUp(pairadice1);
   tesseract1->setDown(ixchel1);
 
   // set Ixchel links
   ixchel1->setRight(tesseract1);
   ixchel1->setLeft(camazotz1);
   ixchel1->setUp(zee1);
   ixchel1->setDown(NULL);

   // set Camazotz links
   camazotz1->setRight(zee1);
   camazotz1->setLeft(NULL);
   camazotz1->setUp(pairadice1);
   camazotz1->setDown(ixchel1);

   // set Wormhole links to NULL
   wormhole1->setRight(NULL);
   wormhole1->setLeft(NULL);
   wormhole1->setUp(NULL);
   wormhole1->setDown(NULL);

}

/******************************************************************
*			PlayGame::intro()
* This function prints the introduction of the game.
******************************************************************/
void PlayGame::intro() {
   cout << "\n\n		LOST BODY\n\n";
   cout << "You slowly open your eyes...\n"
   "Feeling hazy and confused your vision focuses and you see a familiar \n"
   "ceiling and realize you're in bed. You fumble around for your phone \n"
   "and wallet, but they aren't on the nightstand. All of a sudden you \n"
   "catch a glimpse of the clock on the wall. It reads 8:03. \n"
   "Shit! I'm late for work! Bolting out of bed you run to the bathroom. \n"
   "Bending over the sink you squeeze some toothpaste on your toothbrush \n"
   "but as you look up into the mirror you do a double take. \n"
   "You don't see your reflection. Hmmm, that's odd. You reach out to \n"
   "touch it and it feels cold. It's not broken... Then it slowly starts \n"
   "sinking in. You have no reflection. Where's my body? You start panicking \n"   "How does someone lose their body? Did someone steal it?\n\n"
   "Your goal is to find your body before you run out of turns and you\n"
   "completely disappear. You have one backpack that can carry up to 5 items.\n"   "Be careful, some items will send you into a wormhole.\nGood Luck!\n"
   "\n\nHINT FOR GARRETT: To win, you need to play and win the games in \n" 
   "Pairadice and Ixchel, pick up the key item, then go to Camazotz to \n"
   "open the box containing your body. Picking up the alarm clock in \n"
   "Pairadice sends you to a womhole which is the node that is added and \n"
   "deleted.";
}  

/******************************************************************
*			PlayGame::zeeIntro()
* This function prints when the user enters the Zee world.
******************************************************************/
void PlayGame::zeeIntro() {
   cout << "\nYou live on the planet Zee. Humankind relocated to this planet \n"
   "after global warming caused the depletion of drinking water, \n"
   "a catastrophic rise in the sea level, and mass extinction. \n"
   "Zee is a pretty peaceful planet. Many different alien communities have \n"
   "immigrated here and with advancements in technology it's becoming \n"
   "easier to travel between planets, though some are dangerous and only \n"
   "frequented by criminals and hooligans.\n";
}

/******************************************************************
*			PlayGame::pairadiceIntro()
* This function prints when the user enters the Pairadice world.
******************************************************************/
void PlayGame::pairadiceIntro() {
   cout << "\nWelcome to Pairadice!\n";
   cout << "Pairadice is a planet of games! Play at \n"
   "your own risk...let's just say what happens in Pairadice \n"
   "stays in Pairadice.\n";
}

/******************************************************************
*			PlayGame::tesseractIntro()
* This function prints when the user enters the Tesseract world.
******************************************************************/
void PlayGame::tesseractIntro() {
   cout << "\nWelcome to Tesseract!\n";
   cout << "Tesseract is a parallel universe. It looks just like \n"
   "planet Zee, but here the people feel no pain and therefore no \n"
   "happiness. They are essentially robots.\n";
}

/******************************************************************
*			PlayGame::ixchelIntro()
* This function prints when the user enters the Ixchel world.
******************************************************************/
void PlayGame::ixchelIntro() {
   cout << "\nYou are in Ixchel. Proceed at your own risk.\n";
   cout << "Ixchel is a dark planet. No one really knows what \n"
   "inhabits this planet because no one dares to enter it. Legend \n"
   "says that lost, dark, souls gather here. They are simply \n"
   "referred to as 'IT'.\n";
}

/******************************************************************
*			PlayGame::camazotzIntro()
* This function prints when the user enters the Camazotz world.
******************************************************************/
void PlayGame::camazotzIntro() {
   cout << "\nWelcome to Camazotz\n";
   cout << "Tall, furry beasts inhabit this planet. Although not \n"
   "known for their intelligence, they are kind and gentle creatures.\n";
}

/******************************************************************
*			PlayGame::wormholeIntro()
* This function prints when the user enters the Camazotz world.
******************************************************************/
void PlayGame::wormholeIntro() {
   cout << "\nWormhole!!!\n";
   cout << "Uh oh. Something happened and you ended up in a wormhole.\n"
   "It feels like a dream- that one where you're falling- but a \n"
   "slideshow of your life is playing all around you.\n" 
   "How do you wake up from this dream? \n" 
   "(Hint: an alarm clock might help)\n";
}

/******************************************************************
*			PlayGame::zeeMenu()
* This function prints a menu when the player is in the Zee world.
******************************************************************/
void PlayGame::zeeMenu() {
   cout << "\n\n		ZEE MENU\n\n";
   cout << "1) Open Portal to the Pairadice World\n";
   cout << "2) Open Portal to the Tesserract World\n";
   cout << "3) Open Portal to the Ixchel World\n";
   cout << "4) Open Portal to the Camazotz World\n";
   cout << "5) Ask someone if they've seen your body anywhere\n";
   cout << "6) Quit the Game\n";
   cout << "Enter your choice: ";
}

/******************************************************************
*			PlayGame::pairadiceMenu()
* This function prints a menu when the player is in the Pairadice
* world.
******************************************************************/
void PlayGame::pairadiceMenu() {
   cout << "\n\n		PAIRADICE MENU\n\n";
   cout << "1) Open Portal to the Zee World\n";
   cout << "2) Open Portal to the Tesseract World\n";
   cout << "3) Open Portal to the Camazotz World\n";
   cout << "4) Ask someone if they've seen your body\n";
   cout << "5) Play a Game\n";
   cout << "6) Pick up Item\n";
   cout << "7) Quit the Game\n";
   cout << "Enter your choice: ";
}

/******************************************************************
*			PlayGame::tesseractMenu()
* This function prints a menu when the player is in the Tesseract
* world.
******************************************************************/
void PlayGame::tesseractMenu() {
   cout << "\n\n		TESSERACT MENU\n\n";
   cout << "1) Open Portal to the Pairadice World\n";
   cout << "2) Open Portal to the Zee World\n";
   cout << "3) Open Portal to the Ixchel World\n";
   cout << "4) Ask someone if they've seen your body anywhere\n";
   cout << "5) Pick up item\n";
   cout << "6) Quit the Game\n";
   cout << "Enter your choice: ";
}

/******************************************************************
*			PlayGame::ixchelMenu()
* This function prints a menu when the player is in the Ixchel
* world.
******************************************************************/
void PlayGame::ixchelMenu() {
   cout << "\n\n		IXCHEL MENU\n\n";
   cout << "1) Open Portal to the Zee World\n";
   cout << "2) Open Portal to the Tesseract World\n";
   cout << "3) Open Portal to the Camazotz World\n";
   cout << "4) Ask someone if they've seen your body anywhere\n";
   cout << "5) Play a game\n";
   cout << "6) Pick up item\n";
   cout << "7) Quit the Game\n";
   cout << "Enter your choice: ";
}

/****************************************************************************
*			PlayGame::camazotzMenu()
* This function prints a menu when the player is in the Camazotz world.
*****************************************************************************/
void PlayGame::camazotzMenu() {
   cout << "\n\n		CAMAZOTZ MENU\n\n";
   cout << "1) Open Portal to the Zee World\n";
   cout << "2) Open Portal to the Pairadice World\n";
   cout << "3) Open Portal to the Ixchel World\n";
   cout << "4) Ask someone if they've seen your body anywhere\n";
   cout << "5) Pick up item\n";
   cout << "6) Quit the Game\n";
   cout << "Enter your choice: ";
}

/****************************************************************************
*			PlayGame::wormholeMenu()
* This function prints a menu when the player is in the Wormhole world.
*****************************************************************************/
void PlayGame::wormholeMenu() {
   cout << "\n\n		WORMHOLE MENU\n\n";
   cout << "1) Use your alarm clock to wake up\n";
   cout << "2) Don't have an alarm clock? You dead.\n";
   cout << "3) Quit the Game\n";
   cout << "Enter your choice: ";
}
/****************************************************************************
*			PlayGame::getChoice()
* This function inputs, validates, and returns the user's menu choice.
****************************************************************************/
int PlayGame::getChoice() {
   //int choice;
   cin >> choice;
  
   while(choice < 1 || choice > 7) {
      cout << "The only valid choices are 1 - 7.";
      cout << "Please re-enter your choice" << endl;
      cin >> choice;
   }
   return choice;
}

/****************************************************************************
*			PlayGame::doZeeChoice(int)
* This function does something based on the user's menu choice.
****************************************************************************/
void PlayGame::doZeeChoice(int ch) { 
   choice = ch;

   if(choice == 1) { 
      // move player's current position to Pairadice
      current = current->up;
   }
   if(choice == 2) {
      // move player's current position to Tesseract
      current = current->right;
   }
   if(choice == 3) {
      // move player's current position to Ixchel
      current = current->down;
   }
   if(choice == 4) {
      // move player's current position to Camazotz
      current = current->left;
   }
   if(choice == 5) {
      // talk to an "alien"
      cout << "\nYou ask your mom if she's seen your body anywhere...";
      zee1->alien();
   }
   if(choice == 6) {
      // quit the game
      delete zee1;
      delete pairadice1;
      delete tesseract1;
      delete camazotz1;
      delete ixchel1;
      exit(1);
   }
   playerLoc = current->getLocation();
   //return playerLoc; 
}
   
/****************************************************************************
*			PlayGame::doPairadiceChoice(int)
* This function does something based on the user's menu choice.
****************************************************************************/
void PlayGame::doPairadiceChoice(int ch) { 
   choice = ch;

   if(choice == 1) { 
      // move player's current position to Zee
      current = current->down;
   }
   if(choice == 2) {
      // move player's current position to Tesseract
      current = current->right;
   }
   if(choice == 3) {
      // move player's current position to Camazotz
      current = current->left;
   }
   if(choice == 4) {
      // talk to an "alien"
      cout << "\nYou ask the pit boss if he's seen your body anywhere...";
      pairadice1->alien();
   }
   if(choice == 5) {
      // play a game
      win = pairadice1->playGm();
      if(win == 0) {
         cout << "Sorry kid, better luck next time." << endl;
      }
      else {
         cout << "Looks like you won. Here's a gold coin." << endl;
         player1.addItem("coin");
         player1.printInv();
      }
   }
   if(choice == 6) {
      cout << "Looks like an alarm clock."
      " Well I'll keep it, might be useful later.\n";
      player1.addItem("alarm clock");
      player1.printInv();
      // picked up alarm clock, 50% chance it sends to you a wormhole
      chance = rand() % 2 + 1;
      if(chance == 2) {
         // create link from pairadice
         pairadice1->setUp(wormhole1);
         // create links from wormhole
         //wormhole1->setLeft(NULL);
         //wormhole1->setRight(NULL);
         //wormhole1->setUp(NULL);
         wormhole1->setDown(pairadice1);
         // change current location to wormhole
         current = current->up;
      }
   }
   if(choice == 7) {
      // quit the game
      delete zee1;
      delete pairadice1;
      delete tesseract1;
      delete camazotz1;
      delete ixchel1;
      exit(1);
   }
   playerLoc = current->getLocation();
   //return playerLoc; 
}

/****************************************************************************
*			PlayGame::doTesseractChoice(int)
* This function does something based on the user's menu choice.
****************************************************************************/
void PlayGame::doTesseractChoice(int ch) { 
   choice = ch;

   if(choice == 1) { 
      // move player's current position to Pairadice
      current = current->up;
   }
   if(choice == 2) {
      // move player's current position to Zee
      current = current->left;
   }
   if(choice == 3) {
      // move player's current position to Ixchel
      current = current->down;
   }
   if(choice == 4) {
      // talk to an "alien"
      cout << "\nYou ask 'yourself' if you've seen your body anywhere...";
      tesseract1->alien();
   }
   if(choice == 5) {
      player1.addItem("key");
      player1.printInv();
   }
   if(choice == 6) {
      // quit the game
      delete zee1;
      delete pairadice1;
      delete tesseract1;
      delete camazotz1;
      delete ixchel1;
      exit(1);
   }
   playerLoc = current->getLocation();
   //return playerLoc; 
}

/****************************************************************************
*			PlayGame::doIxchelChoice(int)
* This function does something based on the user's menu choice.
****************************************************************************/
void PlayGame::doIxchelChoice(int ch) { 
   choice = ch;
   string solution = "time";
   string answer;
   int attempt;

   if(choice == 1) { 
      // move player's current position to Zee
      current = current->up;
   }
   if(choice == 2) {
      // move player's current position to Tesseract
      current = current->right;
   }
   if(choice == 3) {
      // move player's current position to Camazotz
      current = current->left;
   }
   if(choice == 4) {
      // talk to an "alien"
      cout << "\nYou muster up your courage and ask 'IT' if it's seen \n"
      "your body anywhere...";
      ixchel1->alien();
   }
   if(choice == 5) {
      // play a game
      ixchel1->playGm();
      //getline(std::cin, answer);
      cin >> answer;
      while(attempt < 3) {
         if(answer == solution) {
            cout << "You win. Here's some antidote." << endl;
            win = 1;
            player1.addItem("antidote");
            player1.printInv();
            break;
         }
         else {
            cout << "Try again." << endl;
            cin >> answer;
            win = 0;
         }
      attempt++;
      }
      if(win == 0) {
         cout << "You lose." << endl;
      }
   }
   if(choice == 6) {
      //Item keyItm = player1->getKey();
      //player1->bkpk.addItem(&keyItm);
      //player1->bkpk.printList();
      player1.addItem("glasses");
      player1.printInv();

   }
   if(choice == 7) {
      // quit the game
      delete zee1;
      delete pairadice1;
      delete tesseract1;
      delete camazotz1;
      delete ixchel1;
      exit(1);
   }
   playerLoc = current->getLocation();
   //return playerLoc; 
}

/****************************************************************************
*			PlayGame::doCamazotzChoice(int)
* This function does something based on the user's menu choice.
****************************************************************************/
void PlayGame::doCamazotzChoice(int ch) { 
   choice = ch;
   int found;
   int found1;

   if(choice == 1) { 
      // move player's current position to Zee
      current = current->right;
   }
   if(choice == 2) {
      // move player's current position to Pairadice
      current = current->up;
   }
   if(choice == 3) {
      // move player's current position to Ixchel
      current = current->down;
   }
   if(choice == 4) {
      // talk to an "alien"
      cout << "\nYou ask a furry beast if she's seen your body anywhere...";
      camazotz1->alien();
   }
   if(choice == 5) {
      player1.addItem("box");
      player1.printInv();
      cout << "You need a key to open the box." << endl;
      found = player1.removeItem("key");
      if(found == 1) {
         cout << "You've opened the box and see your body. But you need\n"
         "a gold coin and antidote to revive it.";
         found = player1.removeItem("coin");
         found1 = player1.removeItem("antidote");
         if(found == 1 || found1 == 1) {
            cout << "Hooray! You got your body back!\n YOU WIN!!!!" << endl;
            exit(1);
         }
      }
   }
   if(choice == 6) {
      // quit the game
      delete zee1;
      delete pairadice1;
      delete tesseract1;
      delete camazotz1;
      delete ixchel1;
      exit(1);
   }
   playerLoc = current->getLocation();
   //return playerLoc; 
}

/****************************************************************************
*			PlayGame::doWormholeChoice(int)
* This function does something based on the user's menu choice.
****************************************************************************/
void PlayGame::doWormholeChoice(int ch) { 
   choice = ch;

   if(choice == 1) { 
      // remove alarm clock from inventory
      player1.removeItem("alarm clock");
      player1.printInv();
      // move player back to Pairadice
      current = current->down;
      //delete wormhole1;
   }
   if(choice == 2) {
      cout << "Game Over!" << endl;
      exit(1);
      // move player's current position to Pairadice
      //current = current->up;
   }
   if(choice == 3) {
      // quit the game
      delete zee1;
      delete pairadice1;
      delete tesseract1;
      delete camazotz1;
      delete ixchel1;
      exit(1);
   }
   playerLoc = current->getLocation();
   //return playerLoc; 
}

/*******************************************************************
*			PlayGame::getPlayerLoc()
* This virtual function returns the value in private member 
* variable playerLoc.
*******************************************************************/
string PlayGame::getPlayerLoc() {
   return playerLoc;
}

/*******************************************************************
*			PlayGame::play()
* This virtual function plays the game.
*******************************************************************/
void PlayGame::play() {
   int userChoice;
   int turn = 0;

   // print game intro
   intro();
   // print Zee intro
   zeeIntro();
   // print Zee menu
   zeeMenu();
   // get users choice
   userChoice = getChoice();
   // do something based on choice
   doZeeChoice(userChoice);
   
   // print menus & do something
   // if player is still alive & time hasn't run out
   //playerLoc = current->getLocation();
   while(gameOver == 0 || turn < 10) {
      if(playerLoc == zee1->getLocation()) {
	 zeeIntro();
         zeeMenu();
         userChoice = getChoice(); 
         doZeeChoice(userChoice);
         cout << "current location: " << playerLoc << endl;
      }
      if(playerLoc == pairadice1->getLocation()) {
         pairadiceIntro();
	 pairadiceMenu();
         userChoice = getChoice(); 
         doPairadiceChoice(userChoice);
         cout << "current location: " << playerLoc << endl;
      }
      if(playerLoc == tesseract1->getLocation()) {
         tesseractIntro();
	 tesseractMenu();
         userChoice = getChoice(); 
         doTesseractChoice(userChoice);
         cout << "current location: " << playerLoc << endl;
      }
      if(playerLoc == camazotz1->getLocation()) {
         camazotzIntro();
	 camazotzMenu();
         userChoice = getChoice(); 
         doCamazotzChoice(userChoice);
         cout << "current location: " << playerLoc << endl;
      }
      if(playerLoc == ixchel1->getLocation()) {
         ixchelIntro();
	 ixchelMenu();
         userChoice = getChoice(); 
         doIxchelChoice(userChoice);
         cout << "current location: " << playerLoc << endl;
      }

      if(playerLoc == wormhole1->getLocation()) {
         wormholeIntro();
	 wormholeMenu();
         userChoice = getChoice(); 
         doWormholeChoice(userChoice);
         delete wormhole1;
         cout << "current location: " << playerLoc << endl;
      }
      if(gameOver == 1 || turn == 10) {
         cout << "GAME OVER!" << endl;
         exit(1);
      }
      turn ++;
      cout << "Turn: " << turn << endl;
   }
   //if(gameOver == 1 || turn == 4) {
     // cout << "Game Over!" << endl;
   //}
   delete zee1;
   delete pairadice1;
   delete tesseract1;
   delete camazotz1;
   delete ixchel1;   
   delete wormhole1;
}
