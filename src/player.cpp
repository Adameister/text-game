#include <iostream>
#include <string>
#include "adventure-knight/player.hpp"

using namespace std ;

void Player::createPlayer( string name )
{
    // TODO: stuff
    playerName = name ;
    
    // The default starting location for the player
    playerLocation = "Castle Gates" ;
}

void Player::setPlayerLocation( string name )
{
    playerLocation = name ;
}

string Player::getPlayerName( void )
{
    return playerName ;
}

string Player::getPlayerLocation( void )
{
    return playerLocation ;
}