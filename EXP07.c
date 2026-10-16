
#include <stdio.h>
int main()
{
 int principal, rate, years;
 double interest, amount, discount, settlement;
 scanf("%d %d %d", &principal, &rate, &years);
 interest = principal * rate * years / 100.0; /* simple interest */
 amount = principal + interest; /* principal + interest */
 discount = interest * 2 / 100; /* 2% discount on the interest */
 settlement = amount - discount; /* final amount to be paid */
 printf("%.2f\n", interest);
 printf("%.2f\n", amount);
 printf("%.2f\n", discount);
 printf("%.2f\n", settlement);
 return 0;
}
output 
      100
       1
      10
     10.100
      110
      0.20
      109.80 
