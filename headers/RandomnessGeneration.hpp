#include <random>

// (x,y,z)
class Point
{
private:
    double x;
    double y;
    double z;

public:
    void setCoordinates(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    double getx()
    {
        return this->x;
    }

    double gety()
    {
        return this->y;
    }

    double getz()
    {
        return this->z;
    }
};

class RandomnessGenerator
{

    // Access specifier followed by the Data members then function members
public:
    // __________Constructor__________
    /* RandomnessGenerator()
    {
    } */

    // Function that returns a random step
    double getRandomStep()
    {
        // Seeding the random number generator with time(null) to get a different seed each time this function is called
        return {((double)rand()) / (double)RAND_MAX};
    }

    // Returns a random triplet of doubles (x,y,z) as an instance of Point
    Point getRandomPoint()
    {
        // Seeding the random number generator with time(null) to get a different seed each time this function is called

        Point point; // Instance of the Point struct to return with the random coordinates

        // Getting random values for spherical coordinates transformation parameters
        float u = ((float)rand()) / (float)RAND_MAX;
        float v = ((float)rand()) / (float)RAND_MAX;
        float r = cbrt(((float)rand()) / (float)RAND_MAX); // Cubic root to prevent clumping in the center

        // Transformation equations
        double theta = 2 * M_PI * u;
        double phi = acos(1 - 2 * v);

        // Transforming into the cartesian space
        double x = sin(phi) * cos(theta);
        double y = sin(phi) * sin(theta);
        double z = cos(phi);

        point.setCoordinates(x, y, z);
        exportSamplingPlot(point);

        return point;
    }

    void exportSamplingPlot(Point point)
    {
        // For streaming out my output in a log file
        FILE *sampling;
        sampling = fopen("sampling.csv", "a");
        // Streaming out my output in a log file
        fprintf(sampling, "%f,%f,%f\n", point.getx(), point.gety(), point.getz());
    }
};