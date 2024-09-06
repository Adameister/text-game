//#include <string>

// If I don't include this file, then this ->Entity::Entity will not be defined.
#include "adventure-knight/entity.hpp"

// Function definitions do not need to be punctuated by a semicolon

// Shadow Variables in C++
//      Shadow variables occur when a local variable in a scope has the same name as a variable in an outer scope.
//      Use the "-Wshadow" compiler warning to prevent accidental shadowing.

Entity::Entity( std::string name, double positionX )
{
    this->name = name ;
}

void Entity::move( double deltaX, double deltaY, double deltaZ )
{
    positionX += deltaX ;
    positionY += deltaY ;
    positionZ += deltaZ ;
}

void Entity::takeDamage( int damage )
{
    health -= damage ;

    // If the entity's health drops below zero, log the event.
    if( health >= 0 )
    {
        // FIXME - make the entity dead and log the event.
    }
}

Entity::~Entity()
{

}