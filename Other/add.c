#include<stdio.h>
void main(){
    int x = 5,y=10;
    int z = printf("%*c%*c",x,' ',y,' ');
    printf("\nThe sum is : %d",z);
}