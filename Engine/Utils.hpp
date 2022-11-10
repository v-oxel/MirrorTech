#ifndef UTILS_HPP
#define UTILS_HPP

#include <typeinfo>

#include "mtedef.hpp"
#include "vec.hpp"

_MTE_BEGIN

namespace utils
{

const wchar_t* GetTypeName(std::reference_wrapper<const std::type_info> ti)
{
    #define RETURN_TYPE_NAME(type) \
        if (ti.get() == typeid(type)) return L#type

    RETURN_TYPE_NAME(int8);
    RETURN_TYPE_NAME(int16);
    RETURN_TYPE_NAME(int32);
    RETURN_TYPE_NAME(int64);
    RETURN_TYPE_NAME(uint8);
    RETURN_TYPE_NAME(uint16);
    RETURN_TYPE_NAME(uint32);
    RETURN_TYPE_NAME(uint64);

    RETURN_TYPE_NAME(float32);
    RETURN_TYPE_NAME(float64);

    return L"";
}

}

_MTE_END

#endif // !UTILS_HPP