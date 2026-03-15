#include "vec3.h"

#include <cmath>

nocore::vec3 nocore::operator+(const vec3& l, const vec3& r) {
    return vec3(l.x_ + r.x_, l.y_ + r.y_, l.z_ + r.z_);
}

nocore::vec3 nocore::operator-(const vec3& l, const vec3& r) {
    return vec3(l.x_ - r.x_, l.y_ - r.y_, l.z_ - r.z_);
}

nocore::vec3 nocore::operator*(const vec3& l, const vec3& r) {
    return vec3(l.x_ * r.x_, l.y_ * r.y_, l.z_ * r.z_);
}

nocore::vec3 nocore::operator*(const vec3& vec, const float scalar) {
    return vec3(vec.x_ * scalar, vec.y_ * scalar, vec.z_ * scalar);
}

float nocore::dot(const vec3& l, const vec3& r) {
    return l.x_ * r.x_ + l.y_ * r.y_ + l.z_ * r.z_;
}

float nocore::lengthSquared(const vec3& vec) {
    return vec.x_ * vec.x_ + vec.y_ * vec.y_ + vec.z_ * vec.z_;
}

float nocore::length(const vec3& vec) {
    const float lenSq = lengthSquared(vec);
    if (lenSq < epsilon) {
        return 0.0f;
    }
    return sqrtf(lenSq);
}

void nocore::normalize(vec3& vec) {
    const float lenSq = lengthSquared(vec);
    if (lenSq < epsilon) {return;}
    const float invLen = 1.0f / sqrtf(lenSq);
    vec.x_ *= invLen;
    vec.y_ *= invLen;
    vec.z_ *= invLen;
}

nocore::vec3 nocore::normalized(const vec3& vec) {
    const float lenSq = lengthSquared(vec);
    if (lenSq < epsilon) return vec;
    const float invLen = 1.0f / sqrtf(lenSq);
    return vec3 (
        vec.x_ * invLen,
        vec.y_ * invLen,
        vec.z_ * invLen
    );
}

float nocore::angle(const vec3& l, const vec3& r) {
    const float sqMagL = dot(l, l);
    const float sqMagR = dot (r, r);
    if (sqMagL < epsilon || sqMagR < epsilon) {
        return 0.0f;
    }

    const float dot_scalar = dot(l, r);
    const float len_scalar = sqrtf(sqMagL) * sqrtf(sqMagR);

    return acosf(dot_scalar / len_scalar);
}

nocore::vec3 nocore::project(const vec3& a, const vec3& b) {
    const float magBSq = length(b);
    if (magBSq < epsilon) {
        return vec3();
    }
    const float scale = dot(a, b) / magBSq;
    return b * scale;
}

nocore::vec3 nocore::reject(const vec3& a, const vec3& b) {
    const vec3 projection = project(a, b);
    return a - projection;
}






