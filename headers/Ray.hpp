#include "RandomnessGeneration.hpp"

class Ray
{
private:
    Point currentPos;
    Point direction;
    double step;

public:
    void startFrom(Point startingPoint) // Sets your starting point
    {
        this->currentPos.setCoordinates(startingPoint.getX(), startingPoint.getY(), startingPoint.getZ());
    };

    void setDirection(Point direction) // Sets the direction of the ray
    {
        this->direction.setCoordinates(direction.getX(), direction.getY(), direction.getZ());
    }

    void setStep(double step) // Sets the step of movement
    {
        this->step = step;
    }

    Point getCurrentPos()
    {
        return this->currentPos;
    }

    Point getDirection()
    {
        return this->direction;
    }

    double getStep()
    {
        return this->step;
    }

    void move() // The point moves in the specified direction with the given step -The function relies on member attributes that you should set first-
    {
        double newX = this->currentPos.getX() + (this->direction.getX() * this->getStep());
        double newY = this->currentPos.getY() + (this->direction.getY() * this->getStep());
        double newZ = this->currentPos.getZ() + (this->direction.getZ() * this->getStep());
        this->currentPos.setCoordinates(newX, newY, newZ);
    }
};