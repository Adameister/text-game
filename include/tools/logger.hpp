// WARNING: Never ever use "using namespace blah" in a header file.
// This will cause huge ambiguity issues.

// https://www.geeksforgeeks.org/logging-system-in-cpp/

// https://cplusplus.com/reference/fstream/
// https://cplusplus.com/reference/fstream/ofstream/

#pragma once

//#include <string>
//#include <fstream>

////////////////////////////////////////////////////////////////////////////////

// If you do not want people to be able to create an instance of this class,
// there are two methods to prevent instance creation.
//      1) make the default constructor private
//          private:
//              Logger() {} ;
//      2) assign delete to the default constructor
//          public:
//              Logger() = delete ;
//
// Please note that there are two other special constructor types:
//      - Copy Constructor
//      - Move Constructor

class Logger
{
    public:
        enum LogLevel
        {
            ERROR,
            WARNING,
            DEBUG,
            INFO
        } ;

    private:
        // I want this to default to the most verbose level.
        // I don't think I should make that definition in the header file.
        static LogLevel m_logLevel ;

    public:

        // Constructor

        Logger() = delete ;
        //Logger( LogLevel logLevel ) ;

        // Static member functions
        // It's probably a good idea to make these member functions static.
        // If they are static, then you cannot apply the const modifier. 

        static void setLogLevel( LogLevel logLevel ) ;
        static LogLevel getLogLevel() ;

        static void error( const std::string& message ) ;
        static void warning( const std::string& message ) ;
        static void debug( const std::string& message ) ;
        static void info( const std::string& message ) ;

        // Destructor: Closes the log file
        ~Logger() ;
} ;

////////////////////////////////////////////////////////////////////////////////