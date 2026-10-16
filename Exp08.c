
#include <stdio.h>
int main()
{
 int experience, performance;
 char *level;
 printf("Experience: ");
 scanf("%d", &experience);
 printf("Performance: ");
 scanf("%d", &performance);
 if (experience < 3) /* never above Junior */
 level = "Junior";
 else if (experience <= 7) /* 3 to 7 years */
 level = (performance >= 80) ? "Mid-Level" : "Junior";
 else if (performance >= 85) /* more than 7 years */
 level = "Senior";
 else if (performance >= 80)
 level = "Mid-Level";
 else
 level = "Junior";
 printf("Level: %s\n", level);
 return 0;
}
output 
  Experience:9
  performance:81
  Level :senior
