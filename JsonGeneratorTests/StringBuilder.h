/*
 * Arduino JSON library
 * Benoit Blanchon 2014 - MIT License
 */

#pragma once

#include "JsonSink.h"

class StringBuilder : public JsonSink
{
public:
    StringBuilder(char* buf, int size)
        : buffer(buf), capacity(size-1), length(0)
    {
        buffer[0] = 0;
    }

    virtual size_t append(char c);
    size_t append(const char* c);

private:
    char* buffer;
    int capacity;
    int length;
};

