#include <stdio.h>
#define sum(x) printf(#x " : %d", x);
int main(int argc, char const *argv[])
{
    sum(3 + 5);
    return 0;
}
