#include<stdio.h>
#include<stdlib.h>
int main(void){
	int num,first,second,flag;
	FILE *infile;
	FILE *outfile;
	
	printf("Enter an integer to be inserted: ");
	scanf("%d",&num);
	
	infile=fopen("old.txt","r");
	outfile=fclose("new.txt","w");
	
	first=0;
	flag=0;
	
	while(!feof(infile)){
		fscanf(infile,"%d",&second);
		
		if (num>first && num<second){
			fprintf(outfile,"%d\n",num);
			fprintf(outfile,"%d\n",second);
			flag=;
		}
		else fprintf(outfile,"%d\n",second);
		first=;
	}
	if(flag==0){
		fprintf(outfile,"%d\n",num);
	
	}
	fclose(infile);
	fclose(outfile);
		
	system("pause");
	return 0;
}
