/*******************************************************************
** Filename: Ixchel.cpp
** Author: Keisha Arnold
** Description: Final Project. Class implementation file for the 
** Ixchel class, derived from the Space class.
** Input:
** Output:
********************************************************************/
#include "Ixchel.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::endl;
using std::string;

/******************************************************************
*			Ixchel::Ixchel()
* Ixchel class constructor.
******************************************************************/
Ixchel::Ixchel() : Space("Ixchel") {
/*
   setLocation(loc);
   this->right = NULL;
   this->left = NULL;
   this->up = NULL;
   this->down = NULL;
   Item key("key"); 
*/
   // test
   //cout << "Hello from Space Ixchel!" << endl;
}

/*******************************************************************
*			Ixchel::~Ixchel()
* The Ixchel class destructor frees memory.
*******************************************************************/
Ixchel::~Ixchel() {

}

/*******************************************************************
*			Ixchel::choiceMenu()
* This is a virtual function. 
*******************************************************************/
/*
void Ixchel::choiceMenu() {
   cout << "\n\n		MENU\n\n";
   cout << "1) \n";
   cout << "2) Medusa\n";
   cout << "3) Gollum\n";
   cout << "4) Quit the Game\n";
   cout << "Enter your choice: ";

}
*/

/*******************************************************************
*			Ixchel::alien()
* This function redefines the pure virtual function from the
* Space class. 
*******************************************************************/
void Ixchel::alien() {
   // This "alien" is a dark void of a spirit, it doesn't speak words
   // but communicates in your mind
   cout << "\nA body? I wouldn't know about such nonsense.";
}

/*******************************************************************
*			Ixchel::playGm()
* This function is the alien attack. 
*******************************************************************/
int Ixchel::playGm() {
   int win = 0;;
   //int attempt = 0;
   //string answer;
   //string solution = "time";

   // game description
   cout << "The game is simple. Just answer this riddle correctly\n"
   "and you win!\n"
   "This thing all things devours;\n"
   "Birds, beasts, trees, flowers;\n"
   "Gnaws iron, bites steel;\n"
   "Slays king, ruins town,\n"
   "And beats high mountain down.\n"
   "Hint: What does a clock keep track of?\n"
   "What is your answer?: ";
/*
   getline(std::cin, answer);

   while(attempt < 3) {
      if(answer == solution) {
         cout << "You win." << endl;
         win = 1;
      }
      else {
         cout << "Try again." << endl;
         win = 0;
      }
      attempt++;
   }
*/
      return win;
}
     
/*******************************************************************
*			Space::setLocation(string)
* This virtual function copies the argument passed into the 
* parameter to the protected member variable location.
*******************************************************************/
/*
void Space::setLocation(string loc) {
   location = loc;
*/

/*******************************************************************
*			Ixchel::getKey()
* This function returns the value in private member variable key .
*******************************************************************/
/*
Item Ixchel::getKey() {
   return key;
}
*/
