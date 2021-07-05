#include "physicalFormulasAdvanced.h"
#include <math.h>
#include <stdlib.h>

float calculateLinearPath(Velocity velocity, struct deltaTime dtime)
{
    return velocity * (dtime.endTime - dtime.startTime);
}

float calculateAcceleratedPath(struct deltaVelocity dvelo, Acceleration acceleration)
{

    return ((exp2f(dvelo.endVelocity) - exp2f(dvelo.startVelocity)) / 2 * acceleration);
}

float calculateLinearPathVelocity(Velocity startVelocity, Acceleration acceleration, struct deltaTime dtime)
{
    return (acceleration * (dtime.endTime - dtime.startTime)) + startVelocity;
}
