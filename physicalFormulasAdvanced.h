#ifndef PHYSICALFORMULASADVANCED_H
#define PHYSICALFORMULASADVANCED_H

#include "physicalTypes.h"

float calculateLinearPath(Velocity velocity, struct deltaTime dtime);

float calculateAcceleratedPath(struct deltaVelocity dvelo, Acceleration acceleration);

float calculateLinearPathVelocity(Velocity startVelocity, Acceleration acceleration, struct deltaTime dtime);

#endif
