#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int gcd(int a, int b)   //最大公约数
{
    while (b != 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int lcm(int a, int b)   //最小公倍数
{
    return a / gcd(a, b) * b;
}
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d %d", gcd(m, n), lcm(m, n));
    return 0;
}