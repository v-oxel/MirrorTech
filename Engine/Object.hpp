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
};

_MTE_END

#endif // !OBJECT_HPP