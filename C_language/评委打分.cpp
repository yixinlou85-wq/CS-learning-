#include<stdio.h>

int main()
{
	int sum,max,min,score[10]={0};
	float average;
	sum = 0;
	printf("input Score:");
	for(int i=0;i<10;i++){
		scanf("%d",&score[i]);
	}
	max = score[0];
	min = score[0];
	for(int i=0;i<10;i++){
		if(score[i]>max){
			max = score[i];
		}
		if(score[i]<min){
			min = score[i];
		}
		sum = sum + score[i];
	}
	average = (sum - max - min)/8.0;
	printf("Average Score:%.2f\n",average);
}
