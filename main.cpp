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
#include <algorithm>

// Including other files
#include "player.h"

using namespace std;

void cmd( string uInput );

int checkInterrupt( string uInput );

int main(){

  Player player;

  string uInput;
  string location = "dungeon";

  cout << "Welcome to TextAdventure!\n";
  cout << "Please enter a name for your charater: ";
  getline( cin, uInput );

  player.createPlayer( uInput );

  cout << "\nThis game involves using one's surrounding to help in the completion of this game.\n";
  cout << "To display the help menu, enter: >help \n";
  cout << '\n';

  int running = 1;

  while( running ){
    cout << player.getPlayerName() << "@" << location << ">";
    getline(cin, uInput);

    running = checkInterrupt( uInput );

    cmd( uInput );
  }


  return 0;
}

void cmd( string uInput ){
  // debugging output for the input
  //cout << "#" << uInput << "#";
}

int checkInterrupt( string uInput ){

  uInput.erase( remove_if( uInput.begin(), uInput.end(), ::isspace), uInput.end() );

  if( uInput.compare("exit") == 0 ){
    return 0;
  }

  // if there was no interrupt, then keep the game running
  return 1;
}
