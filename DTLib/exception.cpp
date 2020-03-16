#include "exception.h"
#include <cstring>
#include <stdio.h>
#include <cstdlib>


using namespace std;

namespace DTLib
{
    void Exception::init(const char* message, const char* file, int line)
    {
        if ( message != nullptr )
        {
            m_message = strdup(message);
        }
        else
        {
            m_message = nullptr;
        }


        if( file != nullptr )
        {
            char sl[16] = {0};

            sprintf(sl, "%d", line);

            m_location = static_cast<char*>(malloc(strlen(file) + strlen(sl) + 2));

            if( m_location != nullptr )
            {
                m_location = strcpy(m_location, file);
                m_location = strcat(m_location, ":");
                m_location = strcat(m_location, sl);
            }
        }
        else
        {
            m_location = nullptr;
        }
    }


    Exception::Exception()
    {
        init(nullptr, nullptr, 0);
    }


    Exception::Exception(const char* message)
    {
        init(message, nullptr, 0);
    }

    Exception::Exception(const char* file, int line)
    {
        init(nullptr, file, line);
    }

    Exception::Exception(const char* message, const char* file, int line)
    {
        init(message, file, line);
    }

    Exception::Exception(const Exception& e)
    {
        m_message = strdup(e.m_message);
        m_location = strdup(e.m_location);
    }

    Exception& Exception::operator=(const Exception& e)
    {
        if( this != &e)
        {
            free(m_message);
            free(m_location);
            m_message = strdup(e.m_message);
            m_location = strdup(e.m_location);
        }
        return *this;
    }

    const char* Exception::message() const
    {
        return m_message;
    }

    const char* Exception::location() const
    {
        return m_location;
    }

    Exception::~Exception()
    {
        free(m_message);
        free(m_location);
    }
}
