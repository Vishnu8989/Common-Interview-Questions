// program to convert decimal representation into binary representation
#include <iostream>
using namespace std;
void binary(int a)
{
    if (a >= 1)
    {
        binary(a / 2);
        printf("%d", a % 2);
    }
}
void octet(int a)
{
    if (a >= 1)
    {
        octet(a / 8);
        printf("%d", a % 8);
    }
}
void hexa(int a)
{
    if (a >= 1)
    {
        hexa(a / 16);
        if(a % 16 == 10) printf("A");
        else if(a % 16 == 11) printf("B");
        else if(a % 16 == 12) printf("C");
        else if(a % 16 == 13) printf("D");
        else if(a % 16 == 14) printf("E");
        else if(a % 16 == 15) printf("F");
        else printf("%d", a % 16);
    }
}
int main()
{
    binary(69);
    printf("\n");
    octet(69);
    printf("\n");
    hexa(69);
    return 0;
}