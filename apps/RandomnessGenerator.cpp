#include "RandomnessGenerator.hpp"

float RandomnessGenerator::getRandomStep() const
{
    // Seeding the random number generator with time(null) to get a different seed each time this function is called
    return {((float)rand()) / (float)RAND_MAX};
}

Point RandomnessGenerator::getRandomPoint()
{
    // Seeding the random number generator with time(null) to get a different seed each time this function is called

    Point point; // Instance of the Point struct to return with the random coordinates

    // Getting random values for spherical coordinates transformation parameters
    float u = ((float)rand()) / (float)RAND_MAX;
    float v = ((float)rand()) / (float)RAND_MAX;
    float r = cbrt(((float)rand()) / (float)RAND_MAX); // Cubic root to prevent clumping in the center

    // Transformation equations
    float theta = 2 * M_PI * u;
    float phi = acos(1 - 2 * v);

    // Transforming into the cartesian space
    float x = sin(phi) * cos(theta);
    float y = sin(phi) * sin(theta);
    float z = cos(phi);

    point.setCoordinates(x, y, z);
    exportSamplingPlot(point);

    return point;
}

void RandomnessGenerator::exportSamplingPlot(Point point)
{
    // For streaming out my output in a log file
    FILE *sampling;
    sampling = fopen("sampling.csv", "a");
    // Streaming out my output in a log file
    fprintf(sampling, "%f,%f,%f\n", point.getX(), point.getY(), point.getZ());
}