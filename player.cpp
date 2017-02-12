#include <iostream>
#include <string>
#include "player.h"

using namespace std;

void Player::createPlayer( string name ){
	// TODO: stuff
	playerName = name;
}

string Player::getPlayerName( void ){
    return playerName;
}
