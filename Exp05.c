
#include <stdio.h>
int main()
{
 float mileage;
 int petrol, distance;
 scanf("%f %d %d", &mileage, &petrol, &distance);
 /* distance the car can cover = mileage x litres of petrol */
 if (mileage * petrol >= distance)
 printf("Can reach\n");
 else
 printf("Cannot reach\n");
 return 0;
}
output 
       11
        6
        67
       cannot reach 
