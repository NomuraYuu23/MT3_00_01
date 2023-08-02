#pragma once
#include "MT3Vector3.h"
#include "MT3Matrix4x4.h"

//演算子のオーバーロード

//二項演算子
Vector3 operator+(const Vector3& v1, const Vector3& v2) { return Add(v1, v2); }
Vector3 operator-(const Vector3& v1, const Vector3& v2) { return Subtract(v1, v2); }
Vector3 operator*(float s, const Vector3& v) { return Multiply(s, v); }
Vector3 operator*(const Vector3& v, float s) { return s * v; }
Vector3 operator/(const Vector3& v, float s) { return Multiply(1.0f / s, v); }

//単項演算子
Vector3 operator-(const Vector3& v) { return { -v.x, -v.y, -v.z }; }
Vector3 operator+(const Vector3& v) { return v; }

//演算子のオーバーロード

//二項演算子
Matrix4x4 operator+(const Matrix4x4& m1, const Matrix4x4& m2) { return Add(m1, m2); }
Matrix4x4 operator-(const Matrix4x4& m1, const Matrix4x4& m2) { return Subtract(m1, m2); }
Matrix4x4 operator*(const Matrix4x4& m1, const Matrix4x4& m2) { return Multiply(m1, m2); }