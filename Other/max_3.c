#include <stdio.h>
int max(int a, int b, int c)
{
    int max = a;
    (max < b) && (max = b);
    (max < c) && (max = c);
    return max;
}
int min(int a, int b, int c)
{
    int min = a;
    (min > b) && (min = b);
    (min > c) && (min = c);
    return min;
}
int main(int argc, char const *argv[])
{
    int a = 3, b = 20, c = 13;
    printf("Max : %d\n", max(a, b, c));
    printf("Min : %d\n", min(a, b, c));
    return 0;
}