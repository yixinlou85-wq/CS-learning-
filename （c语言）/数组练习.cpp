#include<stdio.h>

int main()
{
	int a[10];
	int max;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	max = 0;
	for(int i=0;i<10;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	printf("最大的整数是：%d",max);
	return 0; 
}
