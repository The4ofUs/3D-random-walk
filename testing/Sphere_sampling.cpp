#include <random>
#include <cmath>
#include <chrono>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    int N = 1000;
    double Step[N];
    srand(time(NULL));

    FILE *output;
    output = fopen("output.csv", "w");
    fprintf(output, "Theta,Phi,x,y,z\n");

    for (int i = 0; i < N; i++)
    {
        //uniform sampling between 0 and 1
        double step = {((float)rand()) / (float)RAND_MAX};
        Step[i]=step;
        float u = ((float)rand()) / (float)RAND_MAX;
        float v = ((float)rand()) / (float)RAND_MAX;
        // cubic root to prevent clumping in the center
        float r = cbrt(((float)rand()) / (float)RAND_MAX);

        double theta = 2 * M_PI * u;
        double phi = acos(1 - 2 * v);
        double x = r * sin(phi) * cos(theta);
        double y = r * sin(phi) * sin(theta);
        double z = r * cos(phi);

        fprintf(output, "%f,%f,%f,%f,%f\n", theta, phi, x, y, z);
    }

    fclose(output);
    float step = {((float)rand()) / (float)RAND_MAX};

    std::cout <<"stepis"<< step;
}