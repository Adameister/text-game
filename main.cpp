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

  // declare new Player object called player
  Player player;

  string uInput;  // holds the input from the user from each iteration of the game's main loop
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
  // This line of code will allow players to exit the game with accidental spaces
  // before or after the exit command
  uInput.erase( remove_if( uInput.begin(), uInput.end(), ::isspace), uInput.end() );

  if( uInput.compare("exit") == 0 ){
    return 0;
  }
  
  if( uInput.compare("quit") == 0 ){
    return 0;
  }
  
  if( uInput.compare("help") == 0 ){
    // TODO: Display help information/help menu
  }

  // if there was no interrupt, then keep the game running
  return 1;
}
