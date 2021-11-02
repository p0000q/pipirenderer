#pragma once

#include <cmath>

template <typename T>
class TVec3 {
public:
    TVec3<T> operator+(TVec3<T> b) {
        return {x + b.x, y + b.y, z + b.z};
    }

    TVec3<T> operator-(TVec3<T> b) {
        return {x - b.x, y - b.y, z - b.z};
    }

    TVec3<T> operator*(TVec3<T> b) {
        return {x * b.x, y * b.y, z * b.z};
    }

    TVec3<T> operator/(TVec3<T> b) {
        return {x / b.x, y / b.y, z / b.z};
    }

    bool operator==(TVec3<T> b) {
        return x == b.x && y == b.y && z == b.z;
    }

    bool operator!=(TVec3<T> b) {
        return !(this == b);
    }

    T dot(TVec3<T> b) {
        return x * b.x + y * b.y + z * b.z;
    }

    T normSq() {
        return dot(this, this);
    }

    T norm() {
        return std::sqrt(normSq());
    }

    T x{}, y{}, z{};
};