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

    inline vec3 operator+(const vec3& l, const vec3& r);
    inline vec3 operator-(const vec3& l, const vec3& r);
    inline vec3 operator*(const vec3& l, const vec3& r);
    inline vec3 operator*(const vec3& vec, float scalar);
    inline float dot(const vec3& l, const vec3& r);
    inline float lengthSquared(const vec3& vec);
    inline float length(const vec3& vec);
    inline void normalize(vec3& vec);
    inline vec3 normalized(const vec3& vec);
    inline float angle(const vec3& l, const vec3& r);
    inline vec3 project(const vec3& a, const vec3& b);
    inline vec3 reject(const vec3& a, const vec3& b);
}