class vector
{
public:
    point P;
    point D;
    step S;

    void StartFrom (point P ){
        this-> x =P.x;  
        this-> y =P.y;  
        this-> z =P.z;  
    };
    void MoveTo (point P, point D, step S)
    {
      P.x =P.x + D.x*S;
      P.y =P.y + D.y*S;
      P.z =P.z + D.z*S;
    };
      
};