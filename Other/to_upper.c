#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c = 'X';
    c = c ^ 32;
    printf("%c", c);
    int a = 97;
    a = a^32;
    printf("%d", a);
    return 0;
}
