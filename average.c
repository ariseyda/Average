#include<stdio.h>
#define MAX 150

//A computer program receives integer values until last value entered is equal to zero. 
//After zero is entered, average of the entered values, except the last zero, is displayed.


int main(){
	
	int i;
	float average;
	float sum=0;
	int size=0;
	int numbers[MAX];
	
	printf("Please enter integers:");
	
	for(i=0;i<MAX;i++){
		scanf("%d",&numbers[i]);
		if(numbers[i]!=0){
		    sum+=numbers[i];
		    size++;
		}
	    else{
	    	average=sum/size;
	        printf("Average:%.2f",average);
		}
    }

	return 0;
}

