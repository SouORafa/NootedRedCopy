#pragma once
#include <Headers/kern_util.hpp>

constexpr UInt32 InvalidOffset = 0xFFFFFFFF;

template<typename T>
class ObjectField {
    UInt32 offset {InvalidOffset};

    public:
    inline void operator=(const UInt32 offset) { this->offset = offset; }

    inline ObjectField<T> operator+(const UInt32 value) {
        PANIC_COND(this->offset == InvalidOffset, "ObjField", "value == InvalidOffset");
        ObjectField<T> ret {};
        ret.offset = this->offset + value;
        return ret;
    }

    inline T &get(void *that) {
        PANIC_COND(that == nullptr, "ObjField", "that == nullptr");
        PANIC_COND(this->offset == InvalidOffset, "ObjField", "this->offset == InvalidOffset");
        return getMember<T>(that, this->offset);
    }
};