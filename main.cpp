/*
 * This file contains the main driver for the text game.
 * The game should be cross platform and compiled with the GCC/G++ compiler.
 * This program was coded by: Adam Hudson
 * 
 * Date: Feb 6th, 2017
 *
 * To Compile:
 *   g++ -c myclass.cpp
 *   g++ -c main.cpp
 *   g++ myclass.o main.o
 *   ./a.out
 * Or
 *   g++ main.cpp myclass.cpp
 *
 */

// Including libraries
#include <iostream>
#include <string>

// Including other files
#include "player.h"

using namespace std;

void cmd( string uInput ){
  // debugging output for the input
  //cout << "#" << uInput << "#";
}

int main(){

  Player one;
  one.foo();

  string uInput;
  string userName;
  string location = "dungeon";

  cout << "Welcome to TextAdventure!\n";
  cout << "Please enter a name for your charater: ";
  getline( cin, userName );
  
  cout << "\nThis game involves using one's surrounding to help in the completion of this game.\n";
  cout << "To display the help menu, enter: >help \n";
  cout << '\n';

  int running = 1;

  while( running ){
    cout << userName << "@" << location << ">";
    getline(cin, uInput);
    cmd( uInput );
  }


  return 0;
}
