#include<stdio.h>
int main(){
    static int a= 0;
    a++;
    if (a>100)
    {
        return 0;
    }
    printf("%d\n", a);
    main();
}