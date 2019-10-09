#include "RandomnessGeneration.hpp"

class Ray
{
private:
    Point currentPos;
    Point direction;
    double step;

public:
    void startFrom(Point startingPoint) // Sets getyour starting point
    {
        this->currentPos.setCoordinates(startingPoint.getx(), startingPoint.gety(), startingPoint.getz());
    };

    void setDirection(Point direction) // Sets the direction of the ragety
    {
        this->direction.setCoordinates(direction.getx(), direction.gety(), direction.getz());
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

    void move() // The point moves in the specified direction with the given step -The function relies on member attributes that getyou should set first-
    {
        double newx = this->currentPos.getx() + (this->direction.getx() * this->getStep());
        double newy = this->currentPos.gety() + (this->direction.gety() * this->getStep());
        double newz = this->currentPos.getz() + (this->direction.getz() * this->getStep());
        this->currentPos.setCoordinates(newx, newy, newz);
    }
};