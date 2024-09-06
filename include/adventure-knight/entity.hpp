// WARNING: Never ever use "using namespace blah" in a header file.
// This will cause huge ambiguity issues.

// Non-standard but widely suppoted preprocessor directive.
// Used to cause the header file to be included only once in a single compilation.
#pragma once

// Includes
// FIXME - I thought Rob said to be careful with including.
// I am not sure if including <string> everywhere is simply okay. 
#include <string>

// Class Definition
class Entity
{
    private:
        // Private data members
        std::string name ;
        int health ; // 0 - 100
        int speed ;
        double positionX, positionY, positionZ ;

    public:
        // Constructor
        Entity( std::string name, double positionX ) ;

        // Public member functions
        void move( double deltaX, double deltaY, double deltaZ ) ;
        void takeDamage( int damage ) ;
        void displayStatus() const ; // log the entity's status

        // Destructor
        ~Entity() ;
} ;