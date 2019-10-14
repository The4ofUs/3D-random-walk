// (x,y,z)
class Point
{

public:
    void setCoordinates(float x, float y, float z);
    float getX() const;
    float getY() const;
    float getZ() const;

private:
    float _x;
    float _y;
    float _z;
};
