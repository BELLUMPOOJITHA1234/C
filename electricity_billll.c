#include <stdio.h>
int main()
{
float u,a;
printf("Enter number of units consumed: ");
scanf("%f", &u);
if (u <= 100)
{
a = u* 1.50;
}
else if (u <= 300)
{
a = 100 * 1.50 + (u - 100) * 2.00;
}
else
{
a = 100 * 1.50 + 200 * 2.00 + (u - 300) * 3.00;
}
if (a < 50)
{
a = 50;
}
if (a > 500)
{
a = a* 0.20; 
}
printf("Units Consumed : %.2f\n", u);
printf("Total Bill Amount: Rs. %.2f\n", a);
return 0;
}
