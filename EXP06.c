
#include <stdio.h>
int main()
{
 int a, b, c, car;
 scanf("%d %d %d %d", &a, &b, &c, &car);
 /* the car goes into the road whose number is divisible by the car number */
 if (car != 0 && a % car == 0)
 printf("Car 1 goes into road A\n");
 else if (car != 0 && b % car == 0)
 printf("Car 1 goes into road B\n");
 else if (car != 0 && c % car == 0)
 printf("Car 1 goes into road C\n");
 else
 printf("No path exists\n");
 return 0;
}
output 
     243
     136
     567
      17
car 1 goes into road B
