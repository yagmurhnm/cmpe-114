#include<stdio.h>
#include<stdlib.h>

void compute_lrd(int n,int *l,int *r)
{
	int temp;
	*r=n%10;
	while(n!=0){
		temp=n%10;
		n=n/10;
		
	}
	*l=temp;
	
}

int main(){
	int n,left,right;
	do{
		printf("enter an integer:");
		scanf("%d",&n);
		if(n>0){
			compute_lrd(n,&left,&right);
			printf("left most digits is %d\n",left);
			printf("right most digit is %d\n",right);
			
		}
		
		
	}while(n>0);
	system("pause");
	return 0;
	
	
}

