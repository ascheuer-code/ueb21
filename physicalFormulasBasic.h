#ifndef PHYSICALFORMULASBASIC_H
#define PHYSICALFORMULASBASIC_H

#include "physicalTypes.h"

Velocity calculateVelocity(struct deltaPoint dpoint, struct deltaTime dtime);

Acceleration calculateAcceleration(struct deltaVelocity dVelo, struct deltaTime dtime);

Impulse calculateImpulse(Mass, Velocity);

#endif
