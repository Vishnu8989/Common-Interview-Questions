#include <stdio.h>
void my_binary(int n)
{
    int a[10], i;

    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    printf("\n");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}
void main()
{
    int a = 10, b = 5;
    printf("\n%d,%d", a, b);
    my_binary(a);
    my_binary(b);
    // a ^= b ^= a ^= b;
    a ^= b;
    my_binary(a);
    b ^= a;
    my_binary(b);
    a ^= b;
    my_binary(a);
    printf("\n%d,%d", a, b);
}