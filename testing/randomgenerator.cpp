#include "header.hpp"

class randomGenerator
{
    // Access specifier followed by the Data members then function members
    public:
        int N;      // N is the number of steps
        double r, theta, phi;       // Spherical Coordinates
        double Step[1000];

    /* TO-BE-EDITED */
    // Direction struct that holds my cartesian coordinates as a triplet of doubles (X,Y,Z)
    struct directions
    {
        std::array<double, 1000> X;
        std::array<double, 1000> Y;
        std::array<double, 1000> Z;
    };
    directions D;

    // Function that returns an array of random steps
    double *randomStep(int N)
    {
        for (int i = 0; i <= N; i++)
        {
            double step = {((float)rand()) / (float)RAND_MAX};
            Step[i] = step;
        }
        return Step;
    }
    directions randomDirection(int N)
    {
        FILE *output;
        output = fopen("output.csv", "w");
        fprintf(output, "Theta,Phi,x,y,z\n");

        for (int i = 0; i <= N; i++)
        {
            float u = ((float)rand()) / (float)RAND_MAX;
            float v = ((float)rand()) / (float)RAND_MAX;
            // cubic root to prevent clumping in the center
            float r = cbrt(((float)rand()) / (float)RAND_MAX);
            double theta = 2 * M_PI * u;
            double phi = acos(1 - 2 * v);
            double x = sin(phi) * cos(theta);
            D.X[i] = x;
            double y = sin(phi) * sin(theta);
            D.Y[i] = y;
            double z = cos(phi);
            D.Z[i] = z;
            fprintf(output, "%f,%f,%f,%f,%f\n", theta, phi, x, y, z);
        }
        return D;
    }
};

int main()
{
    randomGenerator Random;
    randomGenerator::directions D;
    //testing randomStep algorithm
    double *f;
    srand(time(NULL));

    f = Random.randomStep(1000);
    for (int i = 0; i < 999; i++)
    {
        std::cout << "*(f + " << i << ") : ";
        std::cout << *(f + i) << std::endl;
    }
    //testing randomDirection algorithm
    D = Random.randomDirection(100);
    for (int i = 0; i <= 999; i++)
    {
        std::cout << "X is" << D.X[i] << std::endl;
        std::cout << "Y is" << D.Y[i] << std::endl;
        std::cout << "Z is" << D.Z[i] << std::endl;
    }
}