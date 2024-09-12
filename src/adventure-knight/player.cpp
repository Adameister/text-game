#include <iostream>
#include "adventure-knight/player.hpp"
#include "tools/logger.hpp"

////////////////////////////////////////////////////////////////////////////////

Player::Player( std::string& name, Position& position )
    : Entity {name, position}
{
}

////////////////////////////////////////////////////////////////////////////////

// I think it is strange that "override" wouldn't be specified here
// as well as in the header. 
void Player::displayStatus() const
{
    std::cout << "Hello from the Player class!" << std::endl ;
}

std::string Player::getPlayerLocation() const
{
    Logger::warning( "Method is not implemented." ) ;
    return "No valid location!" ;
}

////////////////////////////////////////////////////////////////////////////////

Player::~Player()
{

}