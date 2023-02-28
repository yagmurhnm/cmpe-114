#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	
	int i,n,st_id[100],scores[100];
	printf("enter the number of students in the class:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("enter the student number and score:");
		scanf("%d%d",&st_id[i],&scores[i]);
	}
	
	printf("students with scores between 70 and 80:\n");
	for(i=0;i<n;i++){
		if(scores[i]>70 && scores[i]<80){
			printf("student: %d score:%d\n",st_id[i],scores[i]);
		}
	}
	
	system("pause");
	return 0;
}
