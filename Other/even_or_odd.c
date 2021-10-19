#include<stdio.h>
void main(){
    char *str[2] = {"Even","Odd"};
    int n;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    printf("\nThe Number is %s",str[n&1]);
}