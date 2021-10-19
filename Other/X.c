#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,i,j;
	printf("\nEnter a : ");
	scanf("%d",&a);
	a = 2*a-1;
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < a; ++j)
		{
			if (i==j||i+j==a-1)
			{
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
// #include<stdio.h>
// int main()
// {
// 	int i,j,n;
// 	printf("Enter a number: ");
// 	scanf("%d",&n);
// 	for(i=1;i<2*n;i++)
// 	{
// 	for(j=1;j<2*n;j++)
// 		if(i==j || i+j==2*n)
// 			printf("*");
// 		else
// 			printf(" ");
// 	printf("\n");
// 	}
// }
