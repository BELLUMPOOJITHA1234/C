#include <stdio.h>
int gcd(int a, int b)
{
    while (b != 0) 
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int m, int n)
 {
    return (m * n) / gcd(m, n);
}

int main() 
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", lcm(m, n));
    return 0;
}

