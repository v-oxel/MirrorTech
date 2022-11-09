#ifndef MTEDEF_HPP
#define MTEDEF_HPP

#define _MTE_BEGIN \
    namespace mte {
#define _MTE_END \
    }

_MTE_BEGIN

#pragma region Integers
using int8   = signed char;
using int16  = signed short;
using int32  = signed long;
using int64  = signed long long;
using uint8  = unsigned char;
using uint16 = unsigned short;
using uint32 = unsigned long;
using uint64 = unsigned long long;
#pragma endregion Integers

#pragma region Integers constants
const int8   int8_MIN   = (-127i8 - 1);
const int16  int16_MIN  = (-32767i16 - 1);
const int32  int32_MIN  = (-2147483647i32 - 1);
const int64  int64_MIN  = (-9223372036854775807i64 - 1);
const int8   int8_MAX   = 127i8;
const int16  int16_MAX  = 32767i16;
const int32  int32_MAX  = 2147483647i32;
const int64  int64_MAX  = 9223372036854775807i64;
const uint8  uint8_MAX  = 0xffui8;
const uint16 uint16_MAX = 0xffffui16;
const uint32 uint32_MAX = 0xffffffffui32;
const uint64 uint64_MAX = 0xffffffffffffffffui64;
#pragma endregion Integers constants

#pragma region Floats
using float32 = float;
using float64 = double;
#pragma endregion Floats

_MTE_END

#endif // !MTEDEF_HPP