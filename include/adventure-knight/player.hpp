// WARNING: Never ever use "using namespace blah" in a header file.
// This will cause huge ambiguity issues.

#pragma once

#include "adventure-knight/entity.hpp"

class Player : public Entity
{
    private:
        std::string playerName ; // FIXME - the super class already has a name
        std::string playerLocation ; // FIXME - this is not the correct concept

    public:
        // Constructor
        Player() ;

        // Member functions
        void createPlayer( std::string name ) ;
        void setPlayerLocation( std::string name ) ;
        std::string getPlayerName( void ) const ;
        std::string getPlayerLocation( void ) const ;

        // Destructor
        ~Player() ;
};
