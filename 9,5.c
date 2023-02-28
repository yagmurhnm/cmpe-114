#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int votes[5],i,max=0,sum=0,index=0;
	printf("enter the vote numbers for 5 parties:");
	for(i=0;i<5;i++){
		scanf("%d",&votes[i]);
		sum=sum+votes[i];
		
	}
	
	//printing votes//
	for(i=0;i<5;i++){
		printf("%d. party has %d votes \n",i+1,votes[i]);
		
	}
	
	//percentages//
	printf("percentages:");
	for(i=0;i<5;i++){
		printf("%d. party:%.2lf\n",i+1,(double)votes[i]/sum*100);
		
	}
	
	//winner//
	
	max=votes[0];
	for(i=1;i<5;i++){
		if(max<votes[i]){
			max=votes[i];
			index=i;
		}
	}
	
	printf("the winner is:party %d\n",index+1);
	system("pause");
	return 0;
	
}
