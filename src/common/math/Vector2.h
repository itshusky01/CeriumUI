#pragma once

#include <iostream>
#include <math.h>

namespace CeriumUI::Common::Math {

    template<typename T>
    class Vector2 {
    public:
        T x, y;

        Vector2();
        Vector2(T x, T y);

        template<typename U>
        friend std::ostream &operator<<(std::ostream &out, const Vector2<U> &v);

        Vector2<T> operator+(const Vector2<T>& v) const;
        Vector2<T> operator-(const Vector2<T>& v) const;
        Vector2<T> operator*(const Vector2<T>& v) const;
        Vector2<T> operator/(const Vector2<T>& v) const;

    private:

    };

    template<typename T>
    Vector2<T> Vector2<T>::operator/(const Vector2<T> &v) const {
        return Vector2<T>(x / v.x, y / v.y);
    }

    template<typename T>
    Vector2<T> Vector2<T>::operator*(const Vector2<T> &v) const {
        return Vector2<T>(x * v.x, y * v.y);
    }

    template<typename T>
    Vector2<T> Vector2<T>::operator-(const Vector2<T> &v) const {
        return Vector2<T>(x - v.x, y - v.y);
    }

    template<typename T>
    Vector2<T> Vector2<T>::operator+(const Vector2<T> &v) const {
        return Vector2<T>(x + v.x, y + v.y);
    }

    template<typename U>
    std::ostream &operator<<(std::ostream &out, const Vector2<U> &v) {
        return out << "(" << v.x << "," << v.y << ")";
    }

    template<typename T>
    Vector2<T>::Vector2() {
        this->x = 0;
        this->y = 0;
    }

    template<typename T>
    Vector2<T>::Vector2(T x, T y) {
        this->x = x;
        this->y = y;
    }

}
