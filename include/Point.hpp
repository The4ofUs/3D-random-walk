// (x,y,z)
class Point
{

public:
    void setCoordinates(float x, float y, float z);
    float getX() const;
    float getY() const;
    float getZ() const;

private:
    float x_;
    float y_;
    float z_;
};
