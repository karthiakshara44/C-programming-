
#include <stdio.h>
int main()
{
 int year, month, days;
 scanf("%d %d", &year, &month);
 /* year must be 1900..9999 and month 1..12, otherwise print 0 */
 if (year < 1900 || year > 9999 || month < 1 || month > 12) {
 printf("0\n");
 return 0;
 }
 switch (month) {
 case 4: case 6: case 9: case 11:
 days = 30;
 break;
 case 2:
 if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
 days = 29; /* leap year */
 else
 days = 28;
 break;
 default:
 days = 31;
 }
 printf("%d Days\n", days);
 return 0;
}
output 
     2000
      2
     29 days
