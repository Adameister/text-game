#include <iostream>
#include "adventure-knight/entity.hpp"
#include "tools/logger.hpp"

// Function implementations do not need to be punctuated by a semicolon

// Shadow Variables in C++
//      Shadow variables occur when a local variable in a scope has the same 
//      name as a variable in an outer scope.
//
//      Use the "-Wshadow" compiler warning to prevent accidental shadowing.
//
//      If your member variable name is the same as your parameter name, 
//      you can reference your member by using this-> syntax:
//          this->name = name ;

////////////////////////////////////////////////////////////////////////////////

// When do we use Initializer List in C++?
//
// An Initializer List in C++ is having a ":" after the constructor
// It is used in initializing the data members of a class.
// The list of members to be initialized is indicated with constructor
// as a comma-separated list followed by a colon.
//
// Entity::Entity( std::string& name, Position& position )
//     : m_name{name}, m_position{position} {}
//
// Const data members must be initialized using Initializer List.
// The reason is that no memory is allocated separately for const data member,
// it is folded in the symbol table due to which we need to initialize 
// it in the initializer list.
// 
// Reference Members must be initialized using the Initializer List.
// 
// Initialization of Member Objects that do not have a Default Constructor.
// 
// For Initialization of Base Class Members.
// If a super class A does not have a default constructor, and the subclass B
// is derived from A, then B's constructor must use the Initializer List 
// to initialize its A base class members.
// 
// When the Constructor's parameter name is the same as the Data Member name
// You can either use the "this->member-identifier" or Initializer List.
// 
// For better performance, use the Initializer List.

Entity::Entity( const std::string& name, const Position& position )
    : m_name{ name },
      m_position{ position },
      m_health{ 100 },
      m_speed{ 1 }
{
    // FIXME - how can I reference the Logger class here?
    Logger::info( "Created Entity." ) ;
}

////////////////////////////////////////////////////////////////////////////////

void Entity::move( const int& deltaX, const int& deltaY, const int& deltaZ )
{
    m_position.x += deltaX ;
    m_position.y += deltaY ;
    m_position.z += deltaZ ;
}

void Entity::takeDamage( const int& damage )
{
    m_health -= damage ;

    // If the entity's health drops below zero, log the event.
    if( m_health >= 0 )
    {
        // FIXME - make the entity dead and log the event.
    }
}

const std::string& Entity::getEntityName( void ) const
{
    return m_name ;
}

////////////////////////////////////////////////////////////////////////////////
// Virtual Functions
////////////////////////////////////////////////////////////////////////////////

// I think it is weird that you cannot specify 
// that these methods are virtual again here.

void Entity::displayStatus() const
{
    std::cout << "m_name       = " << m_name << std::endl ;
    std::cout << "m_health     = " << m_health << std::endl ;
    std::cout << "m_speed      = " << m_speed << std::endl ;

    // FIXME - there must be a way to give Position a "toString()" method...
    //std::cout << "m_position = " << m_position << std::endl ;
    std::cout << "m_position.x = " << m_position.x << std::endl ;
    std::cout << "m_position.y = " << m_position.y << std::endl ;
    std::cout << "m_position.z = " << m_position.z << std::endl ;
}

////////////////////////////////////////////////////////////////////////////////

Entity::~Entity()
{
    // FIXME - perform cleanup for this class.

    // If you have manually created memory on the heap,
    // you must manually free it here.

    Logger::info( "Destroyed Entity!" ) ;
}