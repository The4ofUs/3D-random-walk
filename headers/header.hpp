#include <cmath>
#include <chrono>
#include <iostream>
#include <array>
#include <ctime>
#include "Ray.hpp"


// Export the generated point into the output.csv file in the same directory
void streamOut(Ray ray)
{
    // For streaming out my output in a log file
    FILE *output;
    output = fopen("output.csv", "a");

    // Streaming out my output in a log file
    fprintf(output, "%f,%f,%f\n", ray.getCurrentPos().getX(), ray.getCurrentPos().getY(), ray.getCurrentPos().getZ());
}