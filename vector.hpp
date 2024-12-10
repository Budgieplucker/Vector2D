#pragma once

namespace Math
{
    class Vector2D
    {
    public:
        Vector2D();
        Vector2D(float x, float y);
        ~Vector2D() = default;
    public:
        float x, y;
    public:
        Vector2D& add(const Vector2D& v);
        Vector2D& min(const Vector2D& v);
        Vector2D& mul(const Vector2D& v);
        Vector2D& div(const Vector2D& v);
        Vector2D& mod(const Vector2D& v);
    public:
        Vector2D& operator+(const Vector2D& v);
        Vector2D& operator-(const Vector2D& v);
        Vector2D& operator*(const Vector2D& v);
        Vector2D& operator/(const Vector2D& v);
        Vector2D& operator%(const Vector2D& v);

        // Assignment operators
        Vector2D& operator+=(const Vector2D& v);
        Vector2D& operator-=(const Vector2D& v);
        Vector2D& operator*=(const Vector2D& v);
        Vector2D& operator/=(const Vector2D& v);
        Vector2D& operator%=(const Vector2D& v);
    };
}