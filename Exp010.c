
#include <stdio.h>
int main()
{
 int units;
 long paise; /* bill is kept in paise so there are no rounding errors */
 scanf("%d", &units);
 if (units <= 200)
 paise = units * 50L; /* Rs.0.50 per unit */
 else if (units <= 400)
 paise = units * 65L + 10000; /* Rs.0.65 per unit + Rs.100 */
 else if (units <= 600)
 paise = units * 80L + 20000; /* Rs.0.80 per unit + Rs.200 */
 else
 paise = units * 125L + 42500; /* Rs.1.25 per unit + Rs.425 */
 if (paise % 100 == 0)
 printf("Rs.%ld\n", paise / 100);
 else
 printf("Rs.%ld.%02ld\n", paise / 100, paise % 100);
 return 0;
}
output 
    200
    Rs.100
