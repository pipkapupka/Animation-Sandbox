#include "vec3.h"

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





