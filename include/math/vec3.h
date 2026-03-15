#pragma once

constexpr float epsilon = 0.000001f;

namespace nocore {
    struct vec3 {
        union {
            struct {
                float x_, y_, z_;
            };
            float v[3];
        };
        vec3() : x_(0), y_(0), z_(0) {}
        vec3(const float x, const float y, const float z) : x_(x), y_(y), z_(z) {}
        explicit vec3(const float* fv) : x_(fv[0]), y_(fv[1]), z_(fv[2]) {}
    };

    vec3 operator+(const vec3& l, const vec3& r);
    vec3 operator-(const vec3& l, const vec3& r);
    vec3 operator*(const vec3& l, const vec3& r);
    vec3 operator*(const vec3& vec, float scalar);
    float dot(const vec3& l, const vec3& r);
}