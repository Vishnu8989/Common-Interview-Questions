#include<stdio.h>
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
int main(int argc, char const *argv[])
{    
    int a = 4;
    int b = 4;
    printf("%d^%d = %d",a,b,a^b);
    my_binary((a^b));
    if (!(a^b))
    {
        printf("Yes");
    }else{
        printf("No");
    }
    
    return 0;
}
