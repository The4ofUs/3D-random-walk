#include "Point.hpp"

void Point::setCoordinates(float x, float y, float z)
{
    this->x_ = x;
    this->y_ = y;
    this->z_ = z;
}

float Point::getX() const { return this->x_; }
float Point::getY() const { return this->y_; }
float Point::getZ() const { return this->z_; }