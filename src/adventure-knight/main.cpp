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

#include <iostream>
#include <string>
#include <algorithm>

#include "adventure-knight/player.hpp"

////////////////////////////////////////////////////////////////////////////////

// Functions list
void cmd( std::string uInput ) ;
int checkInterrupt( std::string uInput ) ;

////////////////////////////////////////////////////////////////////////////////

int main( int argc, char** argv )
{
    std::cout << "The following are parameters that have been passed to the program:" << std::endl ;
    for( int i = 0 ; i < argc ; i++ )
    {
        std::cout << argv[i] << std::endl ;
    }
    std::cout << "End of parameters." << std::endl ;

    // FIXME - Decide how to handle the main map.
    // Init the new map
    //Map map ;

    // declare new Player object called player
    Player* player ;

    std::string uInput ;  // holds the input from the user from each iteration of the game's main loop

    std::cout << "Welcome to TextAdventure!\n" ;
    std::cout << "Please enter a name for your charater: " ;
    std::getline( std::cin, uInput ) ;

    //player.createPlayer( uInput ) ;

    std::cout << "\nThis game involves using one's surrounding to help in the completion of this game.\n" ;
    std::cout << "To display the help menu, enter: >help \n" ;
    std::cout << '\n' ;

    int running = 1 ;

    while( running )
    {
        // Displayed every time the program waits for user input.
        // The difference between player.getPlayerName() and player->getPlayerName()
        //      lies in how you access the member function of getPlayerName() of the Player class
        //      Pointer Access (player->getPlayerName())
        //          Used when player is a pointer to an object.
        //      Object Access (player.getPlayerName())
        //          Used when player is an instance or reference of an object
        std::cout << player->getEntityName() << "@" << player->getPlayerLocation() << ">" ;
        std::getline( std::cin, uInput ) ;

        running = checkInterrupt( uInput ) ;

        cmd( uInput ) ;
    }


    return 0 ;
}

////////////////////////////////////////////////////////////////////////////////

void cmd( std::string uInput )
{
    // debugging output for the input
    //cout << "#" << uInput << "#" ;
}

////////////////////////////////////////////////////////////////////////////////

int checkInterrupt( std::string uInput )
{
    // This line of code will allow players to exit the game with accidental spaces
    // before or after the exit command
    uInput.erase( remove_if( uInput.begin(), uInput.end(), ::isspace ), uInput.end() ) ;

    if( uInput.compare("exit") == 0 )
    {
        return 0 ;
    }
    
    if( uInput.compare("quit") == 0 )
    {
        return 0 ;
    }
    
    if( uInput.compare("help") == 0 )
    {
        std::cout << "Commands:" << std::endl ;
        std::cout << "'exit' or 'quit' to exit the game." << std::endl ;
        std::cout << "'pick up [item]' to pick up the desired item." << std::endl ;
        std::cout << "'look' to observe the environment around you." << std::endl ;
        std::cout << "'n' 's' 'e' 'w' to walk north, south, east, and west respectively." << std::endl ;
    }

    // if there was no interrupt, then keep the game running
    return 1;
}

////////////////////////////////////////////////////////////////////////////////