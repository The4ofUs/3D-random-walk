#include "header.hpp"

struct Point
{
    double x;
    double y;
    double z;
};

// Export the generated point into the output.csv file in the same directory
void streamOut(Point p)
{
    // For streaming out my output in a log file
    FILE *output;
    output = fopen("output.csv", "a");
    fprintf(output, "x,y,z\n");

    // Streaming out my output in a log file
    fprintf(output, "%f,%f,%f\n", p.x, p.y, p.z);
}

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
        srand(time(NULL));
        return {((double)rand()) / (double)RAND_MAX};
    }

    // Returns a random triplet of doubles (x,y,z) as an instance of Point
    Point getRandomPoint()
    {
        // Seeding the random number generator with time(null) to get a different seed each time this function is called
        srand(time(NULL));

        Point point; // Instance of the Point struct to return with the random coordinates

        // Getting random values for spherical coordinates transformation parameters
        float u = ((float)rand()) / (float)RAND_MAX;
        float v = ((float)rand()) / (float)RAND_MAX;
        float r = cbrt(((float)rand()) / (float)RAND_MAX); // Cubic root to prevent clumping in the center

        // Transformation equations
        double theta = 2 * M_PI * u;
        double phi = acos(1 - 2 * v);

        // Transforming into the cartesian space
        point.x = sin(phi) * cos(theta);
        point.y = sin(phi) * sin(theta);
        point.z = cos(phi);

        return point;
    }
};

int main()
{
    // Creating an instance of our RandomnessGenerator class
    RandomnessGenerator Random;

    // Getting a random step
    double step = Random.getRandomStep();

    // Creating a direction struct which is going to carry our (x,y,z)
    Point point = Random.getRandomPoint();

    //Checking output
    std::cout << "( " << point.x << ", " << point.y << ", " << point.z << " )" << std::endl;

    streamOut(point);

    return 0;
}