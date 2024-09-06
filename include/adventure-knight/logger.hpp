// WARNING: Never ever use "using namespace blah" in a header file.
// This will cause huge ambiguity issues.

#pragma once

#include <string>
#include <fstream>

enum LogLevel
{
    DEBUG,
    INFO,
    WARNING,
    ERROR
} ;

class Logger
{
    private:

    public:
        // Constructor: Opens the log file in append mode
        Logger( const std::string& ) ;

        // Destructor: Closes the log file
        ~Logger() ;
} ;