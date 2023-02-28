#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double distance(double a[],double b[],int n)
{
	int i;
	double sum=0;
	for(i=0;i<n;i++)
	sum=sum+(a[i]-b[i])*(a[i]-b[i]);
	return sqrt(sum);
}

int main(void)
{
	int N,i;
	double X[50],Y[50],d;


	printf("enter vector size:");
	scanf("%d",&N);
	
	printf("enter X vector:");
	for(i=0;i<N;i++){
		scanf("%lf",&X[i]);
		}
	
	printf("enter Y vector:");
	for(i=0;i<N;i++){
		scanf("%lf",&Y[i]);
	}	
	
		
	d=distance(X,Y,N);
	
	printf("distance is %2.f\n",d);
	system("pause");
	return(0);

	
}
