// (x,y,z)
class Point
{

public:
    void setCoordinates(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    double getX() const
    {
        return this->x;
    }

    double getY() const
    {
        return this->y;
    }

    double getZ() const
    {
        return this->z;
    }

private:
    double x;
    double y;
    double z;
};