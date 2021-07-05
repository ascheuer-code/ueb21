#include "physicalFormulasBasic.h"
#include <stdio.h>
Velocity calculateVelocity(struct deltaPoint dpoint, struct deltaTime dtime)
{
    printf("The values are start time %f end time %f start point %f end point %f\n", dtime.startTime, dtime.endTime, dpoint.startPoint, dpoint.endPoint);
    return (dpoint.endPoint - dpoint.startPoint) / (dtime.endTime - dtime.startTime);
}

Acceleration calculateAcceleration(struct deltaVelocity dVelo, struct deltaTime dtime)
{
    return ((dVelo.endVelocity - dVelo.startVelocity) / (dtime.endTime - dtime.startTime));
}

Impulse calculateImpulse(Mass m, Velocity v)
{
    return m * v;
}
