#include <stdio.h> 
int gcd(int n, int m) 
{
if (m == 0) 
{
 return n;
} 
else
 {
return gcd(m, n % m);
}
 return (n * m) / gcd(n, m);
}
int main() 
{
int n, m;

printf("Enter the first number: "); scanf("%d", &n);

printf("Enter the second number: "); scanf("%d", &m);

int gcd(int n, int m) ;

printf("LCM of %d and %d is: %d\n", n,m, lcm(n, m));
}
