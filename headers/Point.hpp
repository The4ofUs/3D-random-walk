// (x,y,z)
class Point
{

public:
    void setCoordinates(double x, double y, double z);
    double getX() const;
    double getY() const;
    double getZ() const;

private:
    double x;
    double y;
    double z;
};
