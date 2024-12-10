#include "vector.hpp"

namespace Math
{
    Vector2D::Vector2D()
        :   x(0)
        ,   y(0)
    {

    }

    Vector2D::Vector2D(float x, float y)
        :   x(x)
        ,   y(y)
    {

    }

    Vector2D& Vector2D::add(const Vector2D& v)
    {   
        this->x += v.x;
        this->y += v.y;
        return *this;
    }

    Vector2D& Vector2D::min(const Vector2D& v)
    {   
        this->x -= v.x;
        this->y -= v.y;
        return *this;
    }

    Vector2D& Vector2D::mul(const Vector2D& v)
    {   
        this->x *= v.x;
        this->y *= v.y;
        return *this;
    }

    Vector2D& Vector2D::div(const Vector2D& v)
    {   
        this->x /= v.x;
        this->y /= v.y;
        return *this;
    }

    Vector2D& Vector2D::mod(const Vector2D& v)
    {   
        int x = this->x;
        int y = this->y;

        this->x = (x %= (int)v.x);
        this->y = (y %= (int)v.y);

        return *this;
    }

    /* =================== - OP-OVERLOADS - =================== */
    Vector2D& Vector2D::operator+(const Vector2D& v)
    {
        this->x += v.x;
        this->y += v.y;
        return *this;
    }

    Vector2D& Vector2D::operator-(const Vector2D& v)
    {
        this->x -= v.x;
        this->y -= v.y;
        return *this;
    }

    Vector2D& Vector2D::operator*(const Vector2D& v)
    {
        this->x *= v.x;
        this->y *= v.y;
        return *this;
    }

    Vector2D& Vector2D::operator/(const Vector2D& v)
    {
        this->x /= v.x;
        this->y /= v.y;
        return *this;
    }

    Vector2D& Vector2D::operator%(const Vector2D& v)
    {
        int x = this->x;
        int y = this->y;

        this->x = (x %= (int)v.x);
        this->y = (y %= (int)v.y);

        return *this;
    }

    // Assignment Operators
    Vector2D& Vector2D::operator+=(const Vector2D& v)
    {
        this->x += v.x;
        this->y += v.y;
        return *this;
    }

    Vector2D& Vector2D::operator-=(const Vector2D& v)
    {
        this->x -= v.x;
        this->y -= v.y;
        return *this;
    }

    Vector2D& Vector2D::operator*=(const Vector2D& v)
    {
        this->x *= v.x;
        this->y *= v.y;
        return *this;
    }

    Vector2D& Vector2D::operator/=(const Vector2D& v)
    {
        this->x /= v.x;
        this->y /= v.y;
        return *this;
    }

    Vector2D& Vector2D::operator%=(const Vector2D& v)
    {
        int x = this->x;
        int y = this->y;

        this->x = (x %= (int)v.x);
        this->y = (y %= (int)v.y);

        return *this;
    }
}