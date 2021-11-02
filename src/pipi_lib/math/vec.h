#pragma once

#include <cmath>

// #define FLOAT double;
typedef double FLOAT;

template <typename T>
class TVec3 {
public:
    T x{}, y{}, z{};

    explicit TVec3() {

    }

    explicit TVec3(T t): x(t), y(t), z(t) {}
    explicit TVec3(T a, T b, T c): x(a), y(b), z(c) {}

    explicit TVec3(const TVec3<T>& a): x(a.x), y(a.y), z(a.z) {

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

    TVec3<T> cross(const TVec3<T>& b) {
        return TVec3<T>{
            y * b.z - b.y * z,
            z * b.x - b.z * x,
            x * b.y - b.x * y
        };
    }

};

template <typename T>
inline TVec3<T> operator+(const TVec3<T>& a, const TVec3<T>& b) {
    return {a.x + b.x, a.y + b.y, a.z + b.z};
}

template <typename T>
inline TVec3<T>& operator+=(const TVec3<T>& a, const TVec3<T>& b) {
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

template <typename T>
inline TVec3<T> operator-(TVec3<T> a, TVec3<T> b) {
    return {a.x - b.x, a.y - b.y, a.z - b.z};
}

template <typename T>
inline TVec3<T>& operator-=(const TVec3<T>& a, const TVec3<T>& b) {
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

template <typename T>
inline TVec3<T> operator*(TVec3<T> a, TVec3<T> b) {
    return {a.x * b.x, a.y * b.y, a.z * b.z};
}

template <typename T>
inline TVec3<T>& operator*=(const TVec3<T>& a, const TVec3<T>& b) {
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    return a;
}

template <typename T>
inline TVec3<T> operator/(TVec3<T> a, TVec3<T> b) {
    return {a.x / b.x, a.y / b.y, a.z / b.z};
}

template <typename T>
inline TVec3<T>& operator/=(const TVec3<T>& a, const TVec3<T>& b) {
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    return a;
}

template <typename T>
inline bool operator==(const TVec3<T>& a, const TVec3<T>& b) {
    return a.x == b.x && a.y == b.y && a.z == b.z;
}

template <typename T>
inline bool operator!=(const TVec3<T>& a, const TVec3<T>& b) {
    return !(a == b);
}

typedef TVec3<FLOAT> V3f; 
