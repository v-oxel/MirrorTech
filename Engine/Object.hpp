#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "mtedef.hpp"
#include "String.hpp"

_MTE_BEGIN

#ifndef DECLARE_WOSTREAM_OPERATOR
#define DECLARE_WOSTREAM_OPERATOR(class) \
public: friend std::wostream& operator<<(std::wostream& os, class& object) \
{ \
    os << object.ToString(); \
    return os; \
}
#endif

class Object
{
public:
    virtual ~Object() {}

public:
    virtual String ToString() = 0;
    DECLARE_WOSTREAM_OPERATOR(Object)
};

_MTE_END

#endif // !OBJECT_HPP