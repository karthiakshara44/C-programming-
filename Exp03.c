
#include <stdio.h>
int main()
{
 int total, x, y;
 int ben, blackbeard, remaining, each;
 scanf("%d %d %d", &total, &x, &y);
 ben = total * x / 100; /* Long Ben gets x% of all coins */
 remaining = total - ben;
 blackbeard = remaining * y / 100; /* Blackbeard gets y% of the rest */
 remaining = remaining - blackbeard;
 each = remaining / 3; /* 3 other pirates share equally; */
 /* leftover coins go into the sea */
 printf("%d\n%d\n%d\n", ben, blackbeard, each);
 return 0;
}
output 
   729
    65
    87
    473
    222
     11
