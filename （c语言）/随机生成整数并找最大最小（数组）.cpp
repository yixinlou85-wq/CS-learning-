#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int max,a[20],min;
	srand(time(NULL));
	max = a[0];
	min = a[0];
	printf("生成的20个随机数是：\n");
	for(int i=0;i<20;i++){
		a[i] = rand()%100;
		printf("%d ",a[i]);
		if(a[i]>max){
			max = a[i];
		}
		if(a[i]<min){
			min = a[i];
		}
	}
	printf("\n");
	printf("max=%d min=%d",max,min);
	return 0;
}
