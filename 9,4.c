#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void reversed(int arr[],int *n){
	int i,temp[100];
	
	for(i=0;i<*n;i++){
		temp[i]=arr[i];		
	}
	
	for(i=0;i<*n;i++){
		arr[*n-1-i]=temp[i];
	}
	
}

int main(){
	
	int i,list[100],n;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter %d integers:",n);
	
	for(i=0;i<n;i++){
		scanf("%d",&list[i]);
		
	}
	
	printf("the array is:");
	for (i=0;i<n;i++){
		printf("%d",list[i]);
	}
	
	reversed(list,&n);
	printf("\nthe reversed array is:");
	
	for(i=0;i<n;i++){
		printf("%d",list[i]);
	}
	
	system("pause");
	return 0;
	
	
}
