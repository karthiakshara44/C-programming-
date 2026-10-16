#include <stdio.h>
int main()
{
 int answered, remaining, submitted;
 printf("Questions Answered: ");
 scanf("%d", &answered);
 printf("Remaining Time: ");
 scanf("%d", &remaining);
 printf("Already Submitted: ");
 scanf("%d", &submitted);
 /* at least one answer, time left, and not submitted before */
 if (answered >= 1 && remaining > 0 && submitted == 0)
 printf("Submission Allowed\n");
 else
 printf("Submission Not Allowed\n");
 return 0;
 }
output: 
questions answered:45
  remaining time: 12
  already submitted:0
  Submission allowed 
