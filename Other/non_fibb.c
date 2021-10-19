#include <stdio.h>
void main()
{
    int a1 = 0, a2 = 1, k = 0, a3 = 0;
    while (k != 10)
    {
        if (k == a3)
        {
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
        }
        else
        {
            printf("\n%d", k);
        }
        k++;
    }
}