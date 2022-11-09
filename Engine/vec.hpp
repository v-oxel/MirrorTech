#ifndef VEC_HPP
#define VEC_HPP

#include <cmath>

#include "mtedef.hpp"
#include "Object.hpp"

_MTE_BEGIN

template <typename T>
class vec2 : Object
{
public:
    T x, y;

// Constructors
#pragma region Constructors
public:
    vec2() : x(T()), y(T()) {}
    vec2(T x, T y) : x(x), y(y) {}
    vec2(const vec2& v) : x(v.x), y(v.y) {}
    vec2& operator=(const vec2& v)
    {
        x = v.x;
        y = v.y;
        return *this;
    }
#pragma endregion Constructors

// Operators
#pragma region Operators
public:
    vec2 operator+(vec2& v) {
        return vec2(x + v.x, y + v.y);
    }
    vec2& operator+=(vec2& v) {
        x += v.x;
        y += v.y;
        return *this;
    }

    vec2 operator-(vec2& v) {
        return vec2(x - v.x, y - v.y);
    }
    vec2& operator-=(vec2& v) {
        x -= v.x;
        y -= v.y;
        return *this;
    }

    vec2 operator+(T s) {
        return vec2(x + s, y + s);
    }
    vec2& operator+=(T s) {
        x += s;
        y += s;
        return *this;
    }

    vec2 operator-(T s) {
        return vec2(x - s, y - s);
    }
    vec2& operator-=(T s) {
        x -= s;
        y -= s;
        return *this;
    }

    vec2 operator*(T s) {
        return vec2(x * s, y * s);
    }
    vec2& operator*=(T s) {
        x *= s;
        y *= s;
        return *this;
    }

    vec2 operator/(T s) {
        return vec2(x / s, y / s);
    }
    vec2& operator/=(T s) {
        x /= s;
        y /= s;
        return *this;
    }
#pragma endregion Operators

#pragma region Methods
    T Length() const
    {
        return std::sqrt(x * x + y * y);
    }
#pragma endregion Methods

public:
    String ToString()
    {
        std::wstringstream ss;
        ss << L"vec2 { " << x << L"; " << y << L" }";
        return ss.str();
    }
};

_MTE_END

#endif // !VEC_HPP