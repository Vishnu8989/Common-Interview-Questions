// program to print n non fibb numbers
#include <stdio.h>
int main()
{
    int count;
    printf("\nEnter n : ");
    scanf("%d", &count);
    int a1 = 0, a2 = 1, k = 0, a3 = 0;
    while (count>0)
    {
        if (k == a3)
        {
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
        }
        else
        {
            count--;
            printf("\n%d", k);
        }
        k++;
    }
    return 0;
}