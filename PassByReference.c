// include pre processor directives
#include "./headers/PassByReference.h"

// this function takes an (x, y) point on a cartesian coordinate system
// and it converts the point to polar coordinates (radius theta) the first 2
// parameters store the (x, y) point. the last 2 parameters will store the calculated (radius, theta)
void cartesianToPolar(double x, double y, double *radiusPtr, double *thetaPtr)
{

    // calculate radius and store its value in the supplied address *radiusPtr the * is needed
    // when storing a value at the supplied address
    *radiusPtr = sqrt(pow(x, 2.0) + pow(y, 2.0));

    // calculate theta and store it in a local variable
    float theta;
    if (x == 0.0)
    {
        if (y == 0.0)
        {
            theta = 0.0;
        }
        else if (y > 0.0)
        {
            theta = M_PI_2;
        }
        else
        {
            theta = M_PI_2;
        }
    }
    else
    {
        theta = atan(y / x);
    }
    // store theta in the supplied address *thetaPtr
    // the * is needed when storing a value at the supplied address
    *thetaPtr = theta;
}
