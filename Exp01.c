#include <stdio.h>
#include <string.h>
int main()
{
 int distance, fare = 100; /* base fare is Rs.100 */
 char member[10];
 printf("Distance: ");
 scanf("%d", &distance);
 printf("Member: ");
 scanf("%9s", member);
 /* Rs.20 for every km beyond the first 10 km */
 if (distance > 10)
 fare = fare + (distance - 10) * 20;
 /* 10% discount for members */
 if (strcmp(member, "true") == 0 || strcmp(member, "1") == 0)
 fare = fare - fare / 10;
 printf("Final Fare: ₹%d\n", fare);
 return 0;
 }
Output:
Distance:15
Member:true
final fare: Rs.180
