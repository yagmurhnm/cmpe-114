#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int count(int arr[]){
	int i,c=0;
	for(i=0;i<10;i++){
		if(arr[i]>=10 && arr[i]<100)
		c++;
		
	}
	
	return c;

}

int main(){
	int i,cnt=10,a[10];
	printf("enter 10 integers:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		
	}

	cnt=count(a);
	printf("there are %d elements with 2 digits\n");
	system("pause");
	return 0;
}
