#include <random>
#include <cmath>
#include <chrono>
#include <iostream>
#include <array>
#include <ctime>
#include <new>
class randomGenerator
{
    // Access specifier followed by the Data members then function members
public:
    int N = 0;
    double r, theta, phi;
    double *Step = new double[N];

    struct directions
    {
        int n = 0;
        double *X = new double[n];
        double *Y = new double[n];
        double *Z = new double[n];
    };
    directions D;

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
            double x = r * sin(phi) * cos(theta);
            D.X[i] = x;
            double y = r * sin(phi) * sin(theta);
            D.Y[i] = y;
            double z = r * cos(phi);
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
    int n;
    //testing randomStep algorithm
    double *f;
    srand(time(NULL));
    std::cin >> n;
    D.n = n;
    Random.N = n;
    f = Random.randomStep(n);
    for (int i = 0; i < n; i++)
    {
        std::cout << "*(f + " << i << ") : ";
        std::cout << *(f + i) << std::endl;
    }
    //testing randomDirection algorithm
    D = Random.randomDirection(n);
    for (int i = 0; i <= n; i++)
    {
        std::cout << "X is" << D.X[i] << std::endl;
        std::cout << "Y is" << D.Y[i] << std::endl;
        std::cout << "Z is" << D.Z[i] << std::endl;
    }
}