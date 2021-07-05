//standart libs
#include <stdio.h>

//physic libs
#include "physicalFormulasBasic.c"
#include "physicalFormulasAdvanced.c"

int main(void)
{

    //static const int END = 0;
    unsigned int input;

    do
    {
        printf("\nWelcome to our Physics-Testing-Dialog.\n ----------------------------------- \n");

        //print options
        printf("Your options are: \n");
        puts("0: For Ending The Software.\n");
        puts("1: Calculating Velocity(Point / Time)\n");
        puts("2: Calculating Acceleration(Velocity / Time)\n");
        puts("3: Calculating Impulse(Mass * Velocity)\n");
        puts("4: Calculating LinearPath(Velocity * Delta Time)\n");
        puts("5: Calculating AcceleratedPath(Acceleration * Velocity)\n");
        puts("6: Calculating LinearPathVelocity(Acceleration * Time + Start Velocity)\n");

        scanf("%i", &input);
        fflush(stdin);

        switch (input)
        {

            /* ---------------------------------------------------------------------- */

        case 1:
        {
            puts("You chose: 1: Calculating Velocity(Point / Time)\n");

            float start;
            printf("Please input the starting point:\n(#.#): ");
            scanf("%f", &start);
            fflush(stdin);

            float startTime;
            printf("Please input the starting time. (This is often 0, because of relativity)\n(#.#): ");
            scanf("%f", &startTime);

            float end;
            printf("Please input the end point: \n(#.#): ");
            scanf("%f", &end);

            float endTime;
            printf("Please input the end time.\n(#.#): ");
            scanf("%f", &endTime);

            struct deltaPoint dpoint = {start, end};
            struct deltaTime dtime = {startTime, endTime};

            printf("The values are start time %f end time %f start point %f end point %f\n", dtime.startTime, dtime.endTime, dpoint.startPoint, dpoint.endPoint);

            Velocity result = calculateVelocity(dpoint, dtime);
            printf("The result is: \t %f\n", result);
        }
        break;

            /* ---------------------------------------------------------------------- */

        case 2:
        {

            puts("You chose: 2: Calculating Acceleration(Velocity / Time)\n");
            //get velocity
            float startV;
            printf("Please input the starting velocity:\n(#.#): ");
            scanf("%f", &startV);

            float endV;
            printf("Please input the end velocity:\n(#.#): ");
            scanf("%f", &endV);

            struct deltaVelocity dVelocity = {startV, endV};

            //get time
            float startTime;
            printf("Please input the starting time. (This is often 0, because of relativity)\n(#.#): ");
            scanf("%f", &startTime);

            float endTime;
            printf("Please input the end time.\n(#.#)");
            scanf("%f", &endTime);

            struct deltaTime dtime = {startTime, endTime};

            //calculate result
            Acceleration result = calculateAcceleration(dVelocity, dtime);
            printf("The result is: \t %f\n", result);
        }
        break;

            /* ---------------------------------------------------------------------- */

        case 3:
        {

            puts("You chose: 3: Calculating Impulse(Mass * Velocity)\n");
            //get velocity
            Mass mass;
            printf("Please input the mass:\n(#.#): ");
            scanf("%f", &mass);

            Velocity velo;
            printf("Please input the velocity:\n(#.#): ");
            scanf("%f", &velo);

            Impulse result = calculateImpulse(mass, velo);
            printf("The result is: \t %f\n", result);
        }
        break;

            /* ---------------------------------------------------------------------- */

        case 4:
        {

            puts("You chose: 4: Calculating LinearPath(Velocity * Delta Time)\n");

            float startT, endT;
            printf("Please input the starting time and the end time like this: #.#.-#.#\n");
            scanf("%f-%f", &startT, &endT);
            fflush(stdin);
            struct deltaTime dtime = {startT, endT};

            Velocity velo;
            puts("Please input the Velocity like this: #.#\n");
            scanf("%f", &velo);
            fflush(stdin);

            //calculation
            float result = calculateLinearPath(velo, dtime);
            printf("The result is: %.3f", result);
        }
        break;

            /* ---------------------------------------------------------------------- */

        case 5:
        {

            puts("You chose: 5: Calculating AcceleratedPath(Acceleration * Velocity)\n");

            Velocity startVelo, endVelo;
            printf("Please input the starting velocity and the end velocity like this: #.#.-#.#\n");
            scanf("%f-%f", &startVelo, &endVelo);
            fflush(stdin);
            struct deltaVelocity dvelo = {startVelo, endVelo};

            Acceleration acceleration;
            puts("Please input the acceleration like this: #.#\n");
            scanf("%f", &acceleration);
            fflush(stdin);

            //calculation
            float result = calculateAcceleratedPath(dvelo, acceleration);
            printf("The result is: %.3f", result);
        }
        break;

            /* ---------------------------------------------------------------------- */

        case 6:
        {
            puts("You chose: 6: Calculating LinearPathVelocity(Acceleration * Time + Start Velocity)\n");

            Velocity startVelo, result;
            Acceleration acc;
            float startT, endT;

            printf("Please input the starting velocity like this: #.#\n");
            scanf("%f", &startVelo);
            fflush(stdin);
            printf("Please input the acceleration like this: #.#\n");
            scanf("%f", &acc);
            printf("Please input the time difference like this: #.#-#.#\n");
            scanf("%f-%f", &startT, &endT);
            struct deltaTime dtime = {startT, endT};

            //calculation
            result = calculateLinearPathVelocity(startVelo, acc, dtime);
            printf("The result is: %.3f \n", result);
        }
        break;

            /* ---------------------------------------------------------------------- */

        case 0:
        {
            printf("Thank you for testing our software. See you soon.\n");
            break;
        }

        default:
        {
            //tell the user that his input was not correct or something like that
            printf("Wrong input man.\n");
        }
        break;
        }

    } while (input != 0);
}
