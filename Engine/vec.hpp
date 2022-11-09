#ifndef VEC_HPP
#define VEC_HPP

#include "mtedef.hpp"
#include "Object.hpp"

_MTE_BEGIN

template <typename T>
class vec2 : Object
{
public:
    T x, y;

public:
    vec2() : x(T()), y(T()) {}
    vec2(T x, T y) : x(x), y(y) {}
    vec2(const vec2& v) : x(v.x), y(v.y) {}


public:
    override String ToString();
};

_MTE_END

#endif // !VEC_HPP