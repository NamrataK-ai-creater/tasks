 //The total mechanical energy of a particle is given by e=mgh+(1/2) mv^2?
#include <stdio.h>
int main() 
{
    float mass, height, velocity, gravitational_constant = 9.81, mechanical_energy;
    mechanical_energy;
    printf("Enter the mass of the particle (in kg): ");
    scanf("%f", &mass);
    printf("Enter the height of the particle (in meters): ");
    scanf("%f", &height);
    printf("Enter the velocity of the particle (in m/s): ");
    scanf("%f", &velocity);
    mechanical_energy = mass * gravitational_constant * height + 0.5 * mass * velocity * velocity;
    printf("Total mechanical energy of the particle: %f j", mechanical_energy);
    return 0;
}
