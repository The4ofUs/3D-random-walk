#include "RandomnessGenerator.hpp"

class Ray
{

public:
    void startFrom(Point startingPoint) // Sets getYour starting point
    {
        this->currentPos.setCoordinates(startingPoint.getX(), startingPoint.getY(), startingPoint.getZ());
    };

    void setDirection(Point direction) // Sets the direction of the ragetY
    {
        this->direction.setCoordinates(direction.getX(), direction.getY(), direction.getZ());
    }

    void setStep(double step) // Sets the step of movement
    {
        this->step = step;
    }

    Point getCurrentPos() const
    {
        return this->currentPos;
    }

    Point getDirection() const
    {
        return this->direction;
    }

    double getStep() const
    {
        return this->step;
    }

    void move() // The point moves in the specified direction with the given step -The function relies on member attributes that getYou should set first-
    {
        double newX = this->currentPos.getX() + (this->direction.getX() * this->getStep());
        double newY = this->currentPos.getY() + (this->direction.getY() * this->getStep());
        double newZ = this->currentPos.getZ() + (this->direction.getZ() * this->getStep());
        this->currentPos.setCoordinates(newX, newY, newZ);
    }

private:
    Point currentPos;
    Point direction;
    double step;
};