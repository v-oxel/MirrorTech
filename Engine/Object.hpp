#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "mtedef.hpp"
#include "String.hpp"

_MTE_BEGIN

class Object
{
public:
    virtual ~Object() {}

public:
    virtual String ToString() = 0;
    friend std::wostream& operator<<(std::wostream& os, Object& object)
    {
        os << object.ToString();
        return os;
    }
};

_MTE_END

#endif // !OBJECT_HPP