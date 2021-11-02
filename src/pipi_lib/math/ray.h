#pragma once

#include "./vec.h";
#include <limits>
#include <numeric>

class Ray {
public:
    V3f o;
    V3f d;
    FLOAT t0;
    FLOAT t1;

    explicit Ray() = default;
    explicit Ray(V3f origin, V3f dir, FLOAT min, FLOAT max): o(origin), d(dir), t0(min), t1(max) {}
    FLOAT length() const {
        return t1 - t0;
    }

    bool isInf() const {
        return t1 < std::numeric_limits<FLOAT>::max();
    }
};
