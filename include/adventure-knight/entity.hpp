// WARNING: Never ever use "using namespace blah" in a header file.
// This will cause huge ambiguity issues.

// Non-standard but widely suppoted preprocessor directive.
// Used to cause the header file to be included only once in a single compilation.
#pragma once

// Includes
// https://www.learncpp.com/cpp-tutorial/classes-and-header-files/
#include <string>
#include "tools/position.hpp"

// Virtual functions allow us to override methods in subclasses.

// Class Definition
class Entity
{
    private:
        // Private data members
        std::string m_name ;
        int m_health ; // 0 - 100
        int m_speed ;
        Position m_position ;

    public:
        // Constructor
        Entity( const std::string& name, const Position& position ) ;

        // Public member functions
        void move( const int& deltaX, const int& deltaY, const int& deltaZ ) ;

        // A const reference means that the referenced value cannot be modified.
        // I believe this is similar to "final" in java.
        // A const reference can bind to an lvalue and an rvalue
        //      const int& blah
        //
        // rvalue references look like this: int&& blah.
        // They allow you to bind to temporary objects (rvalues) and are 
        // primarily used to enable move semantics and perfect forwarding.
        // Definition: An rvalue reference is a reference that can bind to an rvalue (a temporary object).
        // Purpose: Move semantics allow the resources of a temporary object to be “moved” 
        //      rather than copied, which can significantly improve performance by avoiding unnecessary deep copies.
        // Purpose: Perfect forwarding allows you to forward arguments to another 
        //      function while preserving their value category (lvalue or rvalue).
        // Rvalue references enable efficient resource management by allowing the transfer of resources from temporary objects.
        // They are essential for implementing move constructors and move assignment operators.
        void takeDamage( const int& damage ) ;

        // Making this a const reference so that it cannot be modified by
        // the person using this function. 
        const std::string& getEntityName() const ;

        // https://www.geeksforgeeks.org/const-member-functions-c/
        virtual void displayStatus() const ; // log the entity's status

        // Destructor
        ~Entity() ;
} ;