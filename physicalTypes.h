#ifndef PHYSICALTYPES_H
#define PHYSICALTYPES_H

//first library
typedef float Velocity;
typedef float Acceleration;
typedef float Impulse;
typedef float Mass;

typedef struct deltaPoint
{
    float startPoint;
    float endPoint;
} DeltaPoint;

typedef struct deltaTime
{
    float startTime;
    float endTime;
} DeltaTime;

typedef struct deltaVelocity
{
    float startVelocity;
    float endVelocity;
} DeltaVelocity;

#endif
