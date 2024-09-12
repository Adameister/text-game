// C++ program to implement a basic logging system

#include <iostream>
#include "tools/logger.hpp"

////////////////////////////////////////////////////////////////////////////////
// Initialization of static data members
////////////////////////////////////////////////////////////////////////////////

Logger::LogLevel Logger::m_logLevel = LogLevel::INFO ;

////////////////////////////////////////////////////////////////////////////////
// Constructors
////////////////////////////////////////////////////////////////////////////////

//Logger::Logger()
//{
//
//}

//Logger::Logger( LogLevel logLevel )
//{
//    setLogLevel( logLevel ) ;
//}

////////////////////////////////////////////////////////////////////////////////

void Logger::setLogLevel( LogLevel logLevel )
{
    m_logLevel = logLevel ;
}

Logger::LogLevel Logger::getLogLevel()
{
    return m_logLevel ;
}

////////////////////////////////////////////////////////////////////////////////
// Static member functions 
////////////////////////////////////////////////////////////////////////////////

// Just like how you cannot specify here that methods are virtual, 
// you cannot specify these methods static here either.
// I still think that is weird.

void Logger::error( const std::string& message )
{
    if( m_logLevel >= LogLevel::ERROR )
    {
        std::cout << "[ERROR] - " << message << std::endl ;
    }
}

void Logger::warning( const std::string& message )
{
    if( m_logLevel >= LogLevel::WARNING )
    {
        std::cout << "[WARNING] - " << message << std::endl ;
    }
}

void Logger::debug( const std::string& message )
{
    if( m_logLevel >= LogLevel::DEBUG )
    {
        std::cout << "[DEBUG] - " << message << std::endl ;
    }
}

void Logger::info( const std::string& message )
{
    if( m_logLevel >= LogLevel::INFO )
    {
        std::cout << "[INFO] - " << message << std::endl ;
    }
}

////////////////////////////////////////////////////////////////////////////////

Logger::~Logger()
{
    // FIXME - perform cleanup.
}

////////////////////////////////////////////////////////////////////////////////