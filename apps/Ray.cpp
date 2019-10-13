#include "Ray.hpp"

void Ray::startFrom(Point startingPoint) // Sets getYour starting point
{
    this->currentPos_.setCoordinates(startingPoint.getX(), startingPoint.getY(), startingPoint.getZ());
};

void Ray::setDirection(Point direction) { this->direction_.setCoordinates(direction.getX(), direction.getY(), direction.getZ()); }

void Ray::setStep(float step) { this->step_ = step; }

Point Ray::getCurrentPos() const { return this->currentPos_; }

Point Ray::getDirection() const { return this->direction_; }

float Ray::getStep() const { return this->step_; }

void Ray::move() // The point moves in the specified direction with the given step -The function relies on member attributes that getYou should set first-
{
    float newX = this->currentPos_.getX() + (this->direction_.getX() * this->getStep());
    float newY = this->currentPos_.getY() + (this->direction_.getY() * this->getStep());
    float newZ = this->currentPos_.getZ() + (this->direction_.getZ() * this->getStep());
    this->currentPos_.setCoordinates(newX, newY, newZ);
}