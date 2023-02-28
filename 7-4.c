#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void factorial(int n,int *fact)
{
	int i;
	for(i=1;i<=n;i++){
		*fact=*fact*i;
	}

}

int main()
{
	int n;
	int a=1;
	int b=1;
	int c=1;
	double result;
	printf("enter n:");
	scanf("%d",&n);
	factorial(n,&a);
	factorial(n-1,&b);
	factorial(n-2,&c);
	
	result=(4.0/a)*(6.0/b)+(c/2.0)+(7.0/c);
	printf("The result is:%.2lf",result);
	
	system("pause");
	return 0;
	
}
