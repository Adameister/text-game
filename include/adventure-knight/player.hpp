// WARNING: Never ever use "using namespace blah" in a header file.
// This will cause huge ambiguity issues.

#pragma once

#include "adventure-knight/entity.hpp"

class Player : public Entity
{
    private:
        // Private data members

    public:
        // Constructor
        Player( std::string& name, Position& position ) ;

        // Member functions

        void displayStatus() const override ;
        std::string getPlayerLocation() const ;

        // Destructor
        ~Player() ;
} ;
