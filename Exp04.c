
#include <stdio.h>
int main()
{
 int d1, c1, d2, c2;
 int dollars, cents;
 scanf("%d %d %d %d", &d1, &c1, &d2, &c2);
 cents = c1 + c2;
 dollars = d1 + d2 + cents / 100; /* every 100 cents make 1 dollar */
 cents = cents % 100;
 printf("%d\n%d\n", dollars, cents);
 return 0;
}
output 
   30
   10
   140
    99
    171
    9
